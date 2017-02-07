#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-12.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                                 const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                    const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                          const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                              const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_banksel addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                   const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  cEnumerator_lstringlist enumerator_4374 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_4374.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4374.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4374.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  cEnumerator_lstringlist enumerator_4665 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_4665.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4665.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4665.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  cEnumerator_lstringlist enumerator_4957 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_4957.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4957.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_4957.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_do_while addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mRepeatedInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5563 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_5563.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_5563.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5563.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_savebank addUsedRoutines'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mThenInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_switch addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_6816 (object->mProperty_mCaseList, kENUMERATION_UP) ;
  while (enumerator_6816.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_6816.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
    }
    enumerator_6816.gotoNextObject () ;
  }
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (object->mProperty_mElseInstructionList, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 233)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_switch_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_macro addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_7278 ;
  GALGAS_lstringlist joker_7256 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (object->mProperty_mMacroName, joker_7256, var_instructionList_7278, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 242)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList (var_instructionList_7278, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 243)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_macro_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_FA addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_FBA addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_FDA addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_JSR addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  ioArgument_ioUsedRoutines.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 276)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                        const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                        GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_fnop addUsedRoutines'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * /* inObject */,
                                                                                     const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_block addUsedRoutines'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_10025 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_10025.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_10025.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    }
    enumerator_10025.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (void) {
  enterExtensionMethod_addUsedRoutines (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_addUsedRoutines (defineExtensionMethod_pic_31__38_Instruction_5F_block_addUsedRoutines, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'addPic18UsedRoutinesFromInstructionList'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addPic_31__38_UsedRoutinesFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                            const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                            GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10398 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10398.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_10398.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 354)) ;
    enumerator_10398.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'pic18_computeUsedRoutines'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::constructor_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 368)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_11132 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_11132.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11132.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    }
    enumerator_11132.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11372 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_11372.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11372.current_mRoutineName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)) ;
    enumerator_11372.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11525 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_11525.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11525.current_mRoutineName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 383)) ;
    enumerator_11525.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11629 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_used_routines.galgas", 386)) ;
  if (constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 387)).isValid ()) {
    uint32_t variant_11659 = constinArgument_inRoutineDefinitionList.getter_length (SOURCE_FILE ("pic18_used_routines.galgas", 387)).uintValue () ;
    bool loop_11659 = true ;
    while (loop_11659) {
      loop_11659 = GALGAS_bool (kIsNotEqual, var_s_11629.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11659) {
        loop_11659 = GALGAS_bool (kIsNotEqual, var_s_11629.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11659 && (0 == variant_11659)) {
        loop_11659 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 387)) ;
      }
      if (loop_11659) {
        variant_11659 -- ;
        var_s_11629 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11793 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
        while (enumerator_11793.hasCurrentObject ()) {
          const enumGalgasBool test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11793.current_mRoutineName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 391)).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            routine_addPic_31__38_UsedRoutinesFromInstructionList (enumerator_11793.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 392)) ;
            }
          }
          enumerator_11793.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_pic_31__38_InterruptDefinitionList operand0 = GALGAS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                       inCompiler
                                                                                                                       COMMA_THERE) ;
  const GALGAS_pic_31__38_RoutineDefinitionList operand1 = GALGAS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GALGAS_pic_31__38_MacroMap operand2 = GALGAS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand3 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand4 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  return function_pic_31__38__5F_computeUsedRoutines (operand0,
                                                      operand1,
                                                      operand2,
                                                      operand3,
                                                      operand4,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_block performInlining'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_block_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                             const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                             const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                             GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  GALGAS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1103 = GALGAS_pic_31__38_BlockInstructionBlockList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 33)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1131 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_1131.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_1337 ;
    {
    routine_performInlineFromInstructionList (enumerator_1131.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1337, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1103.addAssign_operation (enumerator_1131.current_mBlockName (HERE), var_instructionList_1337, enumerator_1131.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1131.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1131.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mStartBlockName, var_inlinedBlockList_1103, object->mProperty_mEndOfBlockInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_block_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_block_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_FOREVER performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                               GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_2143 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2143, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::constructor_new (object->mProperty_mInstructionLocation, var_instructionList_2143, object->mProperty_mEndOfInstructionList  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_do_while performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                   GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_2806 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mRepeatedInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2806, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList_2830 = GALGAS_pic_31__38_DoWhilePartList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 91)) ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_2893 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_2893.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_3099 ;
    {
    routine_performInlineFromInstructionList (enumerator_2893.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3099, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2830.addAssign_operation (enumerator_2893.current_mCondition (HERE), var_instructionList_3099, enumerator_2893.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_2893.gotoNextObject () ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::constructor_new (object->mProperty_mInstructionLocation, var_repeatedInstructionList_2806, object->mProperty_mEndOfRepeatedInstructionList, var_whilePartList_2830  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_savebank performInlining'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_pic_31__38_InstructionList var_instructionList_3860 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3860, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mRegister, var_instructionList_3860, object->mProperty_mEndOfSaveBankInstruction  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_savebank_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_structured_if performInlining'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                                        const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                                        const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                                        GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_4540 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mThenInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4540, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_4743 ;
  {
  routine_performInlineFromInstructionList (object->mProperty_mElseInstructionList, constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4743, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mIfCondition, var_thenInstructionList_4540, var_elseInstructionList_4743, object->mProperty_mEndOfElsePartLocation  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_JSR performInlining'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                           const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                           const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                           GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_inlineDone_5267 ;
  const enumGalgasBool test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_luint var_requiredBank_5538 ;
    GALGAS_bool var_isNoReturn_5630 ;
    GALGAS_pic_31__38_InstructionList var_instructionList_5679 ;
    GALGAS_luint joker_5546 ; // Joker input parameter
    GALGAS_bool joker_5578 ; // Joker input parameter
    constinArgument_inDeclaredRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_requiredBank_5538, joker_5546, joker_5578, var_isNoReturn_5630, var_instructionList_5679, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
    const enumGalgasBool test_1 = var_isNoReturn_5630.boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("pic18_routine_inlining.galgas", 179)), GALGAS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray2  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
      var_inlineDone_5267.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_requiredBank_5538.getter_uint (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::constructor_new (object->mProperty_mInstructionLocation, var_requiredBank_5538.getter_uint (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182))  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
      }
      GALGAS_stringset var_currentlyInlinedRoutineSet_6006 = constinArgument_inCurrentlyInlinedRoutineSet ;
      var_currentlyInlinedRoutineSet_6006.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
      cEnumerator_pic_31__38_InstructionList enumerator_6173 (var_instructionList_5679, kENUMERATION_UP) ;
      while (enumerator_6173.hasCurrentObject ()) {
        callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6173.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6006, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
        enumerator_6173.gotoNextObject () ;
      }
      var_inlineDone_5267 = GALGAS_bool (true) ;
    }
  }else if (kBoolFalse == test_0) {
    var_inlineDone_5267 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_4 = var_inlineDone_5267.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_5 = object ;
    ioArgument_ioInstructionList.addAssign_operation (temp_5  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining (void) {
  enterExtensionMethod_performInlining (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                        extensionMethod_pic_31__38_Instruction_5F_JSR_performInlining) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_performInlining (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_performInlining, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'performInlineFromInstructionList'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performInlineFromInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                               const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                               const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                               const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                               GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 213)) ;
  cEnumerator_pic_31__38_InstructionList enumerator_6929 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_6929.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_6929.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_6929.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'pic18PerformRoutineInline'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_PerformRoutineInline (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7466 = GALGAS_pic_31__38_InterruptDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 233)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7548 (ioArgument_ioInterruptDefinitionList, kENUMERATION_UP) ;
  while (enumerator_7548.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_7746 ;
    {
    routine_performInlineFromInstructionList (enumerator_7548.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_7746, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7466.addAssign_operation (enumerator_7548.current_mInterruptName (HERE), enumerator_7548.current_mFastReturn (HERE), var_instructionList_7746, enumerator_7548.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7548.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7466 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_7988 = GALGAS_pic_31__38_RoutineDefinitionList::constructor_emptyList (SOURCE_FILE ("pic18_routine_inlining.galgas", 250)) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8066 (ioArgument_ioRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_8066.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8264 ;
    {
    routine_performInlineFromInstructionList (enumerator_8066.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8264, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_7988.addAssign_operation (enumerator_8066.current_mRoutineName (HERE), enumerator_8066.current_mRequiredBank (HERE), enumerator_8066.current_mReturnedBank (HERE), enumerator_8066.current_mPreservesBank (HERE), enumerator_8066.current_mIsNoReturn (HERE), var_instructionList_8264, enumerator_8066.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8066.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_7988 ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'displayBlockList'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_displayBlockList (const GALGAS_string constinArgument_inTitle,
                               GALGAS_string & ioArgument_ioListFileContents,
                               const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1366 (constinArgument_inGeneratedBlockList, kENUMERATION_UP) ;
  GALGAS_uint index_1338 ((uint32_t) 0) ;
  while (enumerator_1366.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1408 ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_length (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_nextBlockLabel_1408 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1338.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).getter_mLabel (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_0) {
      var_nextBlockLabel_1408 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1366.current_mBlock (HERE), var_nextBlockLabel_1408, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1366.gotoNextObject () ;
    index_1338.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                              const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                              const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                              const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                              GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                              GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                              GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_withNoOperand * object = (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_withNoOperand_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                    const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                    const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FDA * object = (const cPtr_pic_31__38_Instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FDA) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6553 ;
  GALGAS_bitSliceTable joker_6559 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, object->mProperty_m_5F_W_5F_isDestination.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 177)), var_IPICregisterDescription_6553, joker_6559, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 172)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mInstruction_5F_FDA_5F_base_5F_code, var_IPICregisterDescription_6553, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 182)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FDA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                   const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                   const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                   const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                   const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                   GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FA * object = (const cPtr_pic_31__38_Instruction_5F_FA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FA) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7471 ;
  GALGAS_bitSliceTable joker_7477 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_7471, joker_7477, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 202)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7548 ;
  switch (object->mProperty_mFAinstruction.enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 214)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_7548 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 220)), GALGAS_string ("*** INTERNAL ERROR ***"), fixItArray0  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 220)) ;
      var_code_7548.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, var_code_7548, var_IPICregisterDescription_7471  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                      GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_MOVFF * object = (const cPtr_pic_31__38_Instruction_5F_MOVFF *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_8856 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mProperty_mSourceRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_sourceIPICregisterDescription_8856, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 240)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9121 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mProperty_mDestinationRegisterName.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_destinationIPICregisterDescription_9121, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 247)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mProperty_mInstructionLocation, var_sourceIPICregisterDescription_8856, var_destinationIPICregisterDescription_9121  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 254)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_MOVFF_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                    const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                    const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FBA * object = (const cPtr_pic_31__38_Instruction_5F_FBA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FBA) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_9999 ;
  GALGAS_bitSliceTable var_bitSliceTable_10037 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_9999, var_bitSliceTable_10037, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 272)) ;
  GALGAS_uint var_bitNumber_10196 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10037, var_bitNumber_10196, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 282)) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mBitOrientedOp, var_IPICregisterDescription_9999, var_bitNumber_10196  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_FBA_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                                 const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                                 const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                 const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                 GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                 GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_literalOperation * object = (const cPtr_pic_31__38_Instruction_5F_literalOperation *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
  GALGAS_sint_36__34_ var_result_10914 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_10914, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 308)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_10914.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_10914.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 310)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 310)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_10914.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mLiteralInstruction, var_result_10914.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 317)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 317)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 317))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 314)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_literalOperation_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                     const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                     const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                     const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_fnop * object = (const cPtr_pic_31__38_Instruction_5F_fnop *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_fnop) ;
  GALGAS_sint_36__34_ var_result_11832 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11832, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 332)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_11832.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_11832.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 334)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_11832.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::constructor_new (object->mProperty_mInstructionLocation, var_result_11832.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 340))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 338)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_fnop_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                     const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                     const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                     const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LFSR * object = (const cPtr_pic_31__38_Instruction_5F_LFSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LFSR) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mFSRindex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 355)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mFSRindex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)), GALGAS_string ("the LFSR register idx (").add_operation (object->mProperty_mFSRindex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 356)) ;
  }
  GALGAS_sint_36__34_ var_result_12848 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12848, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 359)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_result_12848.objectCompare (GALGAS_sint_36__34_ ((int64_t) 4095LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_12848.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 361)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_12848.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)) ;
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mFSRindex, var_result_12848.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 367))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 364)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_LFSR_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                    const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                    const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                    const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JSR * object = (const cPtr_pic_31__38_Instruction_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JSR) ;
  GALGAS_bool var_isNoReturn_13721 ;
  GALGAS_uint var_requiredBank_13745 ;
  GALGAS_uint var_returnedBank_13769 ;
  GALGAS_bool var_preservesBank_13794 ;
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_13721, var_requiredBank_13745, var_returnedBank_13769, var_preservesBank_13794, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 383)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_13745.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_13745.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_13893 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).add_operation (var_requiredBank_13745.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)) ;
    var_errorMessage_13893.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_13893.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_13893.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 390)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 392)), var_errorMessage_13893, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 392)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_13721.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 395)), GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 395)) ;
  }
  const enumGalgasBool test_5 = var_preservesBank_13794.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 397)).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioCurrentBank = var_returnedBank_13769 ;
    const enumGalgasBool test_6 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 400)), GALGAS_string ("the routine call should preserve bank selection"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 400)) ;
    }
  }
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, object->mProperty_mKind  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 404)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_JSR_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_checkbank analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                         const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                         const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                         GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_checkbank * object = (const cPtr_pic_31__38_Instruction_5F_checkbank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_checkbank) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mBankIndex.objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("Bank index should be <= 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 453)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (object->mProperty_mBankIndex)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)).add_operation (object->mProperty_mBankIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 457)) ;
      }
    }
  }
  ioArgument_ioCurrentBank = object->mProperty_mBankIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checkbank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checkbank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checkbank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_checknobank analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                           const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                           const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                           GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                           GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                           GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                           GALGAS_uint & ioArgument_ioCurrentBank,
                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_checknobank * object = (const cPtr_pic_31__38_Instruction_5F_checknobank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_checknobank) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 481)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_checknobank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_checknobank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_checknobank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18PiccoloSimpleInstruction analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_PiccoloSimpleInstruction * object = (const cPtr_pic_31__38_PiccoloSimpleInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
  GALGAS_ipic_31__38_SequentialInstruction var_instruction_18449 ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = object ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18449, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 505)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18449, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 516)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 516)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction.mSlotID,
                                extensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_PiccoloSimpleInstruction_analyze (defineExtensionMethod_pic_31__38_PiccoloSimpleInstruction_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_FOREVER analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                       GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                       const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                       const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                       GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                       GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                       GALGAS_uint & ioArgument_ioCurrentBank,
                                                                       const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                       const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_FOREVER * object = (const cPtr_pic_31__38_Instruction_5F_FOREVER *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray0  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 539)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 542)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_19466 = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_loopLabel_19518 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 546)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 546)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_loopLabel_19518, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 553))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 553)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 549)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 558)) ;
  ioArgument_ioBlockLabel = var_loopLabel_19518 ;
  {
  routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 560)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list execution is endless"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 580)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_loopLabel_19518, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 586))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 586)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 582))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 582)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19466)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstructionList, GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 593)) ;
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 596)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_FOREVER_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_FOREVER_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_nobanksel analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                         const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                         const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                         GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_nobanksel * object = (const cPtr_pic_31__38_Instruction_5F_nobanksel *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 618)) ;
  }
  ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 620)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_nobanksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_nobanksel_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_savebank analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_savebank_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                        const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                        GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                        const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                        const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                        GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                        GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                        GALGAS_uint & ioArgument_ioCurrentBank,
                                                                        const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                        const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_savebank * object = (const cPtr_pic_31__38_Instruction_5F_savebank *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_savebank) ;
  GALGAS_registerExpression var_BSRregister_22762 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("BSR"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 644)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23097 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) var_BSRregister_22762.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23097, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 649)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23386 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((const cPtr_registerExpression *) object->mProperty_mRegister.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23386, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 657)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mProperty_mInstructionLocation, var_BSR_5F_IPICregisterDescription_23097, var_save_5F_IPICregisterDescription_23386  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 665)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 670)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 665)) ;
  GALGAS_uint var_finalBank_23708 = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_23708, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 674)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfSaveBankInstruction, GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 693)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::constructor_new (object->mProperty_mInstructionLocation, var_save_5F_IPICregisterDescription_23386, var_BSR_5F_IPICregisterDescription_23097  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 696)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 701)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 696)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_savebank_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_savebank_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_savebank_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18Instruction_repetitionStatique analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                  const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                  GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                  const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                  const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                  const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                  GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                  GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                  GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                  const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                  const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
  GALGAS_sint_36__34_ var_lowerBound_25293 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25293, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 724)) ;
  GALGAS_sint_36__34_ var_upperBound_25398 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25398, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_lowerBound_25293.objectCompare (var_upperBound_25398)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("lower bound (").add_operation (var_lowerBound_25293.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)).add_operation (var_upperBound_25398.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("repeat count (").add_operation (var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)) ;
    }
  }
  GALGAS_uint var_finalBank_25825 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_25863 = constinArgument_inConstantMap ;
  {
  var_tempConstantMap_25863.setter_insertKey (object->mProperty_mConstantName, var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)) ;
  }
  {
  routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_25863, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_25825, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 755)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_finalBank_25825.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfInstruction, GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 758)) ;
  }
  GALGAS_sint_36__34_ var_idx_26661 = var_lowerBound_25293.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)) ;
  if (var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).isValid ()) {
    uint32_t variant_26685 = var_upperBound_25398.substract_operation (var_lowerBound_25293, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).uintValue () ;
    bool loop_26685 = true ;
    while (loop_26685) {
      GALGAS_bool test_8 = GALGAS_bool (kIsInfOrEqual, var_idx_26661.objectCompare (var_upperBound_25398)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_26685 = test_8.isValid () ;
      if (loop_26685) {
        loop_26685 = test_8.boolValue () ;
      }
      if (loop_26685 && (0 == variant_26685)) {
        loop_26685 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
      }
      if (loop_26685) {
        variant_26685 -- ;
        GALGAS_constantMap var_constantMap_26798 = constinArgument_inConstantMap ;
        {
        var_constantMap_26798.setter_insertKey (object->mProperty_mConstantName, var_idx_26661, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 764)) ;
        }
        {
        routine_analyzeInstructionList (object->mProperty_mInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_26798, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        var_idx_26661.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 783)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_repetitionStatique_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_banksel analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_banksel_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                       const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                       const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                       const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                       GALGAS_uint & ioArgument_ioCurrentBank,
                                                                       const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                       const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                       GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_banksel * object = (const cPtr_pic_31__38_Instruction_5F_banksel *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_banksel) ;
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 806)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 808)).objectCompare (GALGAS_uint ((uint32_t) 15U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mBankIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 809)), GALGAS_string ("selected bank idx should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 809)) ;
    ioArgument_ioCurrentBank = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)).objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = object->mProperty_mBankIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 812)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mBankIndex  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 813)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 813)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 813)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = object->mProperty_mWarningOnUselessBanksel.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticWarning (object->mProperty_mBankIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 815)), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 815)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 815)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 815)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_banksel_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_banksel_register analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                   const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                   GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                   const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                   const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                   const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                   GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                   const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                   const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * object = (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
  const enumGalgasBool test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 839)) ;
  }
  GALGAS_uint var_registerAddress_29725 ;
  callExtensionMethod_getRegisterAddress ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_29725, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 841)) ;
  GALGAS_uint var_newBank_29838 = var_registerAddress_29725.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 849)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_29838)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_newBank_29838 ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (object->mProperty_mInstructionLocation, GALGAS_luint::constructor_new (var_newBank_29838, object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 854)).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 854))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 852)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 856)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 852)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = object->mProperty_mWarningOnUselessBanksel.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticWarning (object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 859)).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 859)), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_29838.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 859)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 859)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 859)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 859)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_banksel_5F_register_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                      GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_TBLRD * object = (const cPtr_pic_31__38_Instruction_5F_TBLRD *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 876)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLRD_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                      GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_TBLWT * object = (const cPtr_pic_31__38_Instruction_5F_TBLWT *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOption  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 894)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (void) {
  enterExtensionMethod_analyzeSimpleInstruction (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT.mSlotID,
                                                 extensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction (defineExtensionMethod_pic_31__38_Instruction_5F_TBLWT_analyzeSimpleInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_MNOP analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                    const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                    GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                    const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                    GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                    GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                    GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                    GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                    const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_MNOP * object = (const cPtr_pic_31__38_Instruction_5F_MNOP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_MNOP) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 918)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 919)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 919)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 922)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 926)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 922)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_MNOP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_MNOP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_MNOP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_NOPBRA analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                      GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                      const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_NOPBRA * object = (const cPtr_pic_31__38_Instruction_5F_NOPBRA *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOccurrenceFactor.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 949)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mOccurrenceFactor.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 950)), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 950)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mOccurrenceFactor  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 953)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 957)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 953)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_NOPBRA_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_NOPBRA_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_LTBLPTR analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                       GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                       GALGAS_uint & ioArgument_ioCurrentBank,
                                                                       const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                       const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LTBLPTR * object = (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
  GALGAS_sint_36__34_ var_result_34283 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mImmediatExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34283, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 979)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_34283.objectCompare (GALGAS_sint_36__34_ ((int64_t) 16777215LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_34283.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 981)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34283.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)) ;
  }
  GALGAS_uint var_address_34509 = var_result_34283.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 984)) ;
  GALGAS_registerExpression var_TBLPTRU_34555 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 986)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_34921 ;
  GALGAS_bitSliceTable joker_34927 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_34555.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_34921, joker_34927, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 991)) ;
  GALGAS_uint var_upper_34972 = var_address_34509.right_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1001)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_upper_34972.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1005)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1003)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1008)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1003)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_upper_34972.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1013)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1011)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1016)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1011)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1021)), var_upper_34972  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1019)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1024)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1019)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1028)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1026)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1031)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1026)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRH_35942 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1035)) ;
  GALGAS_bitSliceTable joker_36270 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_35942.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_34921, joker_36270, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1040)) ;
  GALGAS_uint var_high_36314 = var_address_34509.right_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1050)).operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1050)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_high_36314.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1054)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1052)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1057)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1052)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_high_36314.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1062)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1060)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1065)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1060)) ;
    }else if (kBoolFalse == test_5) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1070)), var_high_36314  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1068)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1073)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1068)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1077)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1075)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1080)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1075)) ;
    }
  }
  GALGAS_registerExpression var_TBLPTRL_37288 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1085)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1084)) ;
  GALGAS_bitSliceTable joker_37615 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_37288.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_34921, joker_37615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1089)) ;
  GALGAS_uint var_low_37658 = var_address_34509.operator_and (GALGAS_uint ((uint32_t) 255U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1099)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_low_37658.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1103)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1106)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1101)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_low_37658.objectCompare (GALGAS_uint ((uint32_t) 255U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1111)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1109)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1114)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1109)) ;
    }else if (kBoolFalse == test_7) {
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1119)), var_low_37658  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1117)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1122)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1117)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1126)), var_outIPICregisterDescription_34921  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1124)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1129)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1124)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LTBLPTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_LDATA16PTR analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
  GALGAS_uintlist var_data_39337 ;
  GALGAS_bool var_isData_38__39350 ;
  constinArgument_inDataMap.method_searchKey (object->mProperty_mDataName, var_data_39337, var_isData_38__39350, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1153)) ;
  const enumGalgasBool test_0 = var_isData_38__39350.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mDataName.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1155)), GALGAS_string ("this data is a byte array; use ldata8ptr"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1155)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1158)).objectCompare (var_data_39337.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1158)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mDataIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)), GALGAS_string ("index should be < ").add_operation (var_data_39337.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)) ;
  }
  GALGAS_registerExpression var_TBLPTRU_39597 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1162)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_39964 ;
  GALGAS_bitSliceTable joker_39970 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_39597.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_39964, joker_39970, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1167)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1180)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1180)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1177)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1183)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1177)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1187)), var_outIPICregisterDescription_39964  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1185)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1190)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1185)) ;
  GALGAS_registerExpression var_TBLPTRH_40404 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1193)) ;
  GALGAS_bitSliceTable joker_40731 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_40404.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_39964, joker_40731, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1198)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1211)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1211)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1208)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1214)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1208)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1218)), var_outIPICregisterDescription_39964  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1216)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1221)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1216)) ;
  GALGAS_registerExpression var_TBLPTRL_41163 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1224)) ;
  GALGAS_bitSliceTable joker_41491 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_41163.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_39964, joker_41491, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1229)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1242)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1242)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1245)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1239)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1249)), var_outIPICregisterDescription_39964  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1252)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1247)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_31__36_PTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_LDATA8PTR analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                            GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                            const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                            GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                            GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * object = (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
  GALGAS_uintlist var_data_42637 ;
  GALGAS_bool var_isData_38__42650 ;
  constinArgument_inDataMap.method_searchKey (object->mProperty_mDataName, var_data_42637, var_isData_38__42650, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)) ;
  const enumGalgasBool test_0 = var_isData_38__42650.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mDataName.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)), GALGAS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).objectCompare (var_data_42637.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mDataIndex.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)), GALGAS_string ("index should be < ").add_operation (var_data_42637.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)) ;
  }
  GALGAS_registerExpression var_TBLPTRU_42921 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRU"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1284)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_43288 ;
  GALGAS_bitSliceTable joker_43294 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRU_42921.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_43288, joker_43294, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1289)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1302)), GALGAS_uint ((uint32_t) 16U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1305)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1299)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1309)), var_outIPICregisterDescription_43288  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1307)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1312)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1307)) ;
  GALGAS_registerExpression var_TBLPTRH_43724 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRH"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1316)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1315)) ;
  GALGAS_bitSliceTable joker_44051 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRH_43724.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_43288, joker_44051, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1320)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1333)), GALGAS_uint ((uint32_t) 8U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1330)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1336)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1330)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1340)), var_outIPICregisterDescription_43288  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1338)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1343)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1338)) ;
  GALGAS_registerExpression var_TBLPTRL_44479 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TBLPTRL"), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1347)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1346)) ;
  GALGAS_bitSliceTable joker_44807 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TBLPTRL_44479.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_43288, joker_44807, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1351)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mDataName, object->mProperty_mDataIndex.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1364)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1361)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1367)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1361)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::constructor_new (object->mProperty_mInstructionLocation, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::constructor_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1371)), var_outIPICregisterDescription_43288  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1369)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1374)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1369)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_LDATA_38_PTR_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_JUMP analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                    const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                    GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                    const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                    const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                    const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                    GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                    GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                    GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                    const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMP * object = (const cPtr_pic_31__38_Instruction_5F_JUMP *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMP) ;
  GALGAS_bool var_isNoReturn_45989 ;
  GALGAS_uint var_requiredBank_46013 ;
  GALGAS_uint joker_46015 ; // Joker input parameter
  GALGAS_bool joker_46018 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_45989, var_requiredBank_46013, joker_46015, joker_46018, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1397)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_46013.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_46013.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_46118 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).add_operation (var_requiredBank_46013.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)) ;
    var_errorMessage_46118.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_46118.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_46118.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1404)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1404)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1406)), var_errorMessage_46118, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1406)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_45989.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1408)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1420)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1422)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMP_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMP_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_computed_rcall analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                 const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                 GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                 const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                 const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                 GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                 GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                 const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
  GALGAS_bool var_allPreserveBank_47717 = GALGAS_bool (true) ;
  GALGAS_bool var_someReturnsBank_47748 = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection_47786 = ioArgument_ioCurrentBank ;
  cEnumerator_lstringlist enumerator_47829 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_47829.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_47890 ;
    GALGAS_uint var_requiredBank_47914 ;
    GALGAS_uint var_returnedBank_47938 ;
    GALGAS_bool var_preservesBank_47963 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_47829.current_mValue (HERE), var_isNoReturn_47890, var_requiredBank_47914, var_returnedBank_47938, var_preservesBank_47963, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_47914.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_47914.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_48066 = GALGAS_string ("the routine '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (var_requiredBank_47914.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)) ;
      var_errorMessage_48066.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1452)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_48066.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_48066.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)), var_errorMessage_48066, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
    }
    const enumGalgasBool test_3 = var_isNoReturn_47890.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)), GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)) ;
    }
    const enumGalgasBool test_5 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_47963.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)), GALGAS_string ("the '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_7 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).operator_and (var_preservesBank_47963.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = var_someReturnsBank_47748.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_returnedBankSelection_47786 = var_returnedBank_47938 ;
          var_someReturnsBank_47748 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_returnedBankSelection_47786.objectCompare (var_returnedBank_47938)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_errorMessage_48976 = GALGAS_string ("the '").add_operation (enumerator_47829.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)) ;
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedBank_47938.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)) ;
            }else if (kBoolFalse == test_10) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank_47938.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) ;
            }
            var_errorMessage_48976.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1475)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_returnedBankSelection_47786.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)) ;
            }else if (kBoolFalse == test_11) {
              var_errorMessage_48976.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_47786.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)) ;
            }
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_47829.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)), var_errorMessage_48976, fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_13 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).operator_and (var_preservesBank_47963 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).boolEnum () ;
        if (kBoolTrue == test_13) {
        }
      }
    }
    enumerator_47829.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_47786 ;
  GALGAS_sint_36__34_ var_size_49717 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_49717, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size_49717.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_49717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_size_49717.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_49717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)) ;
    }else if (kBoolFalse == test_16) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_size_49717.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)).objectCompare (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (var_size_49717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)) ;
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList_50253 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)) ;
  cEnumerator_lstringlist enumerator_50326 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_50326.hasCurrentObject ()) {
    var_targetInstructionList_50253.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::constructor_new (enumerator_50326.current_mValue (HERE).getter_location (HERE), enumerator_50326.current_mValue (HERE), GALGAS_jumpInstructionKind::constructor_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)) ;
    enumerator_50326.gotoNextObject () ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mProperty_mInstructionLocation, var_targetInstructionList_50253, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1509)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_rcall_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_computed_goto analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
  cEnumerator_lstringlist enumerator_51374 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_51374.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_51435 ;
    GALGAS_uint var_requiredBank_51459 ;
    GALGAS_uint joker_51461 ; // Joker input parameter
    GALGAS_bool joker_51464 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_51374.current_mValue (HERE), var_isNoReturn_51435, var_requiredBank_51459, joker_51461, joker_51464, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_51459.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_51459.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_51568 = GALGAS_string ("the routine '").add_operation (enumerator_51374.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (var_requiredBank_51459.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)) ;
      var_errorMessage_51568.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1537)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_51568.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_51568.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_51374.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)), var_errorMessage_51568, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_51435.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_51374.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)), GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_51374.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) ;
    }
    enumerator_51374.gotoNextObject () ;
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1552)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_52430 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_52430, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_size_52430.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_52430.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)) ;
  }else if (kBoolFalse == test_6) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_size_52430.objectCompare (GALGAS_sint_36__34_ ((int64_t) 64LL))).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_52430.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)) ;
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_size_52430.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).objectCompare (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (var_size_52430.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabels, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1568)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1572)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1575)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1577)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_goto_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_computed_bra analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                               const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                               const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                                               const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                               const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
  GALGAS_bool var_allPreserveBankSetting_54056 = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank_54085 = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue_54116 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)) ;
  cEnumerator_lstringlist enumerator_54156 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_54156.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_54217 ;
    GALGAS_uint var_requiredBank_54241 ;
    GALGAS_uint var_returnedBank_54265 ;
    GALGAS_bool var_preservesBank_54290 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_54156.current_mValue (HERE), var_isNoReturn_54217, var_requiredBank_54241, var_returnedBank_54265, var_preservesBank_54290, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_54241.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_54241.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_errorMessage_54422 = GALGAS_string ("the routine '").add_operation (enumerator_54156.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (var_requiredBank_54241.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
      var_errorMessage_54422.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_errorMessage_54422.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
      }else if (kBoolFalse == test_1) {
        var_errorMessage_54422.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)) ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_54156.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1613)), var_errorMessage_54422, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1613)) ;
    }
    const enumGalgasBool test_3 = var_preservesBank_54290.boolEnum () ;
    if (kBoolTrue == test_3) {
      var_allReturnBank_54085 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_returnedBankValue_54116.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)))).operator_and (GALGAS_bool (kIsNotEqual, var_returnedBankValue_54116.objectCompare (var_returnedBank_54265)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_54156.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_54265.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (var_returnedBankValue_54116.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
      }else if (kBoolFalse == test_4) {
        var_allPreserveBankSetting_54056 = GALGAS_bool (false) ;
        var_returnedBankValue_54116 = var_returnedBank_54265 ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_54217.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_54156.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_54156.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)) ;
    }
    enumerator_54156.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = var_allReturnBank_54085.operator_and (var_allPreserveBankSetting_54056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)).boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioCurrentBank = var_returnedBankValue_54116 ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_9 = var_allReturnBank_54085.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).operator_and (var_allPreserveBankSetting_54056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) ;
    }
  }
  const enumGalgasBool test_11 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_54056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)).boolEnum () ;
  if (kBoolTrue == test_11) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) ;
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1643)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_56210 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_56210, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictInf, var_size_56210.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_56210.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)) ;
  }else if (kBoolFalse == test_14) {
    const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_size_56210.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_56210.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)) ;
    }else if (kBoolFalse == test_16) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_size_56210.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)).objectCompare (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the routine name list length (").add_operation (object->mProperty_mTargetLabels.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (var_size_56210.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)) ;
      }
    }
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabels, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1659)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1663)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1655))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1655)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1666)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1668)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_bra_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@pic18Instruction_computed_retlw analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                 const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                 GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                 const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                 const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                 const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                 GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                 GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                 const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * object = (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray0  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1692)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_58208 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mSizeExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_58208, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_size_58208.objectCompare (GALGAS_sint_36__34_ ((int64_t) 2LL))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_58208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_size_58208.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the computed range (").add_operation (var_size_58208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_size_58208.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)).objectCompare (object->mProperty_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the constant list length (").add_operation (object->mProperty_mImmediateExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (var_size_58208.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)) ;
      }
    }
  }
  GALGAS_uintlist var_literalValues_58757 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)) ;
  cEnumerator_immediatExpressionList enumerator_58818 (object->mProperty_mImmediateExpressionList, kENUMERATION_UP) ;
  GALGAS_uint index_58786 ((uint32_t) 0) ;
  while (enumerator_58818.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v_58895 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_58818.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_58895, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_v_58895.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_v_58895.objectCompare (GALGAS_sint_36__34_ ((int64_t) 128LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)).boolEnum () ;
    if (kBoolTrue == test_8) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("immediate value with idx ").add_operation (index_58786.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (var_v_58895.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)) ;
    }
    var_literalValues_58757.addAssign_operation (var_v_58895.operator_and (GALGAS_sint ((int32_t) 255L).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)) ;
    enumerator_58818.gotoNextObject () ;
    index_58786.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  }
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::constructor_new (object->mProperty_mInstructionLocation, var_literalValues_58757, object->mProperty_mUsesRelativeCall  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1719)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1723)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1715))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1715)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1726)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1728)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_computed_5F_retlw_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_JUMPCC analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                      const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                      const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                      const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                      GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_JUMPCC * object = (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
  GALGAS_bool var_isNoReturn_60320 ;
  GALGAS_uint var_requiredBank_60344 ;
  GALGAS_uint joker_60346 ; // Joker input parameter
  GALGAS_bool joker_60349 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (object->mProperty_mTargetLabel, var_isNoReturn_60320, var_requiredBank_60344, joker_60346, joker_60349, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_requiredBank_60344.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)))).operator_and (GALGAS_bool (kIsNotEqual, var_requiredBank_60344.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_errorMessage_60449 = GALGAS_string ("the routine '").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (var_requiredBank_60344.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)) ;
    var_errorMessage_60449.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_errorMessage_60449.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
    }else if (kBoolFalse == test_1) {
      var_errorMessage_60449.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)) ;
    }
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)), var_errorMessage_60449, fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)) ;
  }
  const enumGalgasBool test_3 = var_isNoReturn_60320.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1760)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetLabel.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)) ;
  }
  GALGAS_conditionalBranchMode var_mode_60956 ;
  const enumGalgasBool test_5 = object->mProperty_mIsBcc.boolEnum () ;
  if (kBoolTrue == test_5) {
    var_mode_60956 = GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1766)) ;
  }else if (kBoolFalse == test_5) {
    var_mode_60956 = GALGAS_conditionalBranchMode::constructor_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1768)) ;
  }
  GALGAS_lstring var_label_30__61119 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mConditionalBranch, object->mProperty_mTargetLabel, var_mode_60956, var_label_30__61119, var_mode_60956  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1778)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1785)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1774))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1774)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1788)) ;
  ioArgument_ioBlockLabel = var_label_30__61119 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_JUMPCC_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_JUMPCC_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@pic18Instruction_IF_BitTest analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                             const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                             GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                             const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                             const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                             GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                                             const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_62613 ;
  GALGAS_bitSliceTable var_bitSliceTable_62651 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_62613, var_bitSliceTable_62651, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1812)) ;
  GALGAS_uint var_bitNumber_62810 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_62651, var_bitNumber_62810, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1822)) ;
  GALGAS_uint var_currentBank_62868 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_63158 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_62868, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_63158, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1831)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank_62868.objectCompare (var_currentBank_62868)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1844)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1844)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, var_embeddedInstruction_63158, object->mProperty_mSkipIfSet, var_IPICregisterDescription_62613, var_bitNumber_62810  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1854)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_BitTest_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                         const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                         const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                         GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                         const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_64327 ;
  switch (object->mProperty_mOpCode.enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1880)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode_64327 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::constructor_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_64919 ;
  GALGAS_bitSliceTable joker_64925 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_64919, joker_64925, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1883)) ;
  GALGAS_uint var_currentBank_65006 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_65296 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_65006, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_65296, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1895)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_currentBank_65006.objectCompare (var_currentBank_65006)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mProperty_mInstructionLocation, var_embeddedInstruction_65296, var_baseCode_64327, var_IPICregisterDescription_64919  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_IF_IncDec analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                            const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                            GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                            const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                            const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                            GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                            GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                                                            const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_66436 ;
  const enumGalgasBool test_0 = object->mProperty_mIncrement.operator_and (object->mProperty_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = object->mProperty_mIncrement.operator_and (object->mProperty_mSkipIfZero.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mProperty_mIncrement.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).operator_and (object->mProperty_mSkipIfZero COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)) ;
      }else if (kBoolFalse == test_2) {
        var_baseCode_66436 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::constructor_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_67027 ;
  GALGAS_bitSliceTable joker_67033 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_67027, joker_67033, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1951)) ;
  GALGAS_uint var_currentBank_67114 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_67404 ;
  callExtensionMethod_analyzeSimpleInstruction ((const cPtr_pic_31__38_PiccoloSimpleInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_67114, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_67404, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_currentBank_67114.objectCompare (var_currentBank_67114)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEmbeddedInstruction.getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)) ;
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mProperty_mInstructionLocation, var_embeddedInstruction_67404, var_baseCode_66436, var_IPICregisterDescription_67027, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1979)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1979)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_IF_5F_IncDec_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18Instruction_structured_if analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
  GALGAS_uint var_elseBranchFinalBank_68520 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_68564 = ioArgument_ioCurrentBank ;
  GALGAS_lstring var_conditionTrueLabel_68617 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
  GALGAS_lstring var_conditionFalseLabel_68742 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)) ;
  GALGAS_lstring var_exitLabel_68857 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_69278 ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mIfCondition.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_68617, var_conditionFalseLabel_68742, ioArgument_ioUsedRegisters, var_testTerminator_69278, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2019)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2033)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_69278, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2037)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2040)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_68617 ;
  {
  routine_analyzeInstructionList (object->mProperty_mThenInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_68564, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2043)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_70064 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = var_thenContinuesInSequence_70064.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_68857, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2063))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2063)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2072)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_68742 ;
  {
  routine_analyzeInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_68520, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
  }
  GALGAS_bool var_elseContinuesInSequence_70965 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_1 = var_elseContinuesInSequence_70965.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_68857, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2104)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_elseBranchFinalBank_68520.objectCompare (var_thenBranchFinalBank_68564)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioCurrentBank = var_elseBranchFinalBank_68520 ;
  }else if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfElsePartLocation, GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2109)) ;
    var_elseBranchFinalBank_68520 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2110)) ;
  }
  const enumGalgasBool test_4 = var_thenContinuesInSequence_70064.operator_or (var_elseContinuesInSequence_70965 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2113)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioBlockLabel = var_exitLabel_68857 ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_structured_5F_if_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_macro analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_macro_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                                                     const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_macro * object = (const cPtr_pic_31__38_Instruction_5F_macro *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_macro) ;
  GALGAS_lstringlist var_constantNameList_72488 ;
  GALGAS_pic_31__38_InstructionList var_instructionList_72509 ;
  constinArgument_inMacroMap.method_searchKey (object->mProperty_mMacroName, var_constantNameList_72488, var_instructionList_72509, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2139)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)).objectCompare (var_constantNameList_72488.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, var_constantNameList_72488.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)) ;
  }
  GALGAS_constantMap var_constantMap_72705 = constinArgument_inConstantMap ;
  cEnumerator_immediatExpressionList enumerator_72749 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  cEnumerator_lstringlist enumerator_72785 (var_constantNameList_72488, kENUMERATION_UP) ;
  while (enumerator_72749.hasCurrentObject () && enumerator_72785.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue_72869 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_72749.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_72705, var_expressionValue_72869, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)) ;
    {
    var_constantMap_72705.setter_insertKey (enumerator_72785.current_mValue (HERE), var_expressionValue_72869, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    }
    enumerator_72749.gotoNextObject () ;
    enumerator_72785.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList (var_instructionList_72509, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_72705, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_macro_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_macro_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_macro_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_macro_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                               GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                               GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                               GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_SimpleConstantCaseItem * object = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  GALGAS_sint_36__34_ var_result_74768 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mCaseExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_74768, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2207)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_result_74768.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_result_74768.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2209)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("case value is evaluated as ").add_operation (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2210)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2210)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2210)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2210)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2213)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2213)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2214)) ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)), GALGAS_string ("the '").add_operation (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2215)) ;
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (var_result_74768.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2217)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2217)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2217)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2222)), ioArgument_ioLastComparisonValue.substract_operation (var_result_74768, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2223))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2220)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2225)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2220)) ;
  ioArgument_ioLastComparisonValue = var_result_74768 ;
  GALGAS_lstring var_conditionFalseLabel_75788 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2230)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2230)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2230)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2231)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_75986 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bz (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2237)), var_conditionFalseLabel_75788, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2239))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2233)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2242)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_75986, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2246)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2241))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2241)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2249)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_75788 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_SimpleConstantCaseItem_analyzeCaseItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                         GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                         GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_IntervalCaseItem * object = (const cPtr_pic_31__38_IntervalCaseItem *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_IntervalCaseItem) ;
  GALGAS_sint_36__34_ var_minBound_77141 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mMinExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_77141, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2266)) ;
  GALGAS_sint_36__34_ var_maxBound_77239 ;
  callExtensionMethod_eval ((const cPtr_immediatExpression *) object->mProperty_mMaxExpression.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_77239, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2267)) ;
  GALGAS_bool var_ok_77278 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_minBound_77141.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_minBound_77141.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2270)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_77141.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2271)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2271)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2271)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2271)) ;
    var_ok_77278 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_maxBound_77239.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).operator_or (GALGAS_bool (kIsStrictInf, var_maxBound_77239.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2274)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_77239.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2275)) ;
    var_ok_77278 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsInfOrEqual, var_maxBound_77239.objectCompare (var_minBound_77141)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("max bound (").add_operation (var_maxBound_77239.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)).add_operation (var_minBound_77141.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)) ;
    var_ok_77278 = GALGAS_bool (false) ;
  }
  const enumGalgasBool test_6 = var_ok_77278.boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_range enumerator_77964 (GALGAS_range::constructor_new (var_minBound_77141.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)), var_maxBound_77239.substract_operation (var_minBound_77141, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)), kENUMERATION_UP) ;
    while (enumerator_77964.hasCurrentObject ()) {
      const enumGalgasBool test_7 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_77964.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2285)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2285)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mCaseExpressionLocation, GALGAS_string ("the '").add_operation (enumerator_77964.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)) ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_77964.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)), GALGAS_string ("the '").add_operation (enumerator_77964.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)) ;
      }else if (kBoolFalse == test_7) {
        {
        ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_77964.current (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)) ;
        }
      }
      enumerator_77964.gotoNextObject () ;
    }
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2295)), ioArgument_ioLastComparisonValue.substract_operation (var_minBound_77141, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2296)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2296)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2296))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2293)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2298)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2293)) ;
    GALGAS_lstring var_greaterThanLowBoundLabel_78727 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2301)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2301)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2301)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2302)) ;
    GALGAS_lstring var_conditionFalseLabel_78863 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2303)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2303)), object->mProperty_mCaseExpressionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2303)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2304)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_79067 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2308)), var_greaterThanLowBoundLabel_78727, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2310)), var_conditionFalseLabel_78863, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2312))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2306)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2315)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_79067, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2319)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2314))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2314)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2322)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_78863 ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_ADDLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2327)), var_maxBound_77239.substract_operation (var_minBound_77141, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328)).operator_and (GALGAS_sint_36__34_ ((int64_t) 255LL) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2328))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2330)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2325)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__80065 = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mCaseExpressionLocation, GALGAS_conditional_5F_branch::constructor_bc (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2335)), var_conditionFalseLabel_78863, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2337)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2339))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2333)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2342)), var_greaterThanLowBoundLabel_78727, ioArgument_ioGeneratedInstructionList, var_t_32__80065, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2341))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2341)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2349)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_78863 ;
    ioArgument_ioLastComparisonValue = var_maxBound_77239.add_operation (GALGAS_uint ((uint32_t) 1U).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (void) {
  enterExtensionMethod_analyzeCaseItem (kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem.mSlotID,
                                        extensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem (defineExtensionMethod_pic_31__38_IntervalCaseItem_analyzeCaseItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@pic18Instruction_switch analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_switch_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                      const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                      const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_switch * object = (const cPtr_pic_31__38_Instruction_5F_switch *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_switch) ;
  GALGAS_caseConstantMap var_caseConstantMap_81428 = GALGAS_caseConstantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)) ;
  GALGAS_lstring var_exitLabel_81485 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2377)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_81636 = GALGAS_sint_36__34_ ((int64_t) 0LL) ;
  GALGAS_bool var_continuesInSequence_81715 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_81759 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_81798 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2384)) ;
  GALGAS_bool var_finalBankSettingDefined_81855 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_81891 (object->mProperty_mCaseList, kENUMERATION_UP) ;
  while (enumerator_81891.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel_81934 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2389)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2389)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2389)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2390)) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_82098 (enumerator_81891.current_mCaseExpressionList (HERE), kENUMERATION_UP) ;
    while (enumerator_82098.hasCurrentObject ()) {
      callExtensionMethod_analyzeCaseItem ((const cPtr_pic_31__38_AbstractCaseItem *) enumerator_82098.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_81934, ioArgument_ioUsedRegisters, var_caseConstantMap_81428, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_81636, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2393)) ;
      enumerator_82098.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_82496 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_81934 ;
    GALGAS_uint var_branchFinalBank_82575 = var_initialBankSetting_81759 ;
    {
    routine_analyzeInstructionList (enumerator_81891.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_82575, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2410)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_continuesInSequence_81715 = GALGAS_bool (true) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2431)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_81485, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2434))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2434)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2435)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2430))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2430)) ;
    }
    const enumGalgasBool test_1 = var_finalBankSettingDefined_81855.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_81798.objectCompare (var_branchFinalBank_82575)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_branchFinalBank_82575.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = var_branchFinalBank_82575.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_finalBankSetting_81798.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("'no selection'") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_finalBankSetting_81798.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444)) ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_81891.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2441)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2443)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2444)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2441)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_finalBankSettingDefined_81855 = GALGAS_bool (true) ;
      var_finalBankSetting_81798 = var_branchFinalBank_82575 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2451)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_82496 ;
    enumerator_81891.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_84116 = var_initialBankSetting_81759 ;
  {
  routine_analyzeInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_84116, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2456)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_84564 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_8 = var_thenContinuesInSequence_84564.boolEnum () ;
  if (kBoolTrue == test_8) {
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2477)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_exitLabel_81485, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2481)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2476))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2476)) ;
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2485)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_finalBankSetting_81798.objectCompare (var_branchFinalBank_84116)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_branchFinalBank_84116.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2489)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = var_branchFinalBank_84116.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2489)) ;
    }
    GALGAS_string temp_12 ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_finalBankSetting_81798.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2491)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = GALGAS_string ("'no selection'") ;
    }else if (kBoolFalse == test_13) {
      temp_12 = var_finalBankSetting_81798.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2491)) ;
    }
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (object->mProperty_mElseBranchStartLocation, GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2488)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2489)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2490)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2491)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2488)) ;
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_81798 ;
  const enumGalgasBool test_15 = var_continuesInSequence_81715.boolEnum () ;
  if (kBoolTrue == test_15) {
    ioArgument_ioBlockLabel = var_exitLabel_81485 ;
  }else if (kBoolFalse == test_15) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2499)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_switch_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_switch_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_switch_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18Instruction_do_while analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                           const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                           GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                           const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                           const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                           const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                           GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                           GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_uint & ioArgument_ioCurrentBank,
                                                                           const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                           const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_do_5F_while * object = (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
  GALGAS_lstring var_startLabel_86215 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2522)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2522)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2522)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2523)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_startLabel_86215, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2529))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2529)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2533)) ;
  ioArgument_ioBlockLabel = var_startLabel_86215 ;
  GALGAS_uint var_repeatedBranchFinalBank_86762 = ioArgument_ioCurrentBank ;
  {
  routine_analyzeInstructionList (object->mProperty_mRepeatedInstructionList, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_86762, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2537)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence_87233 = GALGAS_bool (kIsNotEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_86762)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfRepeatedInstructionList, GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)) ;
  }
  const enumGalgasBool test_2 = var_repeatedInstructionsContinuesInSequence_87233.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfRepeatedInstructionList, GALGAS_string ("This branch makes the next code unreachable"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2560)) ;
  }
  cEnumerator_pic_31__38_DoWhilePartList enumerator_87612 (object->mProperty_mWhilePartList, kENUMERATION_UP) ;
  while (enumerator_87612.hasCurrentObject ()) {
    GALGAS_lstring var_conditionTrueLabel_87656 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2565)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2565)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2565)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2566)) ;
    GALGAS_lstring var_conditionFalseLabel_87784 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)) ;
    ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2568)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_88228 ;
    callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) enumerator_87612.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_87656, var_conditionFalseLabel_87784, ioArgument_ioUsedRegisters, var_testTerminator_88228, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2570)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2583)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_88228, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2587)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2590)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_87656 ;
    GALGAS_uint var_branchFinalBank_88564 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList (enumerator_87612.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_88564, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2593)) ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_88564)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_87612.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2612)) ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_87612.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2615)) ;
    }
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2618)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, var_startLabel_86215, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2621))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2621)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2622)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2625)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_87784 ;
    enumerator_87612.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_do_5F_while_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_do_5F_while_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioVisitedBlockSet */,
                                                                                      const GALGAS_blockInstructionBlockMap /* constinArgument_inBlockMap */,
                                                                                      const GALGAS_string constinArgument_inCurrentBlockName,
                                                                                      const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                                      GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                                      GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                      GALGAS_bool & /* ioArgument_ioContinueAccessibilityExploration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_exitBlockTerminationForBlockInstruction * object = (const cPtr_exitBlockTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_exitBlockTerminationForBlockInstruction) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2675)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_otherInitialBlockSetting_91487 ;
    GALGAS_string var_otherBlockName_91515 ;
    ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2676)), var_otherInitialBlockSetting_91487, var_otherBlockName_91515, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2676)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_91487.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2679)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2679)) ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_91487.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2681)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("no bank") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = var_otherInitialBlockSetting_91487.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2681)) ;
      }
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2678)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2679)).add_operation (var_otherBlockName_91515, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2680)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2680)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2680)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2681)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2678)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2685)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2685)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_exitBlockTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioVisitedBlockSet,
                                                                                 const GALGAS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                                 const GALGAS_string constinArgument_inCurrentBlockName,
                                                                                 const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                                 GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                 GALGAS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gotoTerminationForBlockInstruction * object = (const cPtr_gotoTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gotoTerminationForBlockInstruction) ;
  const enumGalgasBool test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (object->mProperty_mNextBlock.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2699)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2699)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioVisitedBlockSet.addAssign_operation (object->mProperty_mNextBlock.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2700)) ;
    ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
    GALGAS_pic_31__38_InstructionList joker_92758 ; // Joker input parameter
    GALGAS_abstractBlockTerminationForBlockInstruction joker_92761 ; // Joker input parameter
    GALGAS_location joker_92764 ; // Joker input parameter
    constinArgument_inBlockMap.method_searchKey (object->mProperty_mNextBlock, joker_92758, joker_92761, joker_92764, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2702)) ;
    const enumGalgasBool test_1 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (object->mProperty_mNextBlock.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2703)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_otherInitialBlockSetting_92933 ;
      GALGAS_string var_otherBlockName_92961 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (object->mProperty_mNextBlock, var_otherInitialBlockSetting_92933, var_otherBlockName_92961, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2704)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_otherInitialBlockSetting_92933.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2707)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2707)) ;
        }
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_otherInitialBlockSetting_92933.objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2709)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("no bank") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = var_otherInitialBlockSetting_92933.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2709)) ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mNextBlock.getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)), GALGAS_string ("this block goes to '").add_operation (object->mProperty_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2707)).add_operation (var_otherBlockName_92961, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2708)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2708)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2708)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2709)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2706)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (object->mProperty_mNextBlock, constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_gotoTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testTerminationForBlockInstruction_addVisitedBlocks (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioVisitedBlockSet,
                                                                                 const GALGAS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                                 const GALGAS_string constinArgument_inCurrentBlockName,
                                                                                 const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                                 GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                                 GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                 GALGAS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testTerminationForBlockInstruction * object = (const cPtr_testTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_testTerminationForBlockInstruction) ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mTrueTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2728)) ;
  callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mFalseTermination.ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2737)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks (void) {
  enterExtensionMethod_addVisitedBlocks (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                         extensionMethod_testTerminationForBlockInstruction_addVisitedBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_addVisitedBlocks (defineExtensionMethod_testTerminationForBlockInstruction_addVisitedBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gotoTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                              const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                              const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                              const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                              GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                              const GALGAS_string constinArgument_inLabelForBlock,
                                                                              GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gotoTerminationForBlockInstruction * object = (const cPtr_gotoTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gotoTerminationForBlockInstruction) ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mNextBlock.getter_location (HERE), GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (object->mProperty_mNextBlock.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)), object->mProperty_mNextBlock.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2775)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2773)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_gotoTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gotoTerminationForBlockInstruction_generateBlock (defineExtensionMethod_gotoTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_exitBlockTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                   const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                   const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                                   const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                   const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                   const GALGAS_string constinArgument_inLabelForBlock,
                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_exitBlockTerminationForBlockInstruction * object = (const cPtr_exitBlockTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_exitBlockTerminationForBlockInstruction) ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mLocation, GALGAS_lstring::constructor_new (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2794)), object->mProperty_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2794)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2795))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2792)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_exitBlockTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_exitBlockTerminationForBlockInstruction_generateBlock (defineExtensionMethod_exitBlockTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@testTerminationForBlockInstruction generateBlock'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testTerminationForBlockInstruction_generateBlock (const cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                              const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                              const GALGAS_uint constinArgument_inCurrentBank,
                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                              GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                              const GALGAS_string constinArgument_inLabelForBlock,
                                                                              GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testTerminationForBlockInstruction * object = (const cPtr_testTerminationForBlockInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_testTerminationForBlockInstruction) ;
  GALGAS_lstring var_conditionTrueLabel_96789 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2811)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2811)), object->mProperty_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2811)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2812)) ;
  GALGAS_lstring var_conditionFalseLabel_96903 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2813)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2813)), object->mProperty_mLocation  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2813)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2814)) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_96789, var_conditionFalseLabel_96903, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2816)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_97587 ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mTrueTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_97587, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2829)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2841)), var_conditionTrueLabel_96789, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2843)), var_trueTerminator_97587, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2845)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2840))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2840)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_98098 ;
  callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) object->mProperty_mFalseTermination.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_98098, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2849)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2861)), var_conditionFalseLabel_96903, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2863)), var_falseTerminator_98098, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2865)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2860))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2860)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testTerminationForBlockInstruction_generateBlock (void) {
  enterExtensionMethod_generateBlock (kTypeDescriptor_GALGAS_testTerminationForBlockInstruction.mSlotID,
                                      extensionMethod_testTerminationForBlockInstruction_generateBlock) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testTerminationForBlockInstruction_generateBlock (defineExtensionMethod_testTerminationForBlockInstruction_generateBlock, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@pic18Instruction_block analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_Instruction_5F_block_analyze (const cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                                                     const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_Instruction_5F_block * object = (const cPtr_pic_31__38_Instruction_5F_block *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_Instruction_5F_block) ;
  GALGAS_string var_labelForBlock_98995 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2890)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2890)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2890)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2891)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2894)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mStartBlockName.getter_location (HERE), GALGAS_lstring::constructor_new (var_labelForBlock_98995.add_operation (object->mProperty_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2899)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2899)), object->mProperty_mStartBlockName.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2899)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2900))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2897)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2901)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2893))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2893)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2904)) ;
  GALGAS_blockInstructionBlockMap var_blockMap_99558 = GALGAS_blockInstructionBlockMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2906)) ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_99620 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_99620.hasCurrentObject ()) {
    {
    var_blockMap_99558.setter_insertKey (enumerator_99620.current_mBlockName (HERE), enumerator_99620.current_mInstructionList (HERE), enumerator_99620.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_99620.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2908)) ;
    }
    enumerator_99620.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InstructionList joker_99813 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_99816 ; // Joker input parameter
  GALGAS_location joker_99819 ; // Joker input parameter
  var_blockMap_99558.method_searchKey (object->mProperty_mStartBlockName, joker_99813, joker_99816, joker_99819, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2911)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_99856 = GALGAS_blockInitialBankSelectionMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2912)) ;
  {
  var_blockInitialBankSelectionMap_99856.setter_insertKey (object->mProperty_mStartBlockName, ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2913)) ;
  }
  GALGAS_stringset var_accessibleBlockSet_100036 = GALGAS_stringset::constructor_setWithString (object->mProperty_mStartBlockName.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2915)) ;
  GALGAS_stringset var_handledBlockSet_100110 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2916)) ;
  GALGAS_bool var_continueAccessibilityExploration_100174 = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence_100209 = GALGAS_bool (false) ;
  if (object->mProperty_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2919)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2919)).isValid ()) {
    uint32_t variant_100224 = object->mProperty_mBlockList.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2919)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2919)).uintValue () ;
    bool loop_100224 = true ;
    while (loop_100224) {
      loop_100224 = var_continueAccessibilityExploration_100174.isValid () ;
      if (loop_100224) {
        loop_100224 = var_continueAccessibilityExploration_100174.boolValue () ;
      }
      if (loop_100224 && (0 == variant_100224)) {
        loop_100224 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2919)) ;
      }
      if (loop_100224) {
        variant_100224 -- ;
        var_continueAccessibilityExploration_100174 = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_100402 (var_accessibleBlockSet_100036.substract_operation (var_handledBlockSet_100110, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2921)), kENUMERATION_UP) ;
        while (enumerator_100402.hasCurrentObject ()) {
          var_handledBlockSet_100110.addAssign_operation (enumerator_100402.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2922)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList_100561 ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_100636 ;
          GALGAS_location var_endOfBlock_100670 ;
          var_blockMap_99558.method_searchKey (enumerator_100402.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2924)), var_instructionList_100561, var_blockTermination_100636, var_endOfBlock_100670, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2923)) ;
          GALGAS_uint var_currentBank_100798 ;
          GALGAS_string joker_100800 ; // Joker input parameter
          var_blockInitialBankSelectionMap_99856.method_searchKey (enumerator_100402.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2930)), var_currentBank_100798, joker_100800, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2930)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_98995.add_operation (enumerator_100402.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), var_blockMap_99558.getter_locationForKey (enumerator_100402.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)) ;
          {
          routine_analyzeInstructionList (var_instructionList_100561, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_100798, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2932)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator_101676 ;
          callExtensionMethod_generateBlock ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_100636.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_100798, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_98995, var_terminator_101676, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2950)) ;
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (var_endOfBlock_100670, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2962)) ;
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2965)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_101676, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2969)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2964))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2964)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2972)) ;
          callExtensionMethod_addVisitedBlocks ((const cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_100636.ptr (), var_accessibleBlockSet_100036, var_blockMap_99558, enumerator_100402.current (HERE), var_currentBank_100798, var_blockInitialBankSelectionMap_99856, var_continuesInSequence_100209, var_continueAccessibilityExploration_100174, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2974)) ;
          enumerator_100402.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_102384 (object->mProperty_mBlockList, kENUMERATION_UP) ;
  while (enumerator_102384.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_accessibleBlockSet_100036.getter_hasKey (enumerator_102384.current_mBlockName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2979)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2979)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (enumerator_102384.current_mBlockName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2980)), GALGAS_string ("this block is not accessible from '").add_operation (object->mProperty_mStartBlockName.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2980)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2980)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2980)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2980)) ;
    }
    enumerator_102384.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = var_continuesInSequence_100209.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioBlockLabel = GALGAS_lstring::constructor_new (var_labelForBlock_98995.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2985)), object->mProperty_mStartBlockName.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2985)) ;
    GALGAS_string joker_102755 ; // Joker input parameter
    var_blockInitialBankSelectionMap_99856.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2986)), ioArgument_ioCurrentBank, joker_102755, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2986)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2988)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_Instruction_5F_block_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block.mSlotID,
                                extensionMethod_pic_31__38_Instruction_5F_block_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_Instruction_5F_block_analyze (defineExtensionMethod_pic_31__38_Instruction_5F_block_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                  const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                  const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                  const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                  const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BccInStructuredCondition * object = (const cPtr_pic_31__38_BccInStructuredCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BccInStructuredCondition) ;
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mConditionLocation, object->mProperty_mCondition, constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3028)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::constructor_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3030))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3024)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BccInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BccInStructuredCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                     const GALGAS_uint constinArgument_inCurrentBank,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                     const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                     const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonCondition * object = (const cPtr_pic_31__38_RegisterComparisonCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_104959 ;
  GALGAS_bitSliceTable joker_104965 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_104959, joker_104965, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison_105058 ;
  GALGAS_bool var_complementaryBranch_105086 ;
  switch (object->mProperty_mComparison.enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison_105058 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3061)) ;
      var_complementaryBranch_105086 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison_105058 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)) ;
      var_complementaryBranch_105086 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison_105058 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3067)) ;
      var_complementaryBranch_105086 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison_105058 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)) ;
      var_complementaryBranch_105086 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison_105058 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3073)) ;
      var_complementaryBranch_105086 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison_105058 = GALGAS_ipic_31__38_RegisterComparison::constructor_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3076)) ;
      var_complementaryBranch_105086 = GALGAS_bool (true) ;
    }
    break ;
  }
  GALGAS_location var_location_105880 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3080)).getter_location (HERE) ;
  const enumGalgasBool test_0 = var_complementaryBranch_105086.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_105880, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105880, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3084))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3084)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105880, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3085))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3085)), var_IPICregisterDescription_104959, var_ipicComparison_105058  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3082)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (var_location_105880, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105880, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3091))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3091)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_105880, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3092))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3092)), var_IPICregisterDescription_104959, var_ipicComparison_105058  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3089)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition.mSlotID,
                                         extensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition (defineExtensionMethod_pic_31__38_RegisterComparisonCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                   const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                   const GALGAS_uint constinArgument_inCurrentBank,
                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                   const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                   const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_IncDecRegisterInCondition * object = (const cPtr_pic_31__38_IncDecRegisterInCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_IncDecRegisterInCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_107424 ;
  GALGAS_bitSliceTable joker_107430 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_107424, joker_107430, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3111)) ;
  GALGAS_location var_location_107520 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3122)).getter_location (HERE) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_107520, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107520, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3126))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3126)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107520, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3127))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3127)), var_IPICregisterDescription_107424, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (var_location_107520, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107520, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3134))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3134)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_107520, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3135))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3135)), var_IPICregisterDescription_107424, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3132)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition.mSlotID,
                                         extensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition (defineExtensionMethod_pic_31__38_IncDecRegisterInCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@pic18RegisterTestCondition analyzeCondition'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                               const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                               const GALGAS_uint constinArgument_inCurrentBank,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                               const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterTestCondition * object = (const cPtr_pic_31__38_RegisterTestCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterTestCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_109091 ;
  GALGAS_bitSliceTable joker_109097 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_109091, joker_109097, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3155)) ;
  GALGAS_location var_location_109187 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3166)).getter_location (HERE) ;
  const enumGalgasBool test_0 = object->mProperty_mBranchIfZero.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_109187, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109187, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3170))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3170)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109187, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3171))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3171)), var_IPICregisterDescription_109091  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3168)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (var_location_109187, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109187, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3176))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3176)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_109187, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3177))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3177)), var_IPICregisterDescription_109091  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3174)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition.mSlotID,
                                         extensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterTestCondition_analyzeCondition (defineExtensionMethod_pic_31__38_RegisterTestCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                      const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                      const GALGAS_uint constinArgument_inCurrentBank,
                                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                                      const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                                      const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                      GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestInStructuredCondition * object = (const cPtr_pic_31__38_BitTestInStructuredCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestInStructuredCondition) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_110673 ;
  GALGAS_bitSliceTable var_bitSliceTable_110711 ;
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) object->mProperty_mRegisterExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_110673, var_bitSliceTable_110711, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3195)) ;
  GALGAS_uint var_bitNumber_110870 ;
  callExtensionMethod_getBitNumber ((const cPtr_bitNumberExpression *) object->mProperty_mBitNumber.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_110711, var_bitNumber_110870, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3205)) ;
  GALGAS_location var_location_110937 = object->mProperty_mRegisterExpression.getter_mRegisterName (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3213)).getter_location (HERE) ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (var_location_110937, GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_110937, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_location_110937, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217)), var_IPICregisterDescription_110673, var_bitNumber_110870  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition.mSlotID,
                                         extensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition (defineExtensionMethod_pic_31__38_BitTestInStructuredCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@pic18NegateCondition analyzeCondition'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_NegateCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                         const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GALGAS_uint constinArgument_inCurrentBank,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                         const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                         const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_NegateCondition * object = (const cPtr_pic_31__38_NegateCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_NegateCondition) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mCondition.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3236)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_NegateCondition.mSlotID,
                                         extensionMethod_pic_31__38_NegateCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_NegateCondition_analyzeCondition (defineExtensionMethod_pic_31__38_NegateCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@pic18AndCondition analyzeCondition'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_AndCondition_analyzeCondition (const cPtr_pic_31__38_ConditionExpression * inObject,
                                                                      const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                      const GALGAS_uint constinArgument_inCurrentBank,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                      const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_AndCondition * object = (const cPtr_pic_31__38_AndCondition *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_AndCondition) ;
  GALGAS_lstring var_conditionTrueLabel_112667 = GALGAS_lstring::constructor_new (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3264)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3264)), constinArgument_inConditionTrueLabel.getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3264)) ;
  ioArgument_ioLocalLabelIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3265)) ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mLeftExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_112667, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_113418 ;
  callExtensionMethod_analyzeCondition ((const cPtr_pic_31__38_ConditionExpression *) object->mProperty_mRightExpression.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_113418, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)), var_conditionTrueLabel_112667, GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3296)), var_secondTestBlockTerminator_113418, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3298)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3293))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3293)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition (void) {
  enterExtensionMethod_analyzeCondition (kTypeDescriptor_GALGAS_pic_31__38_AndCondition.mSlotID,
                                         extensionMethod_pic_31__38_AndCondition_analyzeCondition) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_AndCondition_analyzeCondition (defineExtensionMethod_pic_31__38_AndCondition_analyzeCondition, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeInstructionList'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeInstructionList (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                     const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                     GALGAS_string & ioArgument_ioListFileContents,
                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                     const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_114456 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_114456.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioArgument_ioBlockLabel.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_114456.current_mInstruction (HERE).getter_mInstructionLocation (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3328)), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3328)) ;
      ioArgument_ioBlockLabel = GALGAS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3329)) ;
    }
    callExtensionMethod_analyze ((const cPtr_pic_31__38_PiccoloInstruction *) enumerator_114456.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3331)) ;
    enumerator_114456.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'pic18_analyze_data_sections'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38__5F_analyze_5F_data_5F_sections (const GALGAS_dataList constinArgument_inDataDefinitionList,
                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         GALGAS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                         GALGAS_constantMap & ioArgument_ioConstantMap,
                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GALGAS_pic_31__38__5F_dataMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3366)) ;
  cEnumerator_dataList enumerator_115749 (constinArgument_inDataDefinitionList, kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_115749.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3369)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3369)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3369)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3370)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3370)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3370)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3370)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 119U), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3371)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3371)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3371)) ;
    while (enumerator_115749.hasCurrentObject () && bool_0) {
      GALGAS_uintlist var_data_116035 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3373)) ;
      const enumGalgasBool test_1 = enumerator_115749.current_mIsByteList (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3375)).operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3375)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_115749.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3376)), GALGAS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3376)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data8 '").add_operation (enumerator_115749.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)).add_operation (enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)).divide_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)).add_operation (enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_115749.current_mDataName (HERE).getter_string (HERE).add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)), enumerator_115749.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)), enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3380)) ;
        }
        GALGAS_sint var_byte_116435 = GALGAS_sint ((int32_t) 0L) ;
        cEnumerator_immediatExpressionList enumerator_116491 (enumerator_115749.current_mValueList (HERE), kENUMERATION_UP) ;
        GALGAS_uint index_116450 ((uint32_t) 0) ;
        while (enumerator_116491.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_116576 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_116491.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_116576, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3383)) ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_value_116576.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_116491.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_116576.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3385)) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_value_116576.objectCompare (GALGAS_sint_36__34_ ((int64_t) 255LL))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_116491.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_116576.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)).add_operation (GALGAS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, index_116450.operator_and (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3388)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_byte_116435 = var_value_116576.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3389)) ;
              }else if (kBoolFalse == test_8) {
                var_data_116035.addAssign_operation (var_value_116576.left_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)).operator_or (var_byte_116435.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)) ;
              }
            }
          }
          enumerator_116491.gotoNextObject () ;
          index_116450.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3382)) ;
        }
      }else if (kBoolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data16 '").add_operation (enumerator_115749.current_mDataName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)).add_operation (enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)).add_operation (enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3396)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3396)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3396)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3396)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3396)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3395)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_115749.current_mDataName (HERE).getter_string (HERE).add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)), enumerator_115749.current_mDataName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)), enumerator_115749.current_mValueList (HERE).getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)).multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3397)) ;
        }
        cEnumerator_immediatExpressionList enumerator_117231 (enumerator_115749.current_mValueList (HERE), kENUMERATION_UP) ;
        while (enumerator_117231.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_117311 ;
          callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_117231.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_117311, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_value_117311.objectCompare (GALGAS_sint_36__34_ ((int64_t) 0LL))).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_117231.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_117311.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3401)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_value_117311.objectCompare (GALGAS_sint_36__34_ ((int64_t) 65535LL))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_117231.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_117311.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3403)) ;
            }else if (kBoolFalse == test_11) {
              var_data_116035.addAssign_operation (var_value_117311.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3405)) ;
            }
          }
          enumerator_117231.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_115749.current_mDataName (HERE), var_data_116035, enumerator_115749.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)) ;
      }
      enumerator_115749.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'build_ipic18_block_representation_list'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list (const GALGAS_string constinArgument_inSourceFileName,
                                                                       const GALGAS_sint_36__34_ constinArgument_inROMSize,
                                                                       const GALGAS_sint_36__34_ constinArgument_inRAMSize,
                                                                       const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                       const GALGAS_luint constinArgument_inBootloaderReservedROMsize,
                                                                       const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                       const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                       const GALGAS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                       const GALGAS_programKind constinArgument_inProgramKind,
                                                                       const GALGAS_constantDefinitionList constinArgument_inConstantDefinitionList,
                                                                       const GALGAS_dataList constinArgument_inDataList,
                                                                       const GALGAS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                       const GALGAS_lstringlist constinArgument_inUnusedRegisterList,
                                                                       const GALGAS_ramBankTable constinArgument_inRamBank,
                                                                       const GALGAS_bool constinArgument_inHasHighInterrupt,
                                                                       const GALGAS_bool constinArgument_inHasLowInterrupt,
                                                                       const GALGAS_string constinArgument_inProcessorName,
                                                                       const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                       const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                       const GALGAS_location constinArgument_inEndOfProgram,
                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap var_routineMap_119089 = GALGAS_routineMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3444)) ;
  cEnumerator_routineDeclarationList enumerator_119182 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_119182.hasCurrentObject ()) {
    {
    var_routineMap_119089.setter_insertKey (enumerator_119182.current_mRoutineName (HERE), enumerator_119182.current_mIsNoReturn (HERE), enumerator_119182.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3446)), enumerator_119182.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3446)), enumerator_119182.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3446)) ;
    }
    enumerator_119182.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_119383 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_119383.hasCurrentObject ()) {
    {
    var_routineMap_119089.setter_insertKey (enumerator_119383.current_mRoutineName (HERE), enumerator_119383.current_mIsNoReturn (HERE), enumerator_119383.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3449)), enumerator_119383.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3449)), enumerator_119383.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3449)) ;
    }
    enumerator_119383.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_119545 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_119545.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_119545.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_119545.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_119545.current_mRequiredBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453)), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_119545.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3455)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3455)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_119545.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3455)).objectCompare (GALGAS_uint ((uint32_t) 15U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3455)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_119545.current_mReturnedBank (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3456)), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3456)) ;
    }
    {
    var_routineMap_119089.setter_insertKey (enumerator_119545.current_mRoutineName (HERE), enumerator_119545.current_mIsNoReturn (HERE), enumerator_119545.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3458)), enumerator_119545.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3458)), enumerator_119545.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3458)) ;
    }
    enumerator_119545.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_120081 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3461)) ;
  {
  var_constantMap_120081.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ROM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3463))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3463)), constinArgument_inROMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3463)) ;
  }
  {
  var_constantMap_120081.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("RAM_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3464))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3464)), constinArgument_inRAMSize, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3464)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_regularProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3466)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_lstring var_bootloaderSizeString_120452 = GALGAS_lstring::constructor_new (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3467))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3467)) ;
    {
    var_constantMap_120081.setter_insertKey (var_bootloaderSizeString_120452, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)) ;
    }
  }
  GALGAS_stringset var_usedRegisters_120663 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)) ;
  cEnumerator_constantDefinitionList enumerator_120725 (constinArgument_inConstantDefinitionList, kENUMERATION_UP) ;
  while (enumerator_120725.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_120800 ;
    callExtensionMethod_eval ((const cPtr_immediatExpression *) enumerator_120725.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_120081, var_result_120800, var_usedRegisters_120663, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3473)) ;
    const enumGalgasBool test_5 = constinArgument_inRegisterTable.getter_hasKey (enumerator_120725.current_mConstantName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3474)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3474)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (enumerator_120725.current_mConstantName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3475)), GALGAS_string ("'").add_operation (enumerator_120725.current_mConstantName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3475)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3475)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3475)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3475)) ;
    }else if (kBoolFalse == test_5) {
      {
      var_constantMap_120081.setter_insertKey (enumerator_120725.current_mConstantName (HERE), var_result_120800, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3477)) ;
      }
    }
    enumerator_120725.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap_121255 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_120081, ioArgument_ioListFileContents, var_dataMap_121255, var_constantMap_120081, var_usedRegisters_120663, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3481)) ;
  }
  {
  routine_print_5F_constant_5F_definition (var_constantMap_120081, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3491)) ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3496)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = var_routineMap_119089.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3497)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isNoReturn_121613 ;
      GALGAS_uint var_requiredBank_121638 ;
      GALGAS_uint joker_121736 ; // Joker input parameter
      GALGAS_bool joker_121739 ; // Joker input parameter
      var_routineMap_119089.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("main"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500)), var_isNoReturn_121613, var_requiredBank_121638, joker_121736, joker_121739, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500)) ;
      const enumGalgasBool test_9 = var_isNoReturn_121613.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_requiredBank_121638.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3505)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3505)) ;
      }
    }else if (kBoolFalse == test_8) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3508)) ;
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList_122291 = GALGAS_ipic_31__38_BlockList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3512)) ;
  GALGAS_uint var_entryPoint_122340 = GALGAS_uint ((uint32_t) 4U) ;
  cEnumerator_routineDeclarationList enumerator_122423 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_122423.hasCurrentObject ()) {
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122340, enumerator_122423.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3518)), GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3519))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3519)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3520)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3515))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3515)) ;
    var_entryPoint_122340 = var_entryPoint_122340.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3523)) ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_entryPoint_122340.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      var_entryPoint_122340 = GALGAS_uint ((uint32_t) 12U) ;
    }else if (kBoolFalse == test_14) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, var_entryPoint_122340.objectCompare (GALGAS_uint ((uint32_t) 24U))).boolEnum () ;
      if (kBoolTrue == test_15) {
        var_entryPoint_122340 = GALGAS_uint ((uint32_t) 28U) ;
      }
    }
    enumerator_122423.gotoNextObject () ;
  }
  var_entryPoint_122340 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3531)) ;
  cEnumerator_routineDeclarationList enumerator_123018 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, kENUMERATION_UP) ;
  while (enumerator_123018.hasCurrentObject ()) {
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122340, GALGAS_string ("_entry_user_").add_operation (var_entryPoint_122340.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3535)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3535)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3535)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3536)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_123018.current_mRoutineName (HERE).getter_location (HERE), enumerator_123018.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3537))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3537)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533)) ;
    var_entryPoint_122340 = var_entryPoint_122340.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3541)) ;
    enumerator_123018.gotoNextObject () ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)))).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3547)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GALGAS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545)) ;
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_123934 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_123934.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3556)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_lstring var_routineName_124137 ;
    {
    GALGAS_luint joker_124139 ; // Joker input parameter
    GALGAS_luint joker_124142 ; // Joker input parameter
    GALGAS_bool joker_124145 ; // Joker input parameter
    GALGAS_bool joker_124148 ; // Joker input parameter
    var_tempBootloaderRoutineDeclarationList_123934.setter_popFirst (var_routineName_124137, joker_124139, joker_124142, joker_124145, joker_124148, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3557)) ;
    }
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 4U), GALGAS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3561)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_124137.getter_location (HERE), var_routineName_124137, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3562))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3562)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3558))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3558)) ;
  }
  const enumGalgasBool test_18 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_18) {
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 8U), GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3571)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3573)), GALGAS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3573)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3573))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3573)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569)) ;
  }
  var_entryPoint_122340 = GALGAS_uint ((uint32_t) 12U) ;
  if (var_tempBootloaderRoutineDeclarationList_123934.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)).isValid ()) {
    uint32_t variant_125032 = var_tempBootloaderRoutineDeclarationList_123934.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)).uintValue () ;
    bool loop_125032 = true ;
    while (loop_125032) {
      loop_125032 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_123934.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3581)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_122340.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3581)).isValid () ;
      if (loop_125032) {
        loop_125032 = GALGAS_bool (kIsStrictSup, var_tempBootloaderRoutineDeclarationList_123934.getter_length (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3581)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictInf, var_entryPoint_122340.objectCompare (GALGAS_uint ((uint32_t) 24U))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3581)).boolValue () ;
      }
      if (loop_125032 && (0 == variant_125032)) {
        loop_125032 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)) ;
      }
      if (loop_125032) {
        variant_125032 -- ;
        GALGAS_lstring var_routineName_125247 ;
        {
        GALGAS_luint joker_125249 ; // Joker input parameter
        GALGAS_luint joker_125252 ; // Joker input parameter
        GALGAS_bool joker_125255 ; // Joker input parameter
        GALGAS_bool joker_125258 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_123934.setter_popFirst (var_routineName_125247, joker_125249, joker_125252, joker_125255, joker_125258, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3583)) ;
        }
        var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122340, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_122340.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3586)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (var_routineName_125247.getter_location (HERE), var_routineName_125247, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584)) ;
        var_entryPoint_122340 = var_entryPoint_122340.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3592)) ;
      }
    }
  }
  const enumGalgasBool test_19 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_19) {
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint ((uint32_t) 24U), GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3598)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3599)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600)), GALGAS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3600)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3601)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)) ;
  }
  var_entryPoint_122340 = GALGAS_uint ((uint32_t) 28U) ;
  cEnumerator_routineDeclarationList enumerator_126182 (var_tempBootloaderRoutineDeclarationList_123934, kENUMERATION_UP) ;
  while (enumerator_126182.hasCurrentObject ()) {
    var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122340, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_122340.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_126182.current_mRoutineName (HERE).getter_location (HERE), enumerator_126182.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3608))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3608)) ;
    var_entryPoint_122340 = var_entryPoint_122340.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)) ;
    enumerator_126182.gotoNextObject () ;
  }
  GALGAS_uint var_localLabelIndex_126686 = GALGAS_uint ((uint32_t) 0U) ;
  const enumGalgasBool test_20 = constinArgument_inHasLowInterrupt.boolEnum () ;
  if (kBoolTrue == test_20) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_126759 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
    while (enumerator_126759.hasCurrentObject ()) {
      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, enumerator_126759.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3623)).objectCompare (GALGAS_string ("low"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_uint var_currentBank_126833 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3624)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_126893 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3625)) ;
        GALGAS_lstring var_currentBlockLabel_126970 = GALGAS_lstring::constructor_new (GALGAS_string ("_low_interrupt"), enumerator_126759.current_mInterruptName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3626)) ;
        {
        routine_analyzeInstructionList (enumerator_126759.current_mInstructionList (HERE), var_generatedBlockList_122291, constinArgument_inAccessBankSplitOffset, var_routineMap_119089, constinArgument_inRegisterTable, var_dataMap_121255, var_constantMap_120081, constinArgument_inMacroMap, var_localLabelIndex_126686, var_generatedInstructionList_126893, var_currentBlockLabel_126970, ioArgument_ioListFileContents, var_currentBank_126833, enumerator_126759.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)), var_usedRegisters_120663, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3627)) ;
        }
        const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, var_currentBlockLabel_126970.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (enumerator_126759.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray23  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3646)) ;
        }
        var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3650)), var_currentBlockLabel_126970, var_generatedInstructionList_126893, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_126759.current_mInterruptName (HERE).getter_location (HERE), enumerator_126759.current_mFastReturn (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3653)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3654)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649)) ;
      }
      enumerator_126759.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_24 = constinArgument_inHasHighInterrupt.boolEnum () ;
  if (kBoolTrue == test_24) {
    cEnumerator_pic_31__38_InterruptDefinitionList enumerator_128184 (constinArgument_inInterruptDefinitionList, kENUMERATION_UP) ;
    while (enumerator_128184.hasCurrentObject ()) {
      const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, enumerator_128184.current_mInterruptName (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3663)).objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_25) {
        GALGAS_uint var_currentBank_128259 = GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3664)) ;
        GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_128319 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3665)) ;
        GALGAS_lstring var_currentBlockLabel_128396 = GALGAS_lstring::constructor_new (GALGAS_string ("_high_interrupt"), enumerator_128184.current_mInterruptName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3666)) ;
        {
        routine_analyzeInstructionList (enumerator_128184.current_mInstructionList (HERE), var_generatedBlockList_122291, constinArgument_inAccessBankSplitOffset, var_routineMap_119089, constinArgument_inRegisterTable, var_dataMap_121255, var_constantMap_120081, constinArgument_inMacroMap, var_localLabelIndex_126686, var_generatedInstructionList_128319, var_currentBlockLabel_128396, ioArgument_ioListFileContents, var_currentBank_128259, enumerator_128184.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3681)), GALGAS_routineKind::constructor_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3682)), var_usedRegisters_120663, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3667)) ;
        }
        const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, var_currentBlockLabel_128396.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_26) {
          TC_Array <C_FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (enumerator_128184.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray27  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3686)) ;
        }
        var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3690)), var_currentBlockLabel_128396, var_generatedInstructionList_128319, GALGAS_ipic_31__38_RetfieTerminator::constructor_new (enumerator_128184.current_mInterruptName (HERE).getter_location (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3693)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3694)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3689))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3689)) ;
      }
      enumerator_128184.gotoNextObject () ;
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_129548 (constinArgument_inRoutineDefinitionList, kENUMERATION_UP) ;
  while (enumerator_129548.hasCurrentObject ()) {
    GALGAS_uint var_currentBank_129573 = enumerator_129548.current_mRequiredBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3702)) ;
    GALGAS_routineKind var_routineKind_129625 ;
    const enumGalgasBool test_28 = enumerator_129548.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_28) {
      var_routineKind_129625 = GALGAS_routineKind::constructor_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3705)) ;
    }else if (kBoolFalse == test_28) {
      var_routineKind_129625 = GALGAS_routineKind::constructor_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3707)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_129798 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3709)) ;
    GALGAS_lstring var_currentBlockLabel_129876 = enumerator_129548.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList (enumerator_129548.current_mInstructionList (HERE), var_generatedBlockList_122291, constinArgument_inAccessBankSplitOffset, var_routineMap_119089, constinArgument_inRegisterTable, var_dataMap_121255, var_constantMap_120081, constinArgument_inMacroMap, var_localLabelIndex_126686, var_generatedInstructionList_129798, var_currentBlockLabel_129876, ioArgument_ioListFileContents, var_currentBank_129573, enumerator_129548.current_mPreservesBank (HERE), var_routineKind_129625, var_usedRegisters_120663, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3711)) ;
    }
    GALGAS_bool var_continuesInSequence_130328 = GALGAS_bool (kIsNotEqual, var_currentBlockLabel_129876.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
    const enumGalgasBool test_29 = var_continuesInSequence_130328.boolEnum () ;
    if (kBoolTrue == test_29) {
      var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3733)), var_currentBlockLabel_129876, var_generatedInstructionList_129798, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (enumerator_129548.current_mRoutineName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3736)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3737)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3732))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3732)) ;
    }
    const enumGalgasBool test_30 = enumerator_129548.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3742)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_129548.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3742)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3742)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3742)).operator_and (GALGAS_bool (kIsNotEqual, var_currentBank_129573.objectCompare (enumerator_129548.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3742)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3742)).boolEnum () ;
    if (kBoolTrue == test_30) {
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (enumerator_129548.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3743)), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_129548.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3743)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3743)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3743)), fixItArray31  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3743)) ;
    }
    const enumGalgasBool test_32 = enumerator_129548.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_130328 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3745)).boolEnum () ;
    if (kBoolTrue == test_32) {
      TC_Array <C_FixItDescription> fixItArray33 ;
      inCompiler->emitSemanticError (enumerator_129548.current_mRoutineName (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3746)), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray33  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3746)) ;
    }
    enumerator_129548.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister_131228 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("WREG"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3753))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3753)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3754))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3754))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3754)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3755))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3752)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_131586 ;
  GALGAS_bitSliceTable joker_131592 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_WREGregister_131228.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_120081, GALGAS_bool (false), var_WREG_5F_IPICregisterDescription_131586, joker_131592, var_usedRegisters_120663, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3757)) ;
  GALGAS_registerExpression var_TOSLregister_131670 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSL"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3769))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3769)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3770))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3770))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3770)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3771))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3768)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_132027 ;
  GALGAS_bitSliceTable joker_132033 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSLregister_131670.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_120081, GALGAS_bool (true), var_TOSL_5F_IPICregisterDescription_132027, joker_132033, var_usedRegisters_120663, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3773)) ;
  GALGAS_registerExpression var_TOSHregister_132111 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSH"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3785)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3786)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3787))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3784)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_132467 ;
  GALGAS_bitSliceTable joker_132473 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSHregister_132111.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_120081, GALGAS_bool (true), var_TOSH_5F_IPICregisterDescription_132467, joker_132473, var_usedRegisters_120663, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3789)) ;
  GALGAS_registerExpression var_TOSUregister_132551 = GALGAS_registerExpression::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("TOSU"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3801))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3801)), GALGAS_immediatInteger::constructor_new (GALGAS_luint::constructor_new (GALGAS_uint ((uint32_t) 0U), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3802)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3803))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3800)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_132906 ;
  GALGAS_bitSliceTable joker_132912 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((const cPtr_registerExpression *) var_TOSUregister_132551.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint ((uint32_t) 0U), constinArgument_inRegisterTable, var_constantMap_120081, GALGAS_bool (true), var_TOSU_5F_IPICregisterDescription_132906, joker_132912, var_usedRegisters_120663, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3805)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_132988 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3817)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3818)), var_WREG_5F_IPICregisterDescription_131586, GALGAS_bool (true)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3816)) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block_133201 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3824)), GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3825)), GALGAS_ipic_31__38_SequentialInstructionList::constructor_listWithValue (var_ADDWF_5F_WREG_132988, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3826)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3826)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3827)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3827)), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3827))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3827)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3828)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3823)) ;
  var_generatedBlockList_122291.addAssign_operation (var_goto_34_Block_133201  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3831)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_133598 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3833)) ;
  var_goto_32_InstructionList_133598.addAssign_operation (var_ADDWF_5F_WREG_132988, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3834)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3834)) ;
  var_goto_32_InstructionList_133598.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3836)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3837)), var_TOSL_5F_IPICregisterDescription_132027, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3835)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3839)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3835)) ;
  var_goto_32_InstructionList_133598.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3841)), GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3842)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3840)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3843)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3840)) ;
  var_goto_32_InstructionList_133598.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3845)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3846)), var_TOSH_5F_IPICregisterDescription_132467, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3844)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3848)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3844)) ;
  var_goto_32_InstructionList_133598.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3850)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::constructor_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3851)), var_TOSU_5F_IPICregisterDescription_132906, GALGAS_bool (false)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3849)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3855)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3849)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block_134568 = GALGAS_ipic_31__38_Block::constructor_new (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3859)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3860)), var_goto_32_InstructionList_133598, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3862))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3862)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3863)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3858)) ;
  var_generatedBlockList_122291.addAssign_operation (var_goto_32_Block_134568  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3866)) ;
  var_entryPoint_122340 = constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3868)) ;
  cEnumerator_routineDeclarationList enumerator_134982 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, kENUMERATION_UP) ;
  while (enumerator_134982.hasCurrentObject ()) {
    const enumGalgasBool test_34 = enumerator_134982.current_mIsNoReturn (HERE).boolEnum () ;
    if (kBoolTrue == test_34) {
      var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122340, enumerator_134982.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3874)), GALGAS_ipic_31__38_JumpTerminator::constructor_new (enumerator_134982.current_mRoutineName (HERE).getter_location (HERE), enumerator_134982.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3875))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3875)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3876)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3871))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3871)) ;
    }else if (kBoolFalse == test_34) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList_135338 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3880)) ;
      const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, enumerator_134982.current_mReturnedBank (HERE).getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3881)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3881)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_instructionList_135338.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3882)), enumerator_134982.current_mReturnedBank (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3882)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3882)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3882)) ;
      }
      var_generatedBlockList_122291.addAssign_operation (GALGAS_ipic_31__38_Block::constructor_new (var_entryPoint_122340, enumerator_134982.current_mRoutineName (HERE), var_instructionList_135338, GALGAS_ipic_31__38_ReturnTerminator::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3888))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3888)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3889)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3884))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3884)) ;
    }
    var_entryPoint_122340 = var_entryPoint_122340.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3893)) ;
    enumerator_134982.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_135948 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3896)) ;
  cEnumerator_lstringlist enumerator_136005 (constinArgument_inUnusedRegisterList, kENUMERATION_UP) ;
  while (enumerator_136005.hasCurrentObject ()) {
    const enumGalgasBool test_36 = constinArgument_inRegisterTable.getter_hasKey (enumerator_136005.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3898)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3898)).boolEnum () ;
    if (kBoolTrue == test_36) {
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticError (enumerator_136005.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3899)), GALGAS_string ("the '").add_operation (enumerator_136005.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3899)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3899)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3899)), fixItArray37  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3899)) ;
    }else if (kBoolFalse == test_36) {
      const enumGalgasBool test_38 = var_unusedDeclarationUnicity_135948.getter_hasKey (enumerator_136005.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3900)).boolEnum () ;
      if (kBoolTrue == test_38) {
        TC_Array <C_FixItDescription> fixItArray39 ;
        inCompiler->emitSemanticWarning (enumerator_136005.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3901)), GALGAS_string ("the '").add_operation (enumerator_136005.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3901)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3901)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3901)), fixItArray39  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3901)) ;
      }else if (kBoolFalse == test_38) {
        const enumGalgasBool test_40 = var_usedRegisters_120663.getter_hasKey (enumerator_136005.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3902)).boolEnum () ;
        if (kBoolTrue == test_40) {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticWarning (enumerator_136005.current_mValue (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3903)), GALGAS_string ("the '").add_operation (enumerator_136005.current_mValue (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3903)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3903)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3903)), fixItArray41  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3903)) ;
        }
      }
    }
    var_unusedDeclarationUnicity_135948.addAssign_operation (enumerator_136005.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3905)) ;
    enumerator_136005.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_136505 (constinArgument_inDeclaredByteMap, kENUMERATION_UP) ;
  while (enumerator_136505.hasCurrentObject ()) {
    const enumGalgasBool test_42 = var_usedRegisters_120663.getter_hasKey (enumerator_136505.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3908)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3908)).operator_and (var_unusedDeclarationUnicity_135948.getter_hasKey (enumerator_136505.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3908)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3908)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3908)).boolEnum () ;
    if (kBoolTrue == test_42) {
      TC_Array <C_FixItDescription> fixItArray43 ;
      inCompiler->emitSemanticWarning (enumerator_136505.current_lkey (HERE).getter_location (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)), GALGAS_string ("the '").add_operation (enumerator_136505.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)), fixItArray43  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3909)) ;
    }
    enumerator_136505.gotoNextObject () ;
  }
  {
  routine_displayBlockList (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_122291, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3913)) ;
  }
  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3915)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_44) {
    {
    routine_ipic_31__38_OptimizeBlocks (ioArgument_ioListFileContents, var_generatedBlockList_122291, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3916)) ;
    }
    {
    routine_displayBlockList (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_122291, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3917)) ;
    }
  }
  const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3920)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_45) {
    {
    routine_ipic_31__38_OptimizeBlockOrdering (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_122291, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3921)) ;
    }
  }
  const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3928)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_46) {
    {
    routine_ipic_31__38_RelativesResolution (ioArgument_ioListFileContents, var_generatedBlockList_122291, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3929)) ;
    }
  }
  const enumGalgasBool test_47 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3935)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::constructor_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3935)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3935)).boolEnum () ;
  if (kBoolTrue == test_47) {
    {
    routine_ipic_31__38_StackComputations (ioArgument_ioListFileContents, var_generatedBlockList_122291, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3936)) ;
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap_138006 = GALGAS_blockDurationMap::constructor_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3942)) ;
  const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3943)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_48) {
    {
    routine_ipic_31__38_DurationComputations (var_generatedBlockList_122291, var_blockDurationMap_138006, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3944)) ;
    }
  }
  const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3947)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_49) {
    GALGAS_uint var_usedROMsize_138568 ;
    GALGAS_generatedCodeMap var_generatedCodeMap_138621 ;
    {
    routine_ipic_31__38_GenerateCode (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.getter_uint (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3951)), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3952)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_121255, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_122291, var_usedROMsize_138568, var_generatedCodeMap_138621, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3948)) ;
    }
    const enumGalgasBool test_50 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3964)).boolEnum () ;
    if (kBoolTrue == test_50) {
      GALGAS_string var_verboseMessage_138770 = GALGAS_string ("Resource usage:\n") ;
      var_verboseMessage_138770.plusAssign_operation(GALGAS_string ("  ROM size: ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3966)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3966)).add_operation (GALGAS_string (" bytes;"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3966)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3966)) ;
      var_verboseMessage_138770.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_138568.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3967)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3967)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3967)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3967)) ;
      var_verboseMessage_138770.plusAssign_operation(var_usedROMsize_138568.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3968)) ;
      cEnumerator_ramBankTable enumerator_139027 (constinArgument_inRamBank, kENUMERATION_UP) ;
      while (enumerator_139027.hasCurrentObject ()) {
        GALGAS_uint var_bankSize_139053 = enumerator_139027.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_139027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3970)) ;
        GALGAS_uint var_usedSize_139114 = enumerator_139027.current_mFirstFreeAddress (HERE).substract_operation (enumerator_139027.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3971)) ;
        var_verboseMessage_138770.plusAssign_operation(GALGAS_string ("  RAM bank '").add_operation (enumerator_139027.current_lkey (HERE).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3972)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3972)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3972)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3972)) ;
        var_verboseMessage_138770.plusAssign_operation(var_bankSize_139053.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3973)).add_operation (GALGAS_string (" bytes, used "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3973)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3973)) ;
        var_verboseMessage_138770.plusAssign_operation(var_usedSize_139114.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3974)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3974)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3974)) ;
        var_verboseMessage_138770.plusAssign_operation(var_usedSize_139114.multiply_operation (GALGAS_uint ((uint32_t) 100U), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3975)).divide_operation (var_bankSize_139053, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3975)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3975)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3975)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3975)) ;
        enumerator_139027.gotoNextObject () ;
      }
      inCompiler->printMessage (var_verboseMessage_138770  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3977)) ;
    }
  }
  const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3981)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_51) {
    {
    routine_ipic_31__38_PrintDurations (ioArgument_ioListFileContents, var_blockDurationMap_138006, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3982)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                  const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                  const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                  GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                   const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                   const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                   GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@ipic18JumpTerminator optimizeTerminator'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                           const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                           GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mProperty_mLabel.getter_string (HERE))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint var_targetBlockIndex_2048 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mLabel, var_targetBlockIndex_2048, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
    GALGAS_ipic_31__38_Block var_targetBlock_2082 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2048, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetBlock_2082.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_2082.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2082.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bool var_optimize_2354 ;
      const enumGalgasBool test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.getter_mTerminator (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock_2082.getter_mTerminator (HERE).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.getter_mTerminator (HERE).ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2082.getter_mTerminator (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2082.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_candidate_2466 = temp_4 ;
        var_optimize_2354 = GALGAS_bool (kIsNotEqual, object->mProperty_mLabel.getter_string (HERE).objectCompare (var_candidate_2466.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 61)).getter_string (HERE))) ;
      }else if (kBoolFalse == test_3) {
        var_optimize_2354 = GALGAS_bool (true) ;
      }
      const enumGalgasBool test_5 = var_optimize_2354.boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outOptimizedTerminator = var_targetBlock_2082.getter_mTerminator (HERE) ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
        const GALGAS_ipic_31__38_JumpTerminator temp_6 = object ;
        ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_6.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
        ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_JumpTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@ipic18ConditionalJumpTerminator optimizeTerminator'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                      const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                      const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                      GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                      GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTargetLabelWhenTrue.getter_string (HERE).objectCompare (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTargetLabelWhenFalse, GALGAS_jumpInstructionKind::constructor_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 93))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 90)) ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (object->mProperty_mTargetLabelWhenFalse.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 95)) ;
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 96)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_optimized_3987 = GALGAS_bool (false) ;
    GALGAS_lstring var_targetLabelWhenTrue_4055 = object->mProperty_mTargetLabelWhenTrue ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mProperty_mTargetLabelWhenTrue.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_targetBlockIndex_4215 ;
      constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenTrue, var_targetBlockIndex_4215, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 102)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_4251 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4215, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 103)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetBlock_4251.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 104)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_4251.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4251.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_ipic_31__38_JumpTerminator temp_4 ;
        if (var_targetBlock_4251.getter_mTerminator (HERE).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4251.getter_mTerminator (HERE).ptr ())) {
            temp_4 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_4251.getter_mTerminator (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_4251.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 107)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp_4532 = temp_4 ;
        var_targetLabelWhenTrue_4055 = var_jp_4532.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 108)) ;
        var_optimized_3987 = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 110)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mTargetLabelWhenTrue.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 111)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenTrue_4055.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
      }
    }
    GALGAS_lstring var_targetLabelWhenFalse_5000 = object->mProperty_mTargetLabelWhenFalse ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inBlockLabel.objectCompare (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_uint var_targetBlockIndex_5163 ;
      constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenFalse, var_targetBlockIndex_5163, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 120)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_5199 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5163, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 121)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_targetBlock_5199.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 122)))).operator_and (GALGAS_bool (kIsEqual, var_targetBlock_5199.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 122)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5199.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_ipic_31__38_JumpTerminator temp_7 ;
        if (var_targetBlock_5199.getter_mTerminator (HERE).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5199.getter_mTerminator (HERE).ptr ())) {
            temp_7 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_5199.getter_mTerminator (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_5199.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 125)) ;
          }
        }
        GALGAS_ipic_31__38_JumpTerminator var_jp_5480 = temp_7 ;
        var_targetLabelWhenFalse_5000 = var_jp_5480.getter_mLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)) ;
        var_optimized_3987 = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 128)) ;
        ioArgument_ioListFileContents.plusAssign_operation(object->mProperty_mTargetLabelWhenFalse.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 129)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 130)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenFalse_5000.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
      }
    }
    const enumGalgasBool test_8 = var_optimized_3987.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mConditionalBranch, var_targetLabelWhenTrue_4055, object->mProperty_mBranchModeOnTrueLabel, var_targetLabelWhenFalse_5000, object->mProperty_mBranchModeOnFalseLabel  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 138)) ;
    }else if (kBoolFalse == test_8) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = object ;
      outArgument_outOptimizedTerminator = temp_9 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@ipic18IncDecRegisterTerminator optimizeTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     const GALGAS_string constinArgument_inBlockLabel,
                                                                                     GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  GALGAS_bool var_optimization_8997 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9234 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9303 ;
  GALGAS_bool var_identicalTerminators_9339 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_8997, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9234, var_optimizedFalseTerminator_9303, var_identicalTerminators_9339, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 213)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_9339.boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = object ;
    outArgument_outOptimizedTerminator = temp_2 ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("useless decf/incf condition should be replaced by decf/incf instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 226)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = var_optimization_8997.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_9234, var_optimizedFalseTerminator_9303, object->mProperty_mRegisterDescription, object->mProperty_mIncrement, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 228)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_4) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = object ;
      outArgument_outOptimizedTerminator = temp_5 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_IncDecRegisterTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@pic18BitTestTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                             const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                             const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                             const GALGAS_string constinArgument_inBlockLabel,
                                                                             GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  GALGAS_bool var_optimization_10298 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10535 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10604 ;
  GALGAS_bool var_identicalTerminators_10640 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10298, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10535, var_optimizedFalseTerminator_10604, var_identicalTerminators_10640, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 253)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_10640.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10535 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10535.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 267)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 268)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_10298.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_BitTestTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_10535, var_optimizedFalseTerminator_10604, object->mProperty_mRegisterDescription, object->mProperty_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 270)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                           extensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_BitTestTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@pic18RegisterComparisonTerminator optimizeTerminator'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  GALGAS_bool var_optimization_11738 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_11970 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12039 ;
  GALGAS_bool var_identicalTerminators_12075 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_11738, ioArgument_ioListFileContents, var_optimizedTrueTerminator_11970, var_optimizedFalseTerminator_12039, var_identicalTerminators_12075, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 293)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_12075.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_11970 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_11970.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 307)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 308)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_11738.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_11970, var_optimizedFalseTerminator_12039, object->mProperty_mRegisterDescription, object->mProperty_mComparison  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 310)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                           extensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_RegisterComparisonTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@pic18TestRegisterTerminator optimizeTerminator'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                  const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                  GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  GALGAS_bool var_optimization_13179 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13411 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13480 ;
  GALGAS_bool var_identicalTerminators_13516 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = object ;
  callExtensionMethod_getOptimizedTerminators ((const cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13179, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13411, var_optimizedFalseTerminator_13480, var_identicalTerminators_13516, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 333)) ;
  const enumGalgasBool test_1 = var_identicalTerminators_13516.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13411 ;
    ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13411.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 347)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticWarning (object->mProperty_mInstructionLocation, GALGAS_string ("useless condition deleted"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 348)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_optimization_13179.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outOptimizedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::constructor_new (object->mProperty_mInstructionLocation, var_optimizedTrueTerminator_13411, var_optimizedFalseTerminator_13480, object->mProperty_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 350)) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = object ;
      outArgument_outOptimizedTerminator = temp_4 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                           extensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator (defineExtensionMethod_pic_31__38_TestRegisterTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@ipic18RetfieTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                             const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                             const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                             const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                             GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetfieTerminator * object = (const cPtr_ipic_31__38_RetfieTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetfieTerminator) ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_RetfieTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@ipic18RetlwTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                            const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                            const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                            const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                            const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                            GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_RetlwTerminator * object = (const cPtr_ipic_31__38_RetlwTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_RetlwTerminator) ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_RetlwTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@ipic18ReturnTerminator optimizeTerminator'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                             const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                             const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                             const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                             const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                             GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                             GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ReturnTerminator * object = (const cPtr_ipic_31__38_ReturnTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ReturnTerminator) ;
  const GALGAS_ipic_31__38_ReturnTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ReturnTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@ipic18ComputedRETLWTerminator optimizeTerminator'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                    const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                                    const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                    const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                                    GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                                    GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedRETLWTerminator * object = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = object ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (void) {
  enterExtensionMethod_optimizeTerminator (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                           extensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_optimizeTerminator, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto2block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_32_block (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 423)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 423)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 424)) ;
    GALGAS_uint var_blockIndex_16703 ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 425)), var_blockIndex_16703, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 425)) ;
    GALGAS_ipic_31__38_Block var_b_16727 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_16703, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 426)) ;
    extensionMethod_enterReferencedLabels (var_b_16727, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 427)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'enterGoto4block'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterGoto_34_block (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 441)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 441)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 442)) ;
    GALGAS_uint var_blockIndex_17305 ;
    constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 443)), var_blockIndex_17305, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 443)) ;
    GALGAS_ipic_31__38_Block var_b_17329 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17305, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 444)) ;
    extensionMethod_enterReferencedLabels (var_b_17329, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 445)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                 const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                 GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 466)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedRETLWTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  {
  routine_enterGoto_32_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 479)) ;
  }
  cEnumerator_lstringlist enumerator_18547 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_18547.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18547.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 485)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 485)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18547.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 486)) ;
      GALGAS_uint var_blockIndex_18717 ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_18547.current_mValue (HERE), var_blockIndex_18717, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 487)) ;
      GALGAS_ipic_31__38_Block var_b_18743 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_18717, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 488)) ;
      extensionMethod_enterReferencedLabels (var_b_18743, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 489)) ;
    }
    enumerator_18547.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedBraTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 504)) ;
  }
  cEnumerator_lstringlist enumerator_19317 (object->mProperty_mTargetLabels, kENUMERATION_UP) ;
  while (enumerator_19317.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19317.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 510)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 510)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19317.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 511)) ;
      GALGAS_uint var_blockIndex_19487 ;
      constinArgument_inSymbolTable.method_searchKey (enumerator_19317.current_mValue (HERE), var_blockIndex_19487, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 512)) ;
      GALGAS_ipic_31__38_Block var_b_19513 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19487, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 513)) ;
      extensionMethod_enterReferencedLabels (var_b_19513, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 514)) ;
    }
    enumerator_19317.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ComputedGotoTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@ipic18JumpTerminator enterTerminatorReferencedLabels'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                        const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mLabel.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 529)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 529)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 530)) ;
    GALGAS_uint var_blockIndex_20126 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mLabel, var_blockIndex_20126, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 531)) ;
    GALGAS_ipic_31__38_Block var_b_20150 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20126, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 532)) ;
    extensionMethod_enterReferencedLabels (var_b_20150, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 533)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_JumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                   const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                   GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mTargetLabelWhenTrue.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 547)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 547)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mTargetLabelWhenTrue.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 548)) ;
    GALGAS_uint var_blockIndex_20798 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenTrue, var_blockIndex_20798, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 549)) ;
    GALGAS_ipic_31__38_Block var_b_20822 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20798, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 550)) ;
    extensionMethod_enterReferencedLabels (var_b_20822, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 551)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 557)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 557)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mTargetLabelWhenFalse.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 558)) ;
    GALGAS_uint var_blockIndex_21180 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabelWhenFalse, var_blockIndex_21180, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 559)) ;
    GALGAS_ipic_31__38_Block var_b_21204 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21180, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 560)) ;
    extensionMethod_enterReferencedLabels (var_b_21204, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 561)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_ConditionalJumpTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                                     const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_SingleInstructionTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mProperty_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 583)) ;
  callExtensionMethod_enterTerminatorReferencedLabels ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mProperty_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 584)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (void) {
  enterExtensionMethod_enterTerminatorReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                        extensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels (defineExtensionMethod_ipic_31__38_AbstractConditionTerminator_enterTerminatorReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const enumGalgasBool test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (object->mProperty_mTargetLabel.getter_string (HERE) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 605)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 605)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioReferencedBlockSet.addAssign_operation (object->mProperty_mTargetLabel.getter_string (HERE)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 606)) ;
    GALGAS_uint var_blockIndex_23121 ;
    constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_blockIndex_23121, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 607)) ;
    GALGAS_ipic_31__38_Block var_b_23145 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23121, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 608)) ;
    extensionMethod_enterReferencedLabels (var_b_23145, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 609)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding extension method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  {
  routine_enterGoto_34_block (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 623)) ;
  }
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_23726 (object->mProperty_mTargetInstructions, kENUMERATION_UP) ;
  while (enumerator_23726.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_23726.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 629)) ;
    enumerator_23726.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                               const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                               const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                               GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callExtensionMethod_enterInstructionReferencedLabels ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 643)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (void) {
  enterExtensionMethod_enterInstructionReferencedLabels (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                         extensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels (defineExtensionMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_enterInstructionReferencedLabels, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@ipic18_intermediate_JSR optimizeInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                     const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                     GALGAS_bool & outArgument_outOptimizationDone,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                     GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = object ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_uint var_targetBlockIndex_25597 ;
  constinArgument_inSymbolTable.method_searchKey (object->mProperty_mTargetLabel, var_targetBlockIndex_25597, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 686)) ;
  GALGAS_ipic_31__38_Block var_targetBloc_25629 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_25597, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 687)) ;
  const enumGalgasBool test_1 = constinArgument_inOptimizeFlagStruct.getter_mRemoveEmptyRoutine (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 690)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 689)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 691)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 690)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_25629.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)).boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outOptimizationDone = GALGAS_bool (true) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to empty ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).add_operation (GALGAS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)) ;
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::constructor_new (object->mProperty_mInstructionLocation, GALGAS_pic_31__38_InstructionWithNoOperandKind::constructor_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 697))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 697)) ;
    outArgument_outNOPsubstitution = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoRETLWreplacedByMOVLW (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 701)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 702)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 701)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_25629.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 702)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_ipic_31__38_RetlwTerminator temp_3 ;
      if (var_targetBloc_25629.getter_mTerminator (HERE).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_25629.getter_mTerminator (HERE).ptr ())) {
          temp_3 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_25629.getter_mTerminator (HERE).ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_25629.getter_mTerminator (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 704)) ;
        }
      }
      GALGAS_ipic_31__38_RetlwTerminator var_t_26683 = temp_3 ;
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to RETLW ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)).add_operation (GALGAS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 708)) ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::constructor_new (object->mProperty_mInstructionLocation, GALGAS_literal_5F_instruction_5F_opcode::constructor_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 711)), var_t_26683.getter_mLiteralValue (SOURCE_FILE ("ipic18_optimize_block.galgas", 712))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoOneInstructionRoutineReplacedByInstruction (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 715)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 714)).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_25629.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 716)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 715)).operator_and (GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_25629.getter_mTerminator (HERE).ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 716)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outOptimizedInstruction = var_targetBloc_25629.getter_mInstructionList (HERE).getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 718)) ;
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to single instruction routine ").add_operation (object->mProperty_mTargetLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)).add_operation (GALGAS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 722)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                            extensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_JSR_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                  const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                  const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                  const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                                  GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                                  GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_28444 = GALGAS_ipic_31__38_SequentialInstructionList::constructor_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 741)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28482 (object->mProperty_mTargetInstructions, kENUMERATION_UP) ;
  while (enumerator_28482.hasCurrentObject ()) {
    GALGAS_bool var_opt_28499 = GALGAS_bool (false) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28482.current_mInstruction (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 ;
      if (enumerator_28482.current_mInstruction (HERE).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28482.current_mInstruction (HERE).ptr ())) {
          temp_1 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28482.current_mInstruction (HERE).ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28482.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 745)) ;
        }
      }
      GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_28604 = temp_1 ;
      GALGAS_uint var_targetBlockIndex_28729 ;
      constinArgument_inSymbolTable.method_searchKey (var_jsr_28604.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 746)), var_targetBlockIndex_28729, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 746)) ;
      GALGAS_ipic_31__38_Block var_targetBloc_28765 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_28729, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 747)) ;
      const enumGalgasBool test_2 = GALGAS_bool (NULL != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_28765.getter_mTerminator (HERE).ptr ())).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28765.getter_mAddress (HERE).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 749)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 748)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28765.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 751)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_opt_28499 = GALGAS_bool (true) ;
          outArgument_outOptimizationDone = GALGAS_bool (true) ;
          var_optimizedInstructionList_28444.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::constructor_new (var_jsr_28604.getter_mInstructionLocation (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 754)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_28604.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).add_operation (GALGAS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 756)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 757)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = constinArgument_inOptimizeFlagStruct.getter_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (HERE).operator_and (GALGAS_bool (kIsEqual, var_targetBloc_28765.getter_mInstructionList (HERE).getter_length (SOURCE_FILE ("ipic18_optimize_block.galgas", 759)).objectCompare (GALGAS_uint ((uint32_t) 1U))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 758)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_ipic_31__38_SequentialInstruction var_inst_29762 = var_targetBloc_28765.getter_mInstructionList (HERE).getter_mInstructionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)) ;
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_29762.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_opt_28499 = GALGAS_bool (true) ;
              outArgument_outOptimizationDone = GALGAS_bool (true) ;
              var_optimizedInstructionList_28444.addAssign_operation (var_inst_29762, GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 764)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 764)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_28604.getter_mTargetLabel (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).add_operation (GALGAS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 767)) ;
            }
          }
        }
      }
    }
    const enumGalgasBool test_6 = var_opt_28499.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 772)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_optimizedInstructionList_28444.addAssign_operation (enumerator_28482.current_mInstruction (HERE), GALGAS_uint::constructor_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 773)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 773)) ;
    }
    enumerator_28482.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::constructor_new (object->mProperty_mInstructionLocation, var_optimizedInstructionList_28444, object->mProperty_mUsesRCALL  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 777)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = object ;
    outArgument_outOptimizedInstruction = temp_8 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                            extensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                    const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                    const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                    const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                    GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                    GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_31388 ;
  GALGAS_bool joker_31394 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_31388, joker_31394, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 799)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::constructor_new (object->mProperty_mInstructionLocation, var_optimizedEmbeddedInstruction_31388, object->mProperty_mSkipIfSet, object->mProperty_mRegisterDescription, object->mProperty_mBitNumber  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 810)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@ipic18_skip_instruction_compare_register optimizeInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                            const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                            const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                            GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                            GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32429 ;
  GALGAS_bool joker_32435 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32429, joker_32435, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 834)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mProperty_mInstructionLocation, var_optimizedEmbeddedInstruction_32429, object->mProperty_mCompareInstruction, object->mProperty_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 845)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@ipic18_skip_instruction_FDA optimizeInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                            const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                            const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                            const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                            GALGAS_bool & outArgument_outOptimizationDone,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                            GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_33453 ;
  GALGAS_bool joker_33459 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mProperty_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_33453, joker_33459, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 868)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mProperty_mInstructionLocation, var_optimizedEmbeddedInstruction_33453, object->mProperty_mInstruction_5F_FDA_5F_base_5F_code, object->mProperty_mRegisterDescription, object->mProperty_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 879)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (void) {
  enterExtensionMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                            extensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (defineExtensionMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction, NULL) ;

