#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9728 (temp_0.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_9728.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_9728.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 330)) ;
    }
    enumerator_9728.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList??&'
//
//--------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                        const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GGS_stringset & ioArgument_ioUsedRoutines,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10100 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_10100.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_10100.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    enumerator_10100.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_pic_31__38__5F_computeUsedRoutines (const GGS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GGS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           const GGS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                           const GGS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                           const GGS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 356)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_10859 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
  while (enumerator_10859.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_10859.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 359)) ;
    }
    enumerator_10859.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11083 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, EnumerationOrder::up) ;
  while (enumerator_11083.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11083.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 367)) ;
    enumerator_11083.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11261 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_11261.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11261.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11261.gotoNextObject () ;
  }
  GGS_stringset var_s_11427 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).isValid ()) {
    uint32_t variant_11446 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).uintValue () ;
    bool loop_11446 = true ;
    while (loop_11446) {
      loop_11446 = GGS_bool (ComparisonKind::notEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11446) {
        loop_11446 = GGS_bool (ComparisonKind::notEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11446 && (0 == variant_11446)) {
        loop_11446 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
      }
      if (loop_11446) {
        variant_11446 -- ;
        var_s_11427 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11592 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
        while (enumerator_11592.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11592.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_11592.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 380)) ;
              }
            }
          }
          enumerator_11592.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList operand0 = GGS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                 inCompiler
                                                                                                                 COMMA_THERE) ;
  const GGS_pic_31__38_RoutineDefinitionList operand1 = GGS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                             inCompiler
                                                                                                             COMMA_THERE) ;
  const GGS_pic_31__38_MacroMap operand2 = GGS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GGS_routineDeclarationList operand3 = GGS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GGS_routineDeclarationList operand4 = GGS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1147 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1242 (temp_0.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_1242.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_1464 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_1242.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1464, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1147.addAssign_operation (enumerator_1242.current_mBlockName (HERE), var_instructionList_1464, enumerator_1242.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1242.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1242.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mStartBlockName (), var_inlinedBlockList_1147, temp_3.readProperty_mEndOfBlockInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                     const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                     const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                     GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_2286 ;
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2286, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_instructionList_2286, temp_2.readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                         const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                         const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                         GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_repeatedInstructionList_2951 ;
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2951, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GGS_pic_31__38_DoWhilePartList var_whilePartList_2985 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_3060 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_3060.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_3294 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_3060.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3294, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2985.addAssign_operation (enumerator_3060.current_mCondition (HERE), var_instructionList_3294, enumerator_3060.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_3060.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatedInstructionList_2951, temp_3.readProperty_mEndOfRepeatedInstructionList (), var_whilePartList_2985, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                      const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                      const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                      GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_4065 ;
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_4065, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  const GGS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mRegister (), var_instructionList_4065, temp_3.readProperty_mEndOfSaveBankInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                              const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                              const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                              GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_thenInstructionList_4756 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4756, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GGS_pic_31__38_InstructionList var_elseInstructionList_4964 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4964, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mIfCondition (), var_thenInstructionList_4756, var_elseInstructionList_4964, temp_4.readProperty_mEndOfElsePartLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                 const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                 const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                 GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_inlineDone_5591 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_JSR temp_1 = this ;
    const GGS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
    const GGS_pic_31__38_Instruction_5F_JSR temp_3 = this ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_luint var_requiredBank_5880 ;
      GGS_bool var_isNoReturn_5974 ;
      GGS_pic_31__38_InstructionList var_instructionList_6018 ;
      const GGS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GGS_luint joker_5899 ; // Joker input parameter
      GGS_bool joker_5931 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.readProperty_mTargetLabel (), var_requiredBank_5880, joker_5899, joker_5931, var_isNoReturn_5974, var_instructionList_6018, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isNoReturn_5974.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GGS_pic_31__38_Instruction_5F_JSR temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
          var_inlineDone_5591.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_5880.readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GGS_pic_31__38_Instruction_5F_JSR temp_9 = this ;
            ioArgument_ioInstructionList.addAssign_operation (GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (temp_9.readProperty_mInstructionLocation (), var_requiredBank_5880.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
          }
        }
        GGS_stringset var_currentlyInlinedRoutineSet_6343 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GGS_pic_31__38_Instruction_5F_JSR temp_10 = this ;
        var_currentlyInlinedRoutineSet_6343.addAssign_operation (temp_10.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
        cEnumerator_pic_31__38_InstructionList enumerator_6520 (var_instructionList_6018, EnumerationOrder::up) ;
        while (enumerator_6520.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_6520.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6343, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
          enumerator_6520.gotoNextObject () ;
        }
        var_inlineDone_5591 = GGS_bool (true) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    var_inlineDone_5591 = GGS_bool (false) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_inlineDone_5591.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_12 = this ;
      ioArgument_ioInstructionList.addAssign_operation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList????!'
//
//--------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                   const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GGS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_InstructionList enumerator_7278 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_7278.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_7278.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_7278.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                              const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                              GGS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                              GGS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7827 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7936 (ioArgument_ioInterruptDefinitionList, EnumerationOrder::up) ;
  while (enumerator_7936.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_8173 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_7936.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GGS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_8173, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7827.addAssign_operation (enumerator_7936.current_mInterruptName (HERE), enumerator_7936.current_mFastReturn (HERE), var_instructionList_8173, enumerator_7936.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7936.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7827 ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8409 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8555 (ioArgument_ioRoutineDefinitionList, EnumerationOrder::up) ;
  while (enumerator_8555.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_8788 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_8555.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GGS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8788, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_8409.addAssign_operation (enumerator_8555.current_mRoutineName (HERE), enumerator_8555.current_mRequiredBank (HERE), enumerator_8555.current_mReturnedBank (HERE), enumerator_8555.current_mPreservesBank (HERE), enumerator_8555.current_mIsNoReturn (HERE), var_instructionList_8788, enumerator_8555.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8555.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8409 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList?&?'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList_3F__26__3F_ (const GGS_string constinArgument_inTitle,
                                           GGS_string & ioArgument_ioListFileContents,
                                           const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1388 (constinArgument_inGeneratedBlockList, EnumerationOrder::up) ;
  GGS_uint index_1383 (uint32_t (0)) ;
  while (enumerator_1388.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1452 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1383.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1452 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1383.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1452 = GGS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1388.current_mBlock (HERE), var_nextBlockLabel_1452, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1388.gotoNextObject () ;
    index_1383.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                    const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                    const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                    const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                    GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                    const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                    GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_withNoOperand temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_withNoOperand temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mKind (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6663 ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_1 = this ;
  GGS_bitSliceTable joker_6691 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6663, joker_6691, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6663, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                         const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7596 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_0 = this ;
  GGS_bitSliceTable joker_7624 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_7596, joker_7624, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7696 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_1 = this ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GGS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7696.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_pic_31__38_Instruction_5F_FA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_code_7696, var_IPICregisterDescription_7596, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_8989 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_sourceIPICregisterDescription_8989, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9254 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_1 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_destinationIPICregisterDescription_9254, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_2 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_8989, var_destinationIPICregisterDescription_9254, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10148 ;
  GGS_bitSliceTable var_bitSliceTable_10196 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_10148, var_bitSliceTable_10196, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GGS_uint var_bitNumber_10364 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10196, var_bitNumber_10364, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10148, var_bitNumber_10364, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                       const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                                       GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                       const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                       GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_11095 ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11095, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_11095.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_11095.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_11095.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GGS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_5 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11095.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_12023 ;
  const GGS_pic_31__38_Instruction_5F_fnop temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12023, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_12023.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_12023.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_fnop temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_12023.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_fnop temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), var_result_12023.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_LFSR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFSRindex ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_2 = this ;
      const GGS_pic_31__38_Instruction_5F_LFSR temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFSRindex ().readProperty_location (), GGS_string ("the LFSR register idx (").add_operation (temp_3.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GGS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
    }
  }
  GGS_sint_36__34_ var_result_13056 ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_5 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13056, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_result_13056.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_13056.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_13056.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LFSR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_10 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13056.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                          const GGS_routineMap constinArgument_inRoutineMap,
                                                                          const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                          GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_13936 ;
  GGS_uint var_requiredBank_13958 ;
  GGS_uint var_returnedBank_13982 ;
  GGS_bool var_preservesBank_14006 ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_13936, var_requiredBank_13958, var_returnedBank_13982, var_preservesBank_14006, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_13958.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_13958.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_14110 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (var_requiredBank_13958.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
      var_errorMessage_14110.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_14110.plusAssign_operation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_14110.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_14110, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_13936.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_14006.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_13982 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_pic_31__38_Instruction_5F_JSR temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_JSR temp_13 = this ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_15 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), temp_14.readProperty_mTargetLabel (), temp_15.readProperty_mKind (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GGS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                               const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_checkbank temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_checkbank temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_pic_31__38_Instruction_5F_checkbank temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_checkbank temp_8 = this ;
        test_7 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GGS_pic_31__38_Instruction_5F_checkbank temp_9 = this ;
          const GGS_pic_31__38_Instruction_5F_checkbank temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GGS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                 GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                 const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                 const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                 const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                 GGS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                 GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                 GGS_uint & ioArgument_ioCurrentBank,
                                                                 const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_checknobank temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)).add_operation (GGS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 484)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18PiccoloSimpleInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloSimpleInstruction::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GGS_routineMap constinArgument_inRoutineMap,
                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                               const GGS_bool constinArgument_inShouldPreserveBSR,
                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction var_instruction_18737 ;
  const GGS_pic_31__38_PiccoloSimpleInstruction temp_0 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18737, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 506)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18737, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                             GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                             const GGS_routineMap constinArgument_inRoutineMap,
                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                             const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                             const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                             GGS_uint & ioArgument_ioLocalLabelIndex,
                                                             GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GGS_lstring & ioArgument_ioBlockLabel,
                                                             GGS_string & ioArgument_ioListFileContents,
                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                             const GGS_bool constinArgument_inShouldPreserveBSR,
                                                             const GGS_routineKind constinArgument_inRoutineKind,
                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 540)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
    }
    break ;
  }
  GGS_uint var_finalBank_19766 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_4 = this ;
  GGS_lstring var_loopLabel_19818 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_5 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 551)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_loopLabel_19818, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_loopLabel_19818 ;
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_6 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_6.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 561)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfInstructionList (), GGS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GGS_pic_31__38_Instruction_5F_FOREVER temp_10 = this ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_loopLabel_19818, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19766)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfInstructionList (), GGS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 594)) ;
    }
  }
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 597)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GGS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                               const GGS_bool constinArgument_inShouldPreserveBSR,
                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_nobanksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
    }
  }
  ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 621)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                              GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                              const GGS_routineMap constinArgument_inRoutineMap,
                                                              const GGS_registerTable constinArgument_inRegisterTable,
                                                              const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                              const GGS_constantMap constinArgument_inConstantMap,
                                                              const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                              GGS_uint & ioArgument_ioLocalLabelIndex,
                                                              GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                              GGS_lstring & ioArgument_ioBlockLabel,
                                                              GGS_string & ioArgument_ioListFileContents,
                                                              GGS_uint & ioArgument_ioCurrentBank,
                                                              const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                              const GGS_routineKind constinArgument_inRoutineKind,
                                                              GGS_stringset & ioArgument_ioUsedRegisters,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerExpression var_BSRregister_23065 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23370 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) var_BSRregister_23065.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_BSR_5F_IPICregisterDescription_23370, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23663 ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_save_5F_IPICregisterDescription_23663, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23370, var_save_5F_IPICregisterDescription_23663, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GGS_uint var_finalBank_24008 = ioArgument_ioCurrentBank ;
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24008, GGS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_savebank temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfSaveBankInstruction (), GGS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 694)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_savebank temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_23663, var_BSR_5F_IPICregisterDescription_23370, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                        GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                        const GGS_routineMap constinArgument_inRoutineMap,
                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                        const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                        const GGS_constantMap constinArgument_inConstantMap,
                                                                        const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                        GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                        GGS_lstring & ioArgument_ioBlockLabel,
                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                        GGS_uint & ioArgument_ioCurrentBank,
                                                                        const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                        const GGS_routineKind constinArgument_inRoutineKind,
                                                                        GGS_stringset & ioArgument_ioUsedRegisters,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_lowerBound_25607 ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25607, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GGS_sint_36__34_ var_upperBound_25717 ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25717, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_25607.objectCompare (var_upperBound_25717)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_25607.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25717.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_25717.substract_operation (var_lowerBound_25607, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GGS_sint_36__34_ (int64_t (16777215LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_25717.substract_operation (var_lowerBound_25607, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GGS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
      }
    }
  }
  GGS_uint var_finalBank_26156 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_26188 = constinArgument_inConstantMap ;
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = this ;
  var_tempConstantMap_26188.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_25607, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26188, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26156, GGS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, var_finalBank_26156.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
    }
  }
  GGS_sint_36__34_ var_idx_27018 = var_lowerBound_25607.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25717.substract_operation (var_lowerBound_25607, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_27041 = var_upperBound_25717.substract_operation (var_lowerBound_25607, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_27041 = true ;
    while (loop_27041) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_27018.objectCompare (var_upperBound_25717)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_27041 = test_16.isValid () ;
      if (loop_27041) {
        loop_27041 = test_16.boolValue () ;
      }
      if (loop_27041 && (0 == variant_27041)) {
        loop_27041 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_27041) {
        variant_27041 -- ;
        GGS_constantMap var_constantMap_27147 = constinArgument_inConstantMap ;
        {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = this ;
        var_constantMap_27147.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27018, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = this ;
        routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27147, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GGS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_27018.plusAssign_operation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                             GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                             const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GGS_constantMap /* constinArgument_inConstantMap */,
                                                             const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GGS_string & /* ioArgument_ioListFileContents */,
                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                             const GGS_bool constinArgument_inShouldPreserveBSR,
                                                             const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                             GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 807)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_pic_31__38_Instruction_5F_banksel temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBankIndex ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mBankIndex ().readProperty_location (), GGS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_8 = this ;
      test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_banksel temp_9 = this ;
        ioArgument_ioCurrentBank = temp_9.readProperty_mBankIndex ().readProperty_uint () ;
        const GGS_pic_31__38_Instruction_5F_banksel temp_10 = this ;
        const GGS_pic_31__38_Instruction_5F_banksel temp_11 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mBankIndex (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GGS_pic_31__38_Instruction_5F_banksel temp_13 = this ;
        test_12 = temp_13.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_12) {
          const GGS_pic_31__38_Instruction_5F_banksel temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (temp_14.readProperty_mBankIndex ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                         const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                         const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
    }
  }
  GGS_uint var_registerAddress_30126 ;
  const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = this ;
  callExtensionMethod_getRegisterAddress ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30126, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GGS_uint var_newBank_30247 = var_registerAddress_30126.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30247)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30247 ;
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = this ;
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GGS_luint::init_21__21_ (var_newBank_30247, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_8 = this ;
      test_7 = temp_8.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
      if (kBoolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (var_newBank_30247.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_TBLRD temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_TBLRD temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_TBLWT temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_TBLWT temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                          const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GGS_constantMap /* constinArgument_inConstantMap */,
                                                          const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                          GGS_uint & /* ioArgument_ioCurrentBank */,
                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                          GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_MNOP temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                            const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                            GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_NOPBRA temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_NOPBRA temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_NOPBRA temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 958)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                             GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                             const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                             const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GGS_string & /* ioArgument_ioListFileContents */,
                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                             const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                             const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_34740 ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34740, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_34740.objectCompare (GGS_sint_36__34_ (int64_t (16777215LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_34740.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_34740.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GGS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
    }
  }
  GGS_uint var_address_34965 = var_result_34740.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = this ;
  GGS_registerExpression var_TBLPTRU_35011 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35348 ;
  GGS_bitSliceTable joker_35379 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_35011.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35348, joker_35379, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GGS_uint var_upper_35420 = var_address_34965.right_shift_operation (GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_upper_35420.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::equal, var_upper_35420.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_35420, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = this ;
  GGS_registerExpression var_TBLPTRH_36388 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_36712 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_36388.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35348, joker_36712, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GGS_uint var_high_36753 = var_address_34965.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_high_36753.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  if (kBoolFalse == test_12) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, var_high_36753.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
      }
    }
    if (kBoolFalse == test_14) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36753, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_37724 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_38047 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_37724.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35348, joker_38047, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GGS_uint var_low_38088 = var_address_34965.operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_low_38088.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, var_low_38088.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
      }
    }
    if (kBoolFalse == test_21) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_38088, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_24.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_35348, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                      const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                      const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                      const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                      GGS_string & /* ioArgument_ioListFileContents */,
                                                                      GGS_uint & ioArgument_ioCurrentBank,
                                                                      const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_data_39771 ;
  GGS_bool var_isData_38__39781 ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_39771, var_isData_38__39781, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__39781.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GGS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = this ;
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_39771.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GGS_string ("index should be < ").add_operation (var_data_39771.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = this ;
  GGS_registerExpression var_TBLPTRU_40039 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40376 ;
  GGS_bitSliceTable joker_40407 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_40039.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40376, joker_40407, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)), GGS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)), var_outIPICregisterDescription_40376, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1191)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = this ;
  GGS_registerExpression var_TBLPTRH_40843 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_41166 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_40843.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40376, joker_41166, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GGS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_40376, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_41600 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_41924 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_41600.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40376, joker_41924, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1230)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)), var_outIPICregisterDescription_40376, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                  const GGS_registerTable constinArgument_inRegisterTable,
                                                                  const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GGS_constantMap constinArgument_inConstantMap,
                                                                  const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_uint & ioArgument_ioCurrentBank,
                                                                  const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                  const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GGS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_data_43080 ;
  GGS_bool var_isData_38__43090 ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_43080, var_isData_38__43090, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__43090.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GGS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = this ;
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_43080.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GGS_string ("index should be < ").add_operation (var_data_43080.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = this ;
  GGS_registerExpression var_TBLPTRU_43372 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_43709 ;
  GGS_bitSliceTable joker_43740 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_43372.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_43709, joker_43740, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1290)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)), var_outIPICregisterDescription_43709, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = this ;
  GGS_registerExpression var_TBLPTRH_44172 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_44495 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_44172.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_43709, joker_44495, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), var_outIPICregisterDescription_43709, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_44925 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_45249 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_44925.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_43709, joker_45249, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), var_outIPICregisterDescription_43709, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                          const GGS_routineMap constinArgument_inRoutineMap,
                                                          const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GGS_constantMap /* constinArgument_inConstantMap */,
                                                          const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GGS_lstring & ioArgument_ioBlockLabel,
                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                          GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_46435 ;
  GGS_uint var_requiredBank_46457 ;
  const GGS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_46470 ; // Joker input parameter
  GGS_bool joker_46473 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_46435, var_requiredBank_46457, joker_46470, joker_46473, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_46457.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_46457.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_46566 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (var_requiredBank_46457.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
      var_errorMessage_46566.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_46566.plusAssign_operation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_46566.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JUMP temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_46566, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_46435.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JUMP temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_JUMP temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1418)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                       const GGS_routineMap constinArgument_inRoutineMap,
                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                       const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                       GGS_uint & ioArgument_ioCurrentBank,
                                                                       const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                       const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_someReturnsBank_48173 = GGS_bool (false) ;
  GGS_uint var_returnedBankSelection_48209 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_lstringlist enumerator_48254 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_48254.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_48335 ;
    GGS_uint var_requiredBank_48357 ;
    GGS_uint var_returnedBank_48381 ;
    GGS_bool var_preservesBank_48405 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48254.current_mValue (HERE), var_isNoReturn_48335, var_requiredBank_48357, var_returnedBank_48381, var_preservesBank_48405, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_48357.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_48357.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GGS_string var_errorMessage_48513 = GGS_string ("the routine '").add_operation (enumerator_48254.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (var_requiredBank_48357.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)) ;
        var_errorMessage_48513.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1452)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_48513.plusAssign_operation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_48513.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_48254.current_mValue (HERE).readProperty_location (), var_errorMessage_48513, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isNoReturn_48335.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_48254.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed rcall, the '").add_operation (enumerator_48254.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)).add_operation (GGS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)) ;
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_48405.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_48254.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_48254.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).add_operation (GGS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).operator_and (var_preservesBank_48405.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).boolEnum () ;
        if (kBoolTrue == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_someReturnsBank_48173.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_returnedBankSelection_48209 = var_returnedBank_48381 ;
              var_someReturnsBank_48173 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::notEqual, var_returnedBankSelection_48209.objectCompare (var_returnedBank_48381)).boolEnum () ;
              if (kBoolTrue == test_10) {
                GGS_string var_errorMessage_49427 = GGS_string ("the '").add_operation (enumerator_48254.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)).add_operation (GGS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)) ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GGS_bool (ComparisonKind::equal, var_returnedBank_48381.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    var_errorMessage_49427.plusAssign_operation(GGS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)) ;
                  }
                }
                if (kBoolFalse == test_11) {
                  var_errorMessage_49427.plusAssign_operation(GGS_string ("bank selection set to  ").add_operation (var_returnedBank_48381.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) ;
                }
                var_errorMessage_49427.plusAssign_operation(GGS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1475)) ;
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_returnedBankSelection_48209.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    var_errorMessage_49427.plusAssign_operation(GGS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  var_errorMessage_49427.plusAssign_operation(GGS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_48209.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)) ;
                }
                TC_Array <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_48254.current_mValue (HERE).readProperty_location (), var_errorMessage_49427, fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).operator_and (var_preservesBank_48405 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).boolEnum () ;
          if (kBoolTrue == test_14) {
          }
        }
      }
    }
    enumerator_48254.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_48209 ;
  GGS_sint_36__34_ var_size_50181 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_15 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_50181, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::lowerThan, var_size_50181.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_17 = this ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_50181.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)) ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::greaterThan, var_size_50181.objectCompare (GGS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_20 = this ;
        TC_Array <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_50181.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (GGS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)) ;
      }
    }
    if (kBoolFalse == test_19) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::notEqual, var_size_50181.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)).objectCompare (temp_23.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_24 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_25 = this ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_25.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (var_size_50181.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), fixItArray26  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)) ;
        }
      }
    }
  }
  GGS_ipic_31__38_SequentialInstructionList var_targetInstructionList_50719 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_27 = this ;
  cEnumerator_lstringlist enumerator_50785 (temp_27.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_50785.hasCurrentObject ()) {
    var_targetInstructionList_50719.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (enumerator_50785.current_mValue (HERE).readProperty_location (), enumerator_50785.current_mValue (HERE), GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)) ;
    enumerator_50785.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_28 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_29 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetInstructionList_50719, temp_29.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1509)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GGS_routineMap constinArgument_inRoutineMap,
                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                      const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                      const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GGS_lstring & ioArgument_ioBlockLabel,
                                                                      GGS_string & /* ioArgument_ioListFileContents */,
                                                                      GGS_uint & ioArgument_ioCurrentBank,
                                                                      const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GGS_routineKind constinArgument_inRoutineKind,
                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  cEnumerator_lstringlist enumerator_51844 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_51844.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_51925 ;
    GGS_uint var_requiredBank_51947 ;
    GGS_uint joker_51960 ; // Joker input parameter
    GGS_bool joker_51963 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_51844.current_mValue (HERE), var_isNoReturn_51925, var_requiredBank_51947, joker_51960, joker_51963, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_51947.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_51947.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GGS_string var_errorMessage_52060 = GGS_string ("the routine '").add_operation (enumerator_51844.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (var_requiredBank_51947.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)) ;
        var_errorMessage_52060.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1537)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_52060.plusAssign_operation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_52060.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_51844.current_mValue (HERE).readProperty_location (), var_errorMessage_52060, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_51925.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_51844.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed goto, the '").add_operation (enumerator_51844.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).add_operation (GGS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) ;
      }
    }
    enumerator_51844.gotoNextObject () ;
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1552)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_52940 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_8 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_8.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_52940, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::lowerThan, var_size_52940.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_52940.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)) ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::greaterThan, var_size_52940.objectCompare (GGS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_13 = this ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_52940.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (GGS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, var_size_52940.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).objectCompare (temp_16.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_17 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_18 = this ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_18.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (var_size_52940.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_21 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_22 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), temp_21.readProperty_mTargetLabels (), temp_22.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1572)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1577)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     const GGS_routineMap constinArgument_inRoutineMap,
                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                     GGS_uint & ioArgument_ioCurrentBank,
                                                                     const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                     const GGS_routineKind constinArgument_inRoutineKind,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_allPreserveBankSetting_54568 = GGS_bool (true) ;
  GGS_bool var_allReturnBank_54610 = GGS_bool (true) ;
  GGS_uint var_returnedBankValue_54637 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  cEnumerator_lstringlist enumerator_54673 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_54673.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_54754 ;
    GGS_uint var_requiredBank_54776 ;
    GGS_uint var_returnedBank_54800 ;
    GGS_bool var_preservesBank_54824 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_54673.current_mValue (HERE), var_isNoReturn_54754, var_requiredBank_54776, var_returnedBank_54800, var_preservesBank_54824, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_54776.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_54776.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GGS_string var_errorMessage_54961 = GGS_string ("the routine '").add_operation (enumerator_54673.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (var_requiredBank_54776.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
        var_errorMessage_54961.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_54961.plusAssign_operation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_54961.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)) ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_54673.current_mValue (HERE).readProperty_location (), var_errorMessage_54961, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1613)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_preservesBank_54824.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_allReturnBank_54610 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::notEqual, var_returnedBankValue_54637.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_returnedBankValue_54637.objectCompare (var_returnedBank_54800)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_54673.current_mValue (HERE).readProperty_location (), GGS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_54800.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GGS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GGS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (var_returnedBankValue_54637.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GGS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
        }
      }
      if (kBoolFalse == test_5) {
        var_allPreserveBankSetting_54568 = GGS_bool (false) ;
        var_returnedBankValue_54637 = var_returnedBank_54800 ;
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_54754.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_54673.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_54673.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).add_operation (GGS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)) ;
      }
    }
    enumerator_54673.gotoNextObject () ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_allReturnBank_54610.operator_and (var_allPreserveBankSetting_54568.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBankValue_54637 ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_allReturnBank_54610.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).operator_and (var_allPreserveBankSetting_54568.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_54568.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) ;
    }
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_16 = this ;
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1643)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_56777 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_18 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_18.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_56777, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::lowerThan, var_size_56777.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_56777.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::greaterThan, var_size_56777.objectCompare (GGS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_23 = this ;
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_56777.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (GGS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)) ;
      }
    }
    if (kBoolFalse == test_22) {
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_26 = this ;
        test_25 = GGS_bool (ComparisonKind::notEqual, var_size_56777.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)).objectCompare (temp_26.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)))).boolEnum () ;
        if (kBoolTrue == test_25) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_27 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_28 = this ;
          TC_Array <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_28.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (var_size_56777.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), fixItArray29  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_30 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_31 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_32 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mTargetLabels (), temp_32.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1663)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1655)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1668)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                       const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                       const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GGS_lstring & ioArgument_ioBlockLabel,
                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                       GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                       const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                       const GGS_routineKind constinArgument_inRoutineKind,
                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_0 = this ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1692)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_58806 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_58806, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::lowerThan, var_size_58806.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_58806.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::greaterThan, var_size_58806.objectCompare (GGS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_58806.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (GGS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_12 = this ;
        test_11 = GGS_bool (ComparisonKind::notEqual, var_size_58806.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)).objectCompare (temp_12.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_13 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("the constant list length (").add_operation (temp_14.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (var_size_58806.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)) ;
        }
      }
    }
  }
  GGS_uintlist var_literalValues_59365 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_16 = this ;
  cEnumerator_immediatExpressionList enumerator_59412 (temp_16.readProperty_mImmediateExpressionList (), EnumerationOrder::up) ;
  GGS_uint index_59395 (uint32_t (0)) ;
  while (enumerator_59412.hasCurrentObject ()) {
    GGS_sint_36__34_ var_v_59524 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_59412.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_59524, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::greaterThan, var_v_59524.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_v_59524.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("immediate value with idx ").add_operation (index_59395.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GGS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (var_v_59524.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GGS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)) ;
      }
    }
    var_literalValues_59365.addAssign_operation (var_v_59524.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)) ;
    enumerator_59412.gotoNextObject () ;
    index_59395.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_21 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), var_literalValues_59365, temp_21.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1723)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1715)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1728)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GGS_routineMap constinArgument_inRoutineMap,
                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                            const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                            GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GGS_lstring & ioArgument_ioBlockLabel,
                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_60937 ;
  GGS_uint var_requiredBank_60959 ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  GGS_uint joker_60972 ; // Joker input parameter
  GGS_bool joker_60975 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_60937, var_requiredBank_60959, joker_60972, joker_60975, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_60959.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_60959.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_2 = this ;
      GGS_string var_errorMessage_61068 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (var_requiredBank_60959.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)) ;
      var_errorMessage_61068.plusAssign_operation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_61068.plusAssign_operation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_61068.plusAssign_operation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_61068, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_60937.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1760)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)) ;
    }
  }
  GGS_conditionalBranchMode var_mode_61602 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GGS_pic_31__38_Instruction_5F_JUMPCC temp_10 = this ;
    test_9 = temp_10.readProperty_mIsBcc ().boolEnum () ;
    if (kBoolTrue == test_9) {
      var_mode_61602 = GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1766)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_mode_61602 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1768)) ;
  }
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_11 = this ;
  GGS_lstring var_label_30__61768 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_12 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_13 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_14 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mConditionalBranch (), temp_14.readProperty_mTargetLabel (), var_mode_61602, var_label_30__61768, var_mode_61602, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1785)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1774)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_label_30__61768 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                   GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                   const GGS_routineMap constinArgument_inRoutineMap,
                                                                   const GGS_registerTable constinArgument_inRegisterTable,
                                                                   const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                   const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                   GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                   GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                   const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                   const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_63250 ;
  GGS_bitSliceTable var_bitSliceTable_63298 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_63250, var_bitSliceTable_63298, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1812)) ;
  GGS_uint var_bitNumber_63466 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_63298, var_bitNumber_63466, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1822)) ;
  GGS_uint var_currentBank_63526 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_63813 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_63526, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_63813, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1831)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, var_currentBank_63526.objectCompare (var_currentBank_63526)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1844)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_6 = this ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_63813, temp_7.readProperty_mSkipIfSet (), var_IPICregisterDescription_63250, var_bitNumber_63466, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1854)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                               const GGS_routineMap constinArgument_inRoutineMap,
                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                               const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                                               const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_65005 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  switch (temp_0.readProperty_mOpCode ().enumValue ()) {
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::invalid:
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSEQ:
    {
      var_baseCode_65005 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSGT:
    {
      var_baseCode_65005 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSLT:
    {
      var_baseCode_65005 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1880)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_TSTFSZ:
    {
      var_baseCode_65005 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
    }
    break ;
  }
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_65592 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_1 = this ;
  GGS_bitSliceTable joker_65620 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_1.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_65592, joker_65620, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1883)) ;
  GGS_uint var_currentBank_65695 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_65982 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_65695, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_65982, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1895)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, var_currentBank_65695.objectCompare (var_currentBank_65695)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_65982, var_baseCode_65005, var_IPICregisterDescription_65592, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GGS_routineMap constinArgument_inRoutineMap,
                                                                  const GGS_registerTable constinArgument_inRegisterTable,
                                                                  const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GGS_constantMap constinArgument_inConstantMap,
                                                                  const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_uint & ioArgument_ioCurrentBank,
                                                                  const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                  const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GGS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_67140 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_1 = this ;
    const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_2 = this ;
    test_0 = temp_1.readProperty_mIncrement ().operator_and (temp_2.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_67140 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_4 = this ;
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_5 = this ;
      test_3 = temp_4.readProperty_mIncrement ().operator_and (temp_5.readProperty_mSkipIfZero ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_baseCode_67140 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_7 = this ;
        const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_8 = this ;
        test_6 = temp_7.readProperty_mIncrement ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).operator_and (temp_8.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_baseCode_67140 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)) ;
        }
      }
      if (kBoolFalse == test_6) {
        var_baseCode_67140 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)) ;
      }
    }
  }
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_67751 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_9 = this ;
  GGS_bitSliceTable joker_67779 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_9.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_67751, joker_67779, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1951)) ;
  GGS_uint var_currentBank_67854 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_68141 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_10 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_10.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_67854, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_68141, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_currentBank_67854.objectCompare (var_currentBank_67854)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_15 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_embeddedInstruction_68141, var_baseCode_67140, var_IPICregisterDescription_67751, temp_15.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1979)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GGS_routineMap constinArgument_inRoutineMap,
                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                      const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                      const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GGS_lstring & ioArgument_ioBlockLabel,
                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                      GGS_uint & ioArgument_ioCurrentBank,
                                                                      const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                      const GGS_routineKind constinArgument_inRoutineKind,
                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_elseBranchFinalBank_69269 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_69317 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  GGS_lstring var_conditionTrueLabel_69371 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  GGS_lstring var_conditionFalseLabel_69498 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  GGS_lstring var_exitLabel_69626 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_testTerminator_70050 ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_3.readProperty_mIfCondition ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_69371, var_conditionFalseLabel_69498, ioArgument_ioUsedRegisters, var_testTerminator_70050, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2019)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2033)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_70050, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2037)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_69371 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_4.readProperty_mThenInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_69317, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2043)) ;
  }
  GGS_bool var_thenContinuesInSequence_70819 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_thenContinuesInSequence_70819.boolEnum () ;
    if (kBoolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_exitLabel_69626, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2063)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_69498 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_7 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_7.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_69269, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
  }
  GGS_bool var_elseContinuesInSequence_71712 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_elseContinuesInSequence_71712.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_9 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_exitLabel_69626, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_69269.objectCompare (var_thenBranchFinalBank_69317)).boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_69269 ;
    }
  }
  if (kBoolFalse == test_10) {
    const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_11 = this ;
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (temp_11.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2109)) ;
    var_elseBranchFinalBank_69269 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2110)) ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_70819.operator_or (var_elseContinuesInSequence_71712 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2113)).boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioBlockLabel = var_exitLabel_69626 ;
    }
  }
  if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_macro analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                           GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                           const GGS_routineMap constinArgument_inRoutineMap,
                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                           GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_lstring & ioArgument_ioBlockLabel,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           GGS_uint & ioArgument_ioCurrentBank,
                                                           const GGS_bool constinArgument_inShouldPreserveBSR,
                                                           const GGS_routineKind constinArgument_inRoutineKind,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist var_constantNameList_73239 ;
  GGS_pic_31__38_InstructionList var_instructionList_73261 ;
  const GGS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), var_constantNameList_73239, var_instructionList_73261, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_pic_31__38_Instruction_5F_macro temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)).objectCompare (var_constantNameList_73239.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_macro temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), var_constantNameList_73239.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).add_operation (GGS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)) ;
    }
  }
  GGS_constantMap var_constantMap_73472 = constinArgument_inConstantMap ;
  const GGS_pic_31__38_Instruction_5F_macro temp_5 = this ;
  cEnumerator_immediatExpressionList enumerator_73519 (temp_5.readProperty_mExpressionList (), EnumerationOrder::up) ;
  cEnumerator_lstringlist enumerator_73548 (var_constantNameList_73239, EnumerationOrder::up) ;
  while (enumerator_73519.hasCurrentObject () && enumerator_73548.hasCurrentObject ()) {
    GGS_sint_36__34_ var_expressionValue_73650 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_73519.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_73472, var_expressionValue_73650, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)) ;
    {
    var_constantMap_73472.setter_insertKey (enumerator_73548.current_mValue (HERE), var_expressionValue_73650, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    }
    enumerator_73519.gotoNextObject () ;
    enumerator_73548.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_73261, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_73472, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                 GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                 const GGS_routineMap constinArgument_inRoutineMap,
                                                                 const GGS_registerTable constinArgument_inRegisterTable,
                                                                 const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                 const GGS_constantMap constinArgument_inConstantMap,
                                                                 const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                 GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                 GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_lstring & ioArgument_ioBlockLabel,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_uint & ioArgument_ioCurrentBank,
                                                                 const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                 const GGS_routineKind constinArgument_inRoutineKind,
                                                                 GGS_stringset & ioArgument_ioUsedRegisters,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  GGS_lstring var_startLabel_74839 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2190)) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2193)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_startLabel_74839, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2196)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2192)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_startLabel_74839 ;
  GGS_uint var_repeatedBranchFinalBank_75367 = ioArgument_ioCurrentBank ;
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mRepeatedInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_75367, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2204)) ;
  }
  GGS_bool var_repeatedInstructionsContinuesInSequence_75827 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_75367)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_do_5F_while temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_repeatedInstructionsContinuesInSequence_75827.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2226)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_do_5F_while temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch makes the next code unreachable"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2227)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_9 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_76263 (temp_9.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_76263.hasCurrentObject ()) {
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_10 = this ;
    GGS_lstring var_conditionTrueLabel_76332 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2233)) ;
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_11 = this ;
    GGS_lstring var_conditionFalseLabel_76462 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)) ;
    GGS_ipic_31__38_AbstractBlockTerminator var_testTerminator_76914 ;
    callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) enumerator_76263.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_76332, var_conditionFalseLabel_76462, ioArgument_ioUsedRegisters, var_testTerminator_76914, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2237)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2250)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_76914, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2254)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2249)) ;
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_76332 ;
    GGS_uint var_branchFinalBank_77240 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_76263.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_77240, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2260)) ;
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_77240)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_76263.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_76263.current_mEndOfPartLocation (HERE), GGS_string ("This branch makes the next code unreachable"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2282)) ;
      }
    }
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_16 = this ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2285)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), var_startLabel_74839, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)) ;
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_76462 ;
    enumerator_76263.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::method_addVisitedBlocks (GGS_stringset & /* ioArgument_ioVisitedBlockSet */,
                                                                            const GGS_blockInstructionBlockMap /* constinArgument_inBlockMap */,
                                                                            const GGS_string constinArgument_inCurrentBlockName,
                                                                            const GGS_uint constinArgument_inInitialBlockSetting,
                                                                            GGS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                            GGS_bool & ioArgument_ioContinuesInSequence,
                                                                            GGS_bool & /* ioArgument_ioContinueAccessibilityExploration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioContinuesInSequence = GGS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GGS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2342)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_uint var_otherInitialBlockSetting_80196 ;
      GGS_string var_otherBlockName_80234 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)), var_otherInitialBlockSetting_80196, var_otherBlockName_80234, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_80196.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GGS_exitBlockTerminationForBlockInstruction temp_2 = this ;
          GGS_string temp_3 ;
          const enumGalgasBool test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GGS_string ("no bank") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)) ;
          }
          GGS_string temp_5 ;
          const enumGalgasBool test_6 = GGS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_80196.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            temp_5 = GGS_string ("no bank") ;
          }else if (kBoolFalse == test_6) {
            temp_5 = var_otherInitialBlockSetting_80196.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)) ;
          }
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)).add_operation (GGS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)).add_operation (var_otherBlockName_80234, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (GGS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (GGS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::method_addVisitedBlocks (GGS_stringset & ioArgument_ioVisitedBlockSet,
                                                                       const GGS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                       const GGS_string constinArgument_inCurrentBlockName,
                                                                       const GGS_uint constinArgument_inInitialBlockSetting,
                                                                       GGS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                       GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                       GGS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_gotoTerminationForBlockInstruction temp_1 = this ;
    test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (temp_1.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2366)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2366)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_gotoTerminationForBlockInstruction temp_2 = this ;
      ioArgument_ioVisitedBlockSet.addAssign_operation (temp_2.readProperty_mNextBlock ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)) ;
      ioArgument_ioContinueAccessibilityExploration = GGS_bool (true) ;
      const GGS_gotoTerminationForBlockInstruction temp_3 = this ;
      GGS_pic_31__38_InstructionList joker_81510 ; // Joker input parameter
      GGS_abstractBlockTerminationForBlockInstruction joker_81513 ; // Joker input parameter
      GGS_location joker_81516 ; // Joker input parameter
      constinArgument_inBlockMap.method_searchKey (temp_3.readProperty_mNextBlock (), joker_81510, joker_81513, joker_81516, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2369)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GGS_gotoTerminationForBlockInstruction temp_5 = this ;
        test_4 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (temp_5.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GGS_uint var_otherInitialBlockSetting_81672 ;
          GGS_string var_otherBlockName_81710 ;
          const GGS_gotoTerminationForBlockInstruction temp_6 = this ;
          ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (temp_6.readProperty_mNextBlock (), var_otherInitialBlockSetting_81672, var_otherBlockName_81710, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_81672.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
            if (kBoolTrue == test_7) {
              const GGS_gotoTerminationForBlockInstruction temp_8 = this ;
              const GGS_gotoTerminationForBlockInstruction temp_9 = this ;
              GGS_string temp_10 ;
              const enumGalgasBool test_11 = GGS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GGS_string ("no bank") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)) ;
              }
              GGS_string temp_12 ;
              const enumGalgasBool test_13 = GGS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_81672.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                temp_12 = GGS_string ("no bank") ;
              }else if (kBoolFalse == test_13) {
                temp_12 = var_otherInitialBlockSetting_81672.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)) ;
              }
              TC_Array <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mNextBlock ().readProperty_location (), GGS_string ("this block goes to '").add_operation (temp_9.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GGS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GGS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)).add_operation (var_otherBlockName_81710, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (GGS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (GGS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        {
        const GGS_gotoTerminationForBlockInstruction temp_15 = this ;
        ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (temp_15.readProperty_mNextBlock (), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2380)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::method_addVisitedBlocks (GGS_stringset & ioArgument_ioVisitedBlockSet,
                                                                       const GGS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                       const GGS_string constinArgument_inCurrentBlockName,
                                                                       const GGS_uint constinArgument_inInitialBlockSetting,
                                                                       GGS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                       GGS_bool & ioArgument_ioContinuesInSequence,
                                                                       GGS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testTerminationForBlockInstruction temp_0 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_0.readProperty_mTrueTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2395)) ;
  const GGS_testTerminationForBlockInstruction temp_1 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_1.readProperty_mFalseTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2404)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::method_generateBlock (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                    const GGS_uint /* constinArgument_inCurrentBank */,
                                                                    const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                    GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                    const GGS_string constinArgument_inLabelForBlock,
                                                                    GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_gotoTerminationForBlockInstruction temp_0 = this ;
  const GGS_gotoTerminationForBlockInstruction temp_1 = this ;
  const GGS_gotoTerminationForBlockInstruction temp_2 = this ;
  outArgument_outTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mNextBlock ().readProperty_location (), GGS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (temp_1.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)), temp_2.readProperty_mNextBlock ().readProperty_location (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2443)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::method_generateBlock (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         const GGS_uint /* constinArgument_inCurrentBank */,
                                                                         const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                         const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                         GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                         const GGS_string constinArgument_inLabelForBlock,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_exitBlockTerminationForBlockInstruction temp_0 = this ;
  const GGS_exitBlockTerminationForBlockInstruction temp_1 = this ;
  outArgument_outTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mLocation (), GGS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (GGS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::method_generateBlock (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                    const GGS_uint constinArgument_inCurrentBank,
                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                    GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                    GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                    const GGS_string constinArgument_inLabelForBlock,
                                                                    GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testTerminationForBlockInstruction temp_0 = this ;
  GGS_lstring var_conditionTrueLabel_85564 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2479)) ;
  const GGS_testTerminationForBlockInstruction temp_1 = this ;
  GGS_lstring var_conditionFalseLabel_85680 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2481)) ;
  const GGS_testTerminationForBlockInstruction temp_2 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_2.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_85564, var_conditionFalseLabel_85680, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2483)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_86382 ;
  const GGS_testTerminationForBlockInstruction temp_3 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_3.readProperty_mTrueTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_86382, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2496)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2508)), var_conditionTrueLabel_85564, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_trueTerminator_86382, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2512)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2507)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_86884 ;
  const GGS_testTerminationForBlockInstruction temp_4 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_4.readProperty_mFalseTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_86884, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2516)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2528)), var_conditionFalseLabel_85680, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_falseTerminator_86884, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2532)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2527)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                           GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                           const GGS_routineMap constinArgument_inRoutineMap,
                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                           GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_lstring & ioArgument_ioBlockLabel,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           GGS_uint & ioArgument_ioCurrentBank,
                                                           const GGS_bool constinArgument_inShouldPreserveBSR,
                                                           const GGS_routineKind constinArgument_inRoutineKind,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelForBlock_87770 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_2 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2561)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mStartBlockName ().readProperty_location (), GGS_lstring::init_21__21_ (var_labelForBlock_87770.add_operation (temp_1.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2566)), temp_2.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2568)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2560)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_blockInstructionBlockMap var_blockMap_88332 = GGS_blockInstructionBlockMap::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_block temp_3 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_88443 (temp_3.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_88443.hasCurrentObject ()) {
    {
    var_blockMap_88332.setter_insertKey (enumerator_88443.current_mBlockName (HERE), enumerator_88443.current_mInstructionList (HERE), enumerator_88443.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_88443.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2575)) ;
    }
    enumerator_88443.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_4 = this ;
  GGS_pic_31__38_InstructionList joker_88672 ; // Joker input parameter
  GGS_abstractBlockTerminationForBlockInstruction joker_88675 ; // Joker input parameter
  GGS_location joker_88678 ; // Joker input parameter
  var_blockMap_88332.method_searchKey (temp_4.readProperty_mStartBlockName (), joker_88672, joker_88675, joker_88678, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2578)) ;
  GGS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_88688 = GGS_blockInitialBankSelectionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_pic_31__38_Instruction_5F_block temp_5 = this ;
  var_blockInitialBankSelectionMap_88688.setter_insertKey (temp_5.readProperty_mStartBlockName (), ioArgument_ioCurrentBank, GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2580)) ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_6 = this ;
  GGS_stringset var_accessibleBlockSet_88875 = GGS_stringset::class_func_setWithString (temp_6.readProperty_mStartBlockName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
  GGS_stringset var_handledBlockSet_88957 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continueAccessibilityExploration_89000 = GGS_bool (true) ;
  GGS_bool var_continuesInSequence_89052 = GGS_bool (false) ;
  const GGS_pic_31__38_Instruction_5F_block temp_7 = this ;
  if (temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).isValid ()) {
    uint32_t variant_89082 = temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).uintValue () ;
    bool loop_89082 = true ;
    while (loop_89082) {
      loop_89082 = var_continueAccessibilityExploration_89000.isValid () ;
      if (loop_89082) {
        loop_89082 = var_continueAccessibilityExploration_89000.boolValue () ;
      }
      if (loop_89082 && (0 == variant_89082)) {
        loop_89082 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)) ;
      }
      if (loop_89082) {
        variant_89082 -- ;
        var_continueAccessibilityExploration_89000 = GGS_bool (false) ;
        cEnumerator_stringset enumerator_89253 (var_accessibleBlockSet_88875.substract_operation (var_handledBlockSet_88957, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2588)), EnumerationOrder::up) ;
        while (enumerator_89253.hasCurrentObject ()) {
          var_handledBlockSet_88957.addAssign_operation (enumerator_89253.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2589)) ;
          GGS_pic_31__38_InstructionList var_instructionList_89412 ;
          GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_89486 ;
          GGS_location var_endOfBlock_89526 ;
          var_blockMap_88332.method_searchKey (enumerator_89253.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2591)), var_instructionList_89412, var_blockTermination_89486, var_endOfBlock_89526, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2590)) ;
          GGS_uint var_currentBank_89653 ;
          GGS_string joker_89665 ; // Joker input parameter
          var_blockInitialBankSelectionMap_88688.method_searchKey (enumerator_89253.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)), var_currentBank_89653, joker_89665, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)) ;
          ioArgument_ioBlockLabel = GGS_lstring::init_21__21_ (var_labelForBlock_87770.add_operation (enumerator_89253.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598)), var_blockMap_88332.getter_locationForKey (enumerator_89253.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598)), inCompiler COMMA_HERE) ;
          {
          routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_89412, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_89653, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2599)) ;
          }
          GGS_ipic_31__38_AbstractBlockTerminator var_terminator_90527 ;
          callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_89486.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_89653, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_87770, var_terminator_90527, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_endOfBlock_89526, GGS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629)) ;
            }
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2632)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_90527, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2636)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2631)) ;
          ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
          callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_89486.ptr (), var_accessibleBlockSet_88875, var_blockMap_88332, enumerator_89253.current (HERE), var_currentBank_89653, var_blockInitialBankSelectionMap_88688, var_continuesInSequence_89052, var_continueAccessibilityExploration_89000, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2641)) ;
          enumerator_89253.gotoNextObject () ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_block temp_10 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_91231 (temp_10.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_91231.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_accessibleBlockSet_88875.getter_hasKey (enumerator_91231.current_mBlockName (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2646)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2646)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GGS_pic_31__38_Instruction_5F_block temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticWarning (enumerator_91231.current_mBlockName (HERE).readProperty_location (), GGS_string ("this block is not accessible from '").add_operation (temp_12.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)).add_operation (GGS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)) ;
      }
    }
    enumerator_91231.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_continuesInSequence_89052.boolEnum () ;
    if (kBoolTrue == test_14) {
      const GGS_pic_31__38_Instruction_5F_block temp_15 = this ;
      ioArgument_ioBlockLabel = GGS_lstring::init_21__21_ (var_labelForBlock_87770.add_operation (GGS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2652)), temp_15.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_string joker_91628 ; // Joker input parameter
      var_blockInitialBankSelectionMap_88688.method_searchKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)), ioArgument_ioCurrentBank, joker_91628, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)) ;
    }
  }
  if (kBoolFalse == test_14) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2655)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BccInStructuredCondition::method_analyzeCondition (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                        const GGS_uint /* constinArgument_inCurrentBank */,
                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                        GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                        const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                        const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_BccInStructuredCondition temp_0 = this ;
  const GGS_pic_31__38_BccInStructuredCondition temp_1 = this ;
  outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_0.readProperty_mConditionLocation (), temp_1.readProperty_mCondition (), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)), constinArgument_inConditionFalseLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2697)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                           const GGS_uint constinArgument_inCurrentBank,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                           GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                           const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                           const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_93820 ;
  const GGS_pic_31__38_RegisterComparisonCondition temp_0 = this ;
  GGS_bitSliceTable joker_93848 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_93820, joker_93848, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)) ;
  GGS_ipic_31__38_RegisterComparison var_ipicComparison_93932 ;
  GGS_bool var_complementaryBranch_93959 ;
  const GGS_pic_31__38_RegisterComparisonCondition temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GGS_pic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_equal:
    {
      var_ipicComparison_93932 = GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2728)) ;
      var_complementaryBranch_93959 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greater:
    {
      var_ipicComparison_93932 = GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2731)) ;
      var_complementaryBranch_93959 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lower:
    {
      var_ipicComparison_93932 = GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2734)) ;
      var_complementaryBranch_93959 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greaterOrEqual:
    {
      var_ipicComparison_93932 = GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2737)) ;
      var_complementaryBranch_93959 = GGS_bool (true) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lowerOrEqual:
    {
      var_ipicComparison_93932 = GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2740)) ;
      var_complementaryBranch_93959 = GGS_bool (true) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_notEqual:
    {
      var_ipicComparison_93932 = GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2743)) ;
      var_complementaryBranch_93959 = GGS_bool (true) ;
    }
    break ;
  }
  const GGS_pic_31__38_RegisterComparisonCondition temp_2 = this ;
  GGS_location var_location_94769 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_complementaryBranch_93959.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outCurrentBlockTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_94769, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94769, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94769, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2752)), inCompiler COMMA_HERE), var_IPICregisterDescription_93820, var_ipicComparison_93932, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outCurrentBlockTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_94769, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94769, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94769, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2759)), inCompiler COMMA_HERE), var_IPICregisterDescription_93820, var_ipicComparison_93932, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GGS_uint constinArgument_inCurrentBank,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                         const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_96276 ;
  const GGS_pic_31__38_IncDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_96304 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_96276, joker_96304, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2778)) ;
  const GGS_pic_31__38_IncDecRegisterInCondition temp_1 = this ;
  GGS_location var_location_96387 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_pic_31__38_IncDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_pic_31__38_IncDecRegisterInCondition temp_4 = this ;
      const GGS_pic_31__38_IncDecRegisterInCondition temp_5 = this ;
      outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_96387, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96387, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2793)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96387, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2794)), inCompiler COMMA_HERE), var_IPICregisterDescription_96276, temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GGS_pic_31__38_IncDecRegisterInCondition temp_6 = this ;
    const GGS_pic_31__38_IncDecRegisterInCondition temp_7 = this ;
    outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_96387, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96387, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2801)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96387, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2802)), inCompiler COMMA_HERE), var_IPICregisterDescription_96276, temp_6.readProperty_mIncrement (), temp_7.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterTestCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterTestCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                     const GGS_uint constinArgument_inCurrentBank,
                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                     const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_97946 ;
  const GGS_pic_31__38_RegisterTestCondition temp_0 = this ;
  GGS_bitSliceTable joker_97974 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_97946, joker_97974, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2822)) ;
  const GGS_pic_31__38_RegisterTestCondition temp_1 = this ;
  GGS_location var_location_98057 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GGS_pic_31__38_RegisterTestCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outCurrentBlockTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_98057, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98057, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2837)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98057, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2838)), inCompiler COMMA_HERE), var_IPICregisterDescription_97946, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outCurrentBlockTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_98057, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98057, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2843)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98057, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2844)), inCompiler COMMA_HERE), var_IPICregisterDescription_97946, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestInStructuredCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                            const GGS_uint constinArgument_inCurrentBank,
                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                            GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                            const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                            const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_99511 ;
  GGS_bitSliceTable var_bitSliceTable_99559 ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_99511, var_bitSliceTable_99559, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2862)) ;
  GGS_uint var_bitNumber_99727 ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_99559, var_bitNumber_99727, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2872)) ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_2 = this ;
  GGS_location var_location_99795 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  outArgument_outCurrentBlockTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (var_location_99795, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_99795, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2883)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_99795, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2884)), inCompiler COMMA_HERE), var_IPICregisterDescription_99511, var_bitNumber_99727, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18NegateCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_NegateCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                               const GGS_uint constinArgument_inCurrentBank,
                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               GGS_uint & ioArgument_ioLocalLabelIndex,
                                                               GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               const GGS_lstring constinArgument_inConditionTrueLabel,
                                                               const GGS_lstring constinArgument_inConditionFalseLabel,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_NegateCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2903)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18AndCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_AndCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                            const GGS_uint constinArgument_inCurrentBank,
                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GGS_lstring constinArgument_inConditionTrueLabel,
                                                            const GGS_lstring constinArgument_inConditionFalseLabel,
                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_conditionTrueLabel_101510 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), constinArgument_inConditionTrueLabel.readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2932)) ;
  const GGS_pic_31__38_AndCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_101510, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2934)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_102262 ;
  const GGS_pic_31__38_AndCondition temp_1 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_102262, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2947)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2961)), var_conditionTrueLabel_101510, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_secondTestBlockTerminator_102262, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2965)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2960)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInstructionList?&??????&&&&&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                                     const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                                                     const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                     const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                                     const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                     GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_uint & ioArgument_ioCurrentBank,
                                                                                                     const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                                                     const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_103289 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_103289.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_103289.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2995)) ;
        ioArgument_ioBlockLabel = GGS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2996)) ;
      }
    }
    callExtensionMethod_analyze ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_103289.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2998)) ;
    enumerator_103289.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze_data_sections???&!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (const GGS_dataList constinArgument_inDataDefinitionList,
                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                                                     GGS_constantMap & ioArgument_ioConstantMap,
                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GGS_pic_31__38__5F_dataMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_dataList enumerator_104583 (constinArgument_inDataDefinitionList, EnumerationOrder::up) ;
  const bool bool_0 = true ;
  if (enumerator_104583.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)) ;
    while (enumerator_104583.hasCurrentObject () && bool_0) {
      GGS_uintlist var_data_104902 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = enumerator_104583.current_mIsByteList (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)).operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (enumerator_104583.current_mDataName (HERE).readProperty_location (), GGS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Data8 '").add_operation (enumerator_104583.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (GGS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)).add_operation (GGS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)) ;
          {
          ioArgument_ioConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_104583.current_mDataName (HERE).readProperty_string ().add_operation (GGS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), enumerator_104583.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)) ;
          }
          GGS_sint var_byte_105300 = GGS_sint (int32_t (0L)) ;
          cEnumerator_immediatExpressionList enumerator_105331 (enumerator_104583.current_mValueList (HERE), EnumerationOrder::up) ;
          GGS_uint index_105315 (uint32_t (0)) ;
          while (enumerator_105331.hasCurrentObject ()) {
            GGS_sint_36__34_ var_value_105439 ;
            callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_105331.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_105439, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)) ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::lowerThan, var_value_105439.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_105331.current_mErrorLocation (HERE), GGS_string ("data8 value is ").add_operation (var_value_105439.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)).add_operation (GGS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_value_105439.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_105331.current_mErrorLocation (HERE), GGS_string ("data8 value is ").add_operation (var_value_105439.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)).add_operation (GGS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, index_105315.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3055)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    var_byte_105300 = var_value_105439.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  var_data_104902.addAssign_operation (var_value_105439.left_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)).operator_or (var_byte_105300.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)) ;
                }
              }
            }
            enumerator_105331.gotoNextObject () ;
            index_105315.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3049)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Data16 '").add_operation (enumerator_104583.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (GGS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).add_operation (GGS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_104583.current_mDataName (HERE).readProperty_string ().add_operation (GGS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), enumerator_104583.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_104583.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)) ;
        }
        cEnumerator_immediatExpressionList enumerator_106086 (enumerator_104583.current_mValueList (HERE), EnumerationOrder::up) ;
        while (enumerator_106086.hasCurrentObject ()) {
          GGS_sint_36__34_ var_value_106190 ;
          callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_106086.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_106190, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_106190.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_106086.current_mErrorLocation (HERE), GGS_string ("data16 value is ").add_operation (var_value_106190.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)).add_operation (GGS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::greaterThan, var_value_106190.objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_106086.current_mErrorLocation (HERE), GGS_string ("data16 value is ").add_operation (var_value_106190.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)).add_operation (GGS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)) ;
              }
            }
            if (kBoolFalse == test_11) {
              var_data_104902.addAssign_operation (var_value_106190.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3072))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3072)) ;
            }
          }
          enumerator_106086.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_104583.current_mDataName (HERE), var_data_104902, enumerator_104583.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3076)) ;
      }
      enumerator_104583.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'build_ipic18_block_representation_list?????????????????????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inSourceFileName,
                                                                                                                                                                               const GGS_sint_36__34_ constinArgument_inROMSize,
                                                                                                                                                                               const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                                                                                                                               const GGS_luint constinArgument_inBootloaderReservedROMsize,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                                                                                                                               const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                                                                               const GGS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                                                                                                                               const GGS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                                                                                                                               const GGS_programKind constinArgument_inProgramKind,
                                                                                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                                                                               const GGS_stringset constinArgument_inUsedRegisters,
                                                                                                                                                                               const GGS_dataList constinArgument_inDataList,
                                                                                                                                                                               const GGS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                                                                                                                               const GGS_lstringlist constinArgument_inUnusedRegisterList,
                                                                                                                                                                               const GGS_ramBankTable constinArgument_inRamBank,
                                                                                                                                                                               const GGS_bool constinArgument_inHasHighInterrupt,
                                                                                                                                                                               const GGS_bool constinArgument_inHasLowInterrupt,
                                                                                                                                                                               const GGS_string constinArgument_inProcessorName,
                                                                                                                                                                               const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                                                                                                                               const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                                                                                                               const GGS_location constinArgument_inEndOfProgram,
                                                                                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap var_constantMap_107894 = constinArgument_inConstantMap ;
  GGS_stringset var_usedRegisters_107928 = constinArgument_inUsedRegisters ;
  GGS_routineMap var_routineMap_108018 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_routineDeclarationList enumerator_108108 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, EnumerationOrder::up) ;
  while (enumerator_108108.hasCurrentObject ()) {
    {
    var_routineMap_108018.setter_insertKey (enumerator_108108.current_mRoutineName (HERE), enumerator_108108.current_mIsNoReturn (HERE), enumerator_108108.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108108.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108108.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3115)) ;
    }
    enumerator_108108.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_108365 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_108365.hasCurrentObject ()) {
    {
    var_routineMap_108018.setter_insertKey (enumerator_108365.current_mRoutineName (HERE), enumerator_108365.current_mIsNoReturn (HERE), enumerator_108365.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108365.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108365.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3118)) ;
    }
    enumerator_108365.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_108643 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
  while (enumerator_108643.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_108643.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_108643.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_108643.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3122)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_108643.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_108643.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_108643.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3125)) ;
      }
    }
    {
    var_routineMap_108018.setter_insertKey (enumerator_108643.current_mRoutineName (HERE), enumerator_108643.current_mIsNoReturn (HERE), enumerator_108643.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108643.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108643.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3127)) ;
    }
    enumerator_108643.gotoNextObject () ;
  }
  GGS_pic_31__38__5F_dataMap var_dataMap_110367 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_107894, ioArgument_ioListFileContents, var_dataMap_110367, var_constantMap_107894, var_usedRegisters_107928, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3150)) ;
  }
  {
  routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_107894, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3160)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3165)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_routineMap_108018.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3166)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GGS_bool var_isNoReturn_110780 ;
          GGS_uint var_requiredBank_110796 ;
          GGS_uint joker_110809 ; // Joker input parameter
          GGS_bool joker_110812 ; // Joker input parameter
          var_routineMap_108018.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167)), inCompiler COMMA_HERE), var_isNoReturn_110780, var_requiredBank_110796, joker_110809, joker_110812, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_isNoReturn_110780.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3168)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)), GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_110796.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)), GGS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3175)) ;
      }
    }
  }
  GGS_ipic_31__38_BlockList var_generatedBlockList_111347 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPoint_111399 = GGS_uint (uint32_t (4U)) ;
  cEnumerator_routineDeclarationList enumerator_111443 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_111443.hasCurrentObject ()) {
    var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111399, enumerator_111443.current_mRoutineName (HERE), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3186)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3187)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3182)) ;
    var_entryPoint_111399 = var_entryPoint_111399.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3190)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_entryPoint_111399.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_entryPoint_111399 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, var_entryPoint_111399.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_entryPoint_111399 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_111443.gotoNextObject () ;
  }
  var_entryPoint_111399 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_112044 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_112044.hasCurrentObject ()) {
    var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111399, GGS_string ("_entry_user_").add_operation (var_entryPoint_111399.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_112044.current_mRoutineName (HERE).readProperty_location (), enumerator_112044.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3204)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3205)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3200)) ;
    var_entryPoint_111399 = var_entryPoint_111399.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3208)) ;
    enumerator_112044.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (0U)), GGS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GGS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3212)) ;
    }
  }
  GGS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_112955 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_112955.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GGS_lstring var_routineName_113182 ;
      {
      GGS_luint joker_113194 ; // Joker input parameter
      GGS_luint joker_113197 ; // Joker input parameter
      GGS_bool joker_113200 ; // Joker input parameter
      GGS_bool joker_113203 ; // Joker input parameter
      var_tempBootloaderRoutineDeclarationList_112955.setter_popFirst (var_routineName_113182, joker_113194, joker_113197, joker_113200, joker_113203, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3224)) ;
      }
      var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (4U)), GGS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3227)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_113182.readProperty_location (), var_routineName_113182, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3229)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3230)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (kBoolTrue == test_15) {
      var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (8U)), GGS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3238)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GGS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3241)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3236)) ;
    }
  }
  var_entryPoint_111399 = GGS_uint (uint32_t (12U)) ;
  if (var_tempBootloaderRoutineDeclarationList_112955.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)).isValid ()) {
    uint32_t variant_114048 = var_tempBootloaderRoutineDeclarationList_112955.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)).uintValue () ;
    bool loop_114048 = true ;
    while (loop_114048) {
      loop_114048 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_112955.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::lowerThan, var_entryPoint_111399.objectCompare (GGS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).isValid () ;
      if (loop_114048) {
        loop_114048 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_112955.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::lowerThan, var_entryPoint_111399.objectCompare (GGS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).boolValue () ;
      }
      if (loop_114048 && (0 == variant_114048)) {
        loop_114048 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)) ;
      }
      if (loop_114048) {
        variant_114048 -- ;
        GGS_lstring var_routineName_114254 ;
        {
        GGS_luint joker_114266 ; // Joker input parameter
        GGS_luint joker_114269 ; // Joker input parameter
        GGS_bool joker_114272 ; // Joker input parameter
        GGS_bool joker_114275 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_112955.setter_popFirst (var_routineName_114254, joker_114266, joker_114269, joker_114272, joker_114275, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3250)) ;
        }
        var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111399, GGS_string ("_entry_bootloader_").add_operation (var_entryPoint_111399.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_114254.readProperty_location (), var_routineName_114254, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3256)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3251)) ;
        var_entryPoint_111399 = var_entryPoint_111399.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3259)) ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (kBoolTrue == test_16) {
      var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (24U)), GGS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3265)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GGS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3268)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)) ;
    }
  }
  var_entryPoint_111399 = GGS_uint (uint32_t (28U)) ;
  cEnumerator_routineDeclarationList enumerator_115141 (var_tempBootloaderRoutineDeclarationList_112955, EnumerationOrder::up) ;
  while (enumerator_115141.hasCurrentObject ()) {
    var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111399, GGS_string ("_entry_bootloader_").add_operation (var_entryPoint_111399.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_115141.current_mRoutineName (HERE).readProperty_location (), enumerator_115141.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3279)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)) ;
    var_entryPoint_111399 = var_entryPoint_111399.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3283)) ;
    enumerator_115141.gotoNextObject () ;
  }
  GGS_uint var_localLabelIndex_115660 = GGS_uint (uint32_t (0U)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (kBoolTrue == test_17) {
      cEnumerator_pic_31__38_InterruptDefinitionList enumerator_115761 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
      while (enumerator_115761.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_115761.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GGS_uint var_currentBank_115876 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)) ;
            GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_115921 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
            GGS_lstring var_currentBlockLabel_115995 = GGS_lstring::init_21__21_ (GGS_string ("_low_interrupt"), enumerator_115761.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_115761.current_mInstructionList (HERE), var_generatedBlockList_111347, constinArgument_inAccessBankSplitOffset, var_routineMap_108018, constinArgument_inRegisterTable, var_dataMap_110367, var_constantMap_107894, constinArgument_inMacroMap, var_localLabelIndex_115660, var_generatedInstructionList_115921, var_currentBlockLabel_115995, ioArgument_ioListFileContents, var_currentBank_115876, enumerator_115761.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3308)), GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3309)), var_usedRegisters_107928, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
            }
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, var_currentBlockLabel_115995.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_115761.current_mEndOfInterruptLocation (HERE), GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray20  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3313)) ;
              }
            }
            var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)), var_currentBlockLabel_115995, var_generatedInstructionList_115921, GGS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_115761.current_mInterruptName (HERE).readProperty_location (), enumerator_115761.current_mFastReturn (HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3321)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3316)) ;
          }
        }
        enumerator_115761.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (kBoolTrue == test_21) {
      cEnumerator_pic_31__38_InterruptDefinitionList enumerator_117227 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
      while (enumerator_117227.hasCurrentObject ()) {
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = GGS_bool (ComparisonKind::equal, enumerator_117227.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
          if (kBoolTrue == test_22) {
            GGS_uint var_currentBank_117343 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3331)) ;
            GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_117388 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
            GGS_lstring var_currentBlockLabel_117462 = GGS_lstring::init_21__21_ (GGS_string ("_high_interrupt"), enumerator_117227.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_117227.current_mInstructionList (HERE), var_generatedBlockList_111347, constinArgument_inAccessBankSplitOffset, var_routineMap_108018, constinArgument_inRegisterTable, var_dataMap_110367, var_constantMap_107894, constinArgument_inMacroMap, var_localLabelIndex_115660, var_generatedInstructionList_117388, var_currentBlockLabel_117462, ioArgument_ioListFileContents, var_currentBank_117343, enumerator_117227.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3348)), GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)), var_usedRegisters_107928, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)) ;
            }
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              test_23 = GGS_bool (ComparisonKind::equal, var_currentBlockLabel_117462.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_117227.current_mEndOfInterruptLocation (HERE), GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3353)) ;
              }
            }
            var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3357)), var_currentBlockLabel_117462, var_generatedInstructionList_117388, GGS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_117227.current_mInterruptName (HERE).readProperty_location (), GGS_bool (true), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3356)) ;
          }
        }
        enumerator_117227.gotoNextObject () ;
      }
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_118675 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
  while (enumerator_118675.hasCurrentObject ()) {
    GGS_uint var_currentBank_118723 = enumerator_118675.current_mRequiredBank (HERE).readProperty_uint () ;
    GGS_routineKind var_routineKind_118777 ;
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      test_25 = enumerator_118675.current_mIsNoReturn (HERE).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_routineKind_118777 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3372)) ;
      }
    }
    if (kBoolFalse == test_25) {
      var_routineKind_118777 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3374)) ;
    }
    GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_118937 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    GGS_lstring var_currentBlockLabel_119016 = enumerator_118675.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_118675.current_mInstructionList (HERE), var_generatedBlockList_111347, constinArgument_inAccessBankSplitOffset, var_routineMap_108018, constinArgument_inRegisterTable, var_dataMap_110367, var_constantMap_107894, constinArgument_inMacroMap, var_localLabelIndex_115660, var_generatedInstructionList_118937, var_currentBlockLabel_119016, ioArgument_ioListFileContents, var_currentBank_118723, enumerator_118675.current_mPreservesBank (HERE), var_routineKind_118777, var_usedRegisters_107928, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)) ;
    }
    GGS_bool var_continuesInSequence_119466 = GGS_bool (ComparisonKind::notEqual, var_currentBlockLabel_119016.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = var_continuesInSequence_119466.boolEnum () ;
      if (kBoolTrue == test_26) {
        var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3400)), var_currentBlockLabel_119016, var_generatedInstructionList_118937, GGS_ipic_31__38_ReturnTerminator::init_21_ (enumerator_118675.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3404)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)) ;
      }
    }
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = enumerator_118675.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_118675.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_118723.objectCompare (enumerator_118675.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_118675.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_118675.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), fixItArray28  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)) ;
      }
    }
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_118675.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_119466 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3412)).boolEnum () ;
      if (kBoolTrue == test_29) {
        TC_Array <FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_118675.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray30  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
      }
    }
    enumerator_118675.gotoNextObject () ;
  }
  GGS_registerExpression var_WREGregister_120357 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("WREG"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3420)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3421)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3422)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_120683 ;
  GGS_bitSliceTable joker_120716 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_WREGregister_120357.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_107894, GGS_bool (false), var_WREG_5F_IPICregisterDescription_120683, joker_120716, var_usedRegisters_107928, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3424)) ;
  GGS_registerExpression var_TOSLregister_120783 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3436)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3437)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3438)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_121108 ;
  GGS_bitSliceTable joker_121141 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSLregister_120783.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_107894, GGS_bool (true), var_TOSL_5F_IPICregisterDescription_121108, joker_121141, var_usedRegisters_107928, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3440)) ;
  GGS_registerExpression var_TOSHregister_121208 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3454)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_121533 ;
  GGS_bitSliceTable joker_121566 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSHregister_121208.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_107894, GGS_bool (true), var_TOSH_5F_IPICregisterDescription_121533, joker_121566, var_usedRegisters_107928, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3456)) ;
  GGS_registerExpression var_TOSUregister_121633 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3470)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_121957 ;
  GGS_bitSliceTable joker_121990 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSUregister_121633.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_107894, GGS_bool (true), var_TOSU_5F_IPICregisterDescription_121957, joker_121990, var_usedRegisters_107928, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)) ;
  GGS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_122057 = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3485)), var_WREG_5F_IPICregisterDescription_120683, GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38_Block var_goto_34_Block_122265 = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3491)), GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3492)), GGS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (var_ADDWF_5F_WREG_122057, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3495)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_111347.addAssign_operation (var_goto_34_Block_122265  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3498)) ;
  GGS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_122643 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  var_goto_32_InstructionList_122643.addAssign_operation (var_ADDWF_5F_WREG_122057, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)) ;
  var_goto_32_InstructionList_122643.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3503)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3504)), var_TOSL_5F_IPICregisterDescription_121108, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)) ;
  var_goto_32_InstructionList_122643.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3508)), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3509)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3510)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)) ;
  var_goto_32_InstructionList_122643.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3512)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)), var_TOSH_5F_IPICregisterDescription_121533, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3515)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)) ;
  var_goto_32_InstructionList_122643.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3517)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3518)), var_TOSU_5F_IPICregisterDescription_121957, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)) ;
  GGS_ipic_31__38_Block var_goto_32_Block_123594 = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)), GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)), var_goto_32_InstructionList_122643, GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3529)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3530)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_111347.addAssign_operation (var_goto_32_Block_123594  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533)) ;
  var_entryPoint_111399 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_123977 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, EnumerationOrder::up) ;
  while (enumerator_123977.hasCurrentObject ()) {
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = enumerator_123977.current_mIsNoReturn (HERE).boolEnum () ;
      if (kBoolTrue == test_31) {
        var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111399, enumerator_123977.current_mRoutineName (HERE), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_123977.current_mRoutineName (HERE).readProperty_location (), enumerator_123977.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3542)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3543)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538)) ;
      }
    }
    if (kBoolFalse == test_31) {
      GGS_ipic_31__38_SequentialInstructionList var_instructionList_124372 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GGS_bool (ComparisonKind::notEqual, enumerator_123977.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_instructionList_124372.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), enumerator_123977.current_mReturnedBank (HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)) ;
        }
      }
      var_generatedBlockList_111347.addAssign_operation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111399, enumerator_123977.current_mRoutineName (HERE), var_instructionList_124372, GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3555)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3556)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)) ;
    }
    var_entryPoint_111399 = var_entryPoint_111399.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)) ;
    enumerator_123977.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_124947 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_124994 (constinArgument_inUnusedRegisterList, EnumerationOrder::up) ;
  while (enumerator_124994.hasCurrentObject ()) {
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = constinArgument_inRegisterTable.getter_hasKey (enumerator_124994.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).boolEnum () ;
      if (kBoolTrue == test_33) {
        TC_Array <FixItDescription> fixItArray34 ;
        inCompiler->emitSemanticError (enumerator_124994.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124994.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)), fixItArray34  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)) ;
      }
    }
    if (kBoolFalse == test_33) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = var_unusedDeclarationUnicity_124947.getter_hasKey (enumerator_124994.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3567)).boolEnum () ;
        if (kBoolTrue == test_35) {
          TC_Array <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticWarning (enumerator_124994.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124994.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)), fixItArray36  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)) ;
        }
      }
      if (kBoolFalse == test_35) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_usedRegisters_107928.getter_hasKey (enumerator_124994.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569)).boolEnum () ;
          if (kBoolTrue == test_37) {
            TC_Array <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticWarning (enumerator_124994.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124994.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)), fixItArray38  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_124947.addAssign_operation (enumerator_124994.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572)) ;
    enumerator_124994.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_125503 (constinArgument_inDeclaredByteMap, EnumerationOrder::up) ;
  while (enumerator_125503.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_usedRegisters_107928.getter_hasKey (enumerator_125503.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_and (var_unusedDeclarationUnicity_124947.getter_hasKey (enumerator_125503.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticWarning (enumerator_125503.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_125503.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)), fixItArray40  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)) ;
      }
    }
    enumerator_125503.gotoNextObject () ;
  }
  {
  routine_displayBlockList_3F__26__3F_ (GGS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_111347, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)) ;
  }
  enumGalgasBool test_41 = kBoolTrue ;
  if (kBoolTrue == test_41) {
    test_41 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3582)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_41) {
      {
      routine_ipic_31__38_OptimizeBlocks_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_111347, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3583)) ;
      }
      {
      routine_displayBlockList_3F__26__3F_ (GGS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_111347, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584)) ;
      }
    }
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_42) {
      {
      routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_111347, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)) ;
      }
    }
  }
  enumGalgasBool test_43 = kBoolTrue ;
  if (kBoolTrue == test_43) {
    test_43 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3595)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_43) {
      {
      routine_ipic_31__38_RelativesResolution_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_111347, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)) ;
      }
    }
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      routine_ipic_31__38_StackComputations_26__3F_ (ioArgument_ioListFileContents, var_generatedBlockList_111347, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3603)) ;
      }
    }
  }
  GGS_blockDurationMap var_blockDurationMap_127019 = GGS_blockDurationMap::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_45) {
      {
      routine_ipic_31__38_DurationComputations_26__21_ (var_generatedBlockList_111347, var_blockDurationMap_127019, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)) ;
      }
    }
  }
  enumGalgasBool test_46 = kBoolTrue ;
  if (kBoolTrue == test_46) {
    test_46 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_46) {
      GGS_uint var_usedROMsize_127585 ;
      GGS_generatedCodeMap var_generatedCodeMap_127633 ;
      {
      routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.readProperty_uint (), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_110367, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_111347, var_usedROMsize_127585, var_generatedCodeMap_127633, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)) ;
      }
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3631)).boolEnum () ;
        if (kBoolTrue == test_47) {
          GGS_string var_verboseMessage_127788 = GGS_string ("Resource usage:\n") ;
          var_verboseMessage_127788.plusAssign_operation(GGS_string ("  ROM, used ").add_operation (var_usedROMsize_127585.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)) ;
          var_verboseMessage_127788.plusAssign_operation(GGS_string (" / ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)) ;
          var_verboseMessage_127788.plusAssign_operation(var_usedROMsize_127585.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).add_operation (GGS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)) ;
          cEnumerator_ramBankTable enumerator_128084 (constinArgument_inRamBank, EnumerationOrder::up) ;
          while (enumerator_128084.hasCurrentObject ()) {
            GGS_uint var_bankSize_128121 = enumerator_128084.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_128084.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3637)) ;
            GGS_uint var_usedSize_128186 = enumerator_128084.current_mFirstFreeAddress (HERE).substract_operation (enumerator_128084.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3638)) ;
            var_verboseMessage_127788.plusAssign_operation(GGS_string ("  Bank '").add_operation (enumerator_128084.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)).add_operation (GGS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)) ;
            var_verboseMessage_127788.plusAssign_operation(var_usedSize_128186.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)) ;
            var_verboseMessage_127788.plusAssign_operation(var_bankSize_128121.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)) ;
            var_verboseMessage_127788.plusAssign_operation(var_usedSize_128186.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).divide_operation (var_bankSize_128121, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).add_operation (GGS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)) ;
            enumerator_128084.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_127788, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3644)) ;
          }
        }
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_48) {
      {
      routine_ipic_31__38_PrintDurations_26__3F_ (ioArgument_ioListFileContents, var_blockDurationMap_127019, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                        const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                        const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                        const GGS_string /* constinArgument_inBlockLabel */,
                                                                        GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GGS_string /* constinArgument_inBlockLabel */,
                                                                         GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                 const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                 const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                 GGS_bool & ioArgument_ioOptimizationDone,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GGS_uint var_targetBlockIndex_2043 ;
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_targetBlockIndex_2043, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
      GGS_ipic_31__38_Block var_targetBlock_2082 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2043, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_targetBlock_2082.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GGS_bool (ComparisonKind::equal, var_targetBlock_2082.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GGS_bool var_optimize_2360 ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              GGS_ipic_31__38_JumpTerminator temp_6 ;
              if (var_targetBlock_2082.readProperty_mTerminator ().isValid ()) {
                if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())) {
                  temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2082.readProperty_mTerminator ().ptr () ;
                }else{
                  inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2082.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
                }
              }
              GGS_ipic_31__38_JumpTerminator var_candidate_2471 = temp_6 ;
              const GGS_ipic_31__38_JumpTerminator temp_7 = this ;
              var_optimize_2360 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mLabel ().readProperty_string ().objectCompare (var_candidate_2471.readProperty_mLabel ().readProperty_string ())) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_optimize_2360 = GGS_bool (true) ;
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_optimize_2360.boolEnum () ;
            if (kBoolTrue == test_8) {
              outArgument_outOptimizedTerminator = var_targetBlock_2082.readProperty_mTerminator () ;
              ioArgument_ioOptimizationDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
              const GGS_ipic_31__38_JumpTerminator temp_9 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_9.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
              ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
            }
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                            const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                            const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                            const GGS_string constinArgument_inBlockLabel,
                                                                            GGS_bool & ioArgument_ioOptimizationDone,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      outArgument_outOptimizedTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTargetLabelWhenFalse (), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 94)), inCompiler COMMA_HERE) ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (GGS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)) ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (temp_6.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_bool var_optimized_4028 = GGS_bool (false) ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    GGS_lstring var_targetLabelWhenTrue_4090 = temp_8.readProperty_mTargetLabelWhenTrue () ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_10.readProperty_mTargetLabelWhenTrue ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GGS_uint var_targetBlockIndex_4268 ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_11.readProperty_mTargetLabelWhenTrue (), var_targetBlockIndex_4268, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)) ;
        GGS_ipic_31__38_Block var_targetBlock_4309 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4268, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GGS_bool (ComparisonKind::equal, var_targetBlock_4309.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 106)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::equal, var_targetBlock_4309.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 107)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_12) {
              GGS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_4514 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4309.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_4514.ptr ()) {
                test_12 = kBoolFalse ;
              }
              if (kBoolTrue == test_12) {
                var_targetLabelWhenTrue_4090 = var_targetBlockJumpTerminator_4514.readProperty_mLabel () ;
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                  test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_targetLabelWhenTrue_4090.readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    var_optimized_4028 = GGS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)).add_operation (GGS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
                    const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
                    ioArgument_ioListFileContents.plusAssign_operation(temp_15.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenTrue_4090.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 115)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 116)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
    GGS_lstring var_targetLabelWhenFalse_5122 = temp_16.readProperty_mTargetLabelWhenFalse () ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      test_17 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_18.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_17) {
        GGS_uint var_targetBlockIndex_5304 ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_19.readProperty_mTargetLabelWhenFalse (), var_targetBlockIndex_5304, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)) ;
        GGS_ipic_31__38_Block var_targetBlock_5345 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5304, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 124)) ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = GGS_bool (ComparisonKind::equal, var_targetBlock_5345.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 125)))).boolEnum () ;
          if (kBoolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, var_targetBlock_5345.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_20) {
              GGS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_5548 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5345.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_5548.ptr ()) {
                test_20 = kBoolFalse ;
              }
              if (kBoolTrue == test_20) {
                var_targetLabelWhenFalse_5122 = var_targetBlockJumpTerminator_5548.readProperty_mLabel () ;
                enumGalgasBool test_21 = kBoolTrue ;
                if (kBoolTrue == test_21) {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  test_21 = GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_targetLabelWhenFalse_5122.readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_21) {
                    var_optimized_4028 = GGS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)).add_operation (GGS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
                    const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                    ioArgument_ioListFileContents.plusAssign_operation(temp_23.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 133)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenFalse_5122.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 134)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 135)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = var_optimized_4028.boolEnum () ;
      if (kBoolTrue == test_24) {
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
        outArgument_outOptimizedTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), temp_26.readProperty_mConditionalBranch (), var_targetLabelWhenTrue_4090, temp_27.readProperty_mBranchModeOnTrueLabel (), var_targetLabelWhenFalse_5122, temp_28.readProperty_mBranchModeOnFalseLabel (), inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_24) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
      outArgument_outOptimizedTerminator = temp_29 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GGS_string constinArgument_inBlockLabel,
                                                                           GGS_bool & ioArgument_ioOptimizationDone,
                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                           GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_9234 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9460 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9528 ;
  GGS_bool var_identicalTerminators_9568 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_9234, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9460, var_optimizedFalseTerminator_9528, var_identicalTerminators_9568, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 218)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_9568.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      outArgument_outOptimizedTerminator = temp_2 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("useless decf/incf condition should be replaced by decf/incf instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 231)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_optimization_9234.boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
        outArgument_outOptimizedTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_9460, var_optimizedFalseTerminator_9528, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
      outArgument_outOptimizedTerminator = temp_10 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                   const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                   const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                   GGS_bool & ioArgument_ioOptimizationDone,
                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_10559 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10785 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10853 ;
  GGS_bool var_identicalTerminators_10893 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10559, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10785, var_optimizedFalseTerminator_10853, var_identicalTerminators_10893, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 258)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_10893.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10785 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10785.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)) ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 273)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_optimization_10559.boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
        const GGS_pic_31__38_BitTestTerminator temp_6 = this ;
        const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_10785, var_optimizedFalseTerminator_10853, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                              const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              const GGS_string constinArgument_inBlockLabel,
                                                                              GGS_bool & ioArgument_ioOptimizationDone,
                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                              GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_12018 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_12239 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12307 ;
  GGS_bool var_identicalTerminators_12347 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_12018, ioArgument_ioListFileContents, var_optimizedTrueTerminator_12239, var_optimizedFalseTerminator_12307, var_identicalTerminators_12347, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 298)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_12347.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_12239 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_12239.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)) ;
      const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 313)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_optimization_12018.boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
        const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_12239, var_optimizedFalseTerminator_12307, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mComparison (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                        const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                        GGS_bool & ioArgument_ioOptimizationDone,
                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_13478 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13699 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13767 ;
  GGS_bool var_identicalTerminators_13807 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13478, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13699, var_optimizedFalseTerminator_13767, var_identicalTerminators_13807, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 338)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_13807.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13699 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13699.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)) ;
      const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 353)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_optimization_13478.boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_13699, var_optimizedFalseTerminator_13767, temp_6.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      const GGS_pic_31__38_TestRegisterTerminator temp_7 = this ;
      outArgument_outOptimizedTerminator = temp_7 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GGS_string /* constinArgument_inBlockLabel */,
                                                                   GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetfieTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                  const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                  const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                  const GGS_string /* constinArgument_inBlockLabel */,
                                                                  GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GGS_string /* constinArgument_inBlockLabel */,
                                                                   GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ReturnTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                          const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                          const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                          const GGS_string /* constinArgument_inBlockLabel */,
                                                                          GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                                          GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto2block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_32_block_3F__3F__26_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GGS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GGS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 428)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 428)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (GGS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 429)) ;
      GGS_uint var_blockIndex_17014 ;
      constinArgument_inSymbolTable.method_searchKey (GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 430)), var_blockIndex_17014, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 430)) ;
      GGS_ipic_31__38_Block var_b_17047 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17014, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 431)) ;
      extensionMethod_enterReferencedLabels (var_b_17047, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 432)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto4block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_34_block_3F__3F__26_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GGS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GGS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 446)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 446)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (GGS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 447)) ;
      GGS_uint var_blockIndex_17616 ;
      constinArgument_inSymbolTable.method_searchKey (GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 448)), var_blockIndex_17616, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 448)) ;
      GGS_ipic_31__38_Block var_b_17649 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17616, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 449)) ;
      extensionMethod_enterReferencedLabels (var_b_17649, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 450)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                       const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                       GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 471)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 484)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_18849 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_18849.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18849.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 490)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 490)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18849.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 491)) ;
        GGS_uint var_blockIndex_19039 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_18849.current_mValue (HERE), var_blockIndex_19039, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 492)) ;
        GGS_ipic_31__38_Block var_b_19074 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19039, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 493)) ;
        extensionMethod_enterReferencedLabels (var_b_19074, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 494)) ;
      }
    }
    enumerator_18849.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                      const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                      GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 509)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_19630 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_19630.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19630.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 515)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 515)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19630.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 516)) ;
        GGS_uint var_blockIndex_19820 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_19630.current_mValue (HERE), var_blockIndex_19820, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 517)) ;
        GGS_ipic_31__38_Block var_b_19855 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19820, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 518)) ;
        extensionMethod_enterReferencedLabels (var_b_19855, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 519)) ;
      }
    }
    enumerator_19630.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 534)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 534)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 535)) ;
      GGS_uint var_blockIndex_20474 ;
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_blockIndex_20474, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 536)) ;
      GGS_ipic_31__38_Block var_b_20507 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20474, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 537)) ;
      extensionMethod_enterReferencedLabels (var_b_20507, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 538)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                         const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                         GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 552)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 552)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 553)) ;
      GGS_uint var_blockIndex_21161 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabelWhenTrue (), var_blockIndex_21161, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 554)) ;
      GGS_ipic_31__38_Block var_b_21194 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21161, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 555)) ;
      extensionMethod_enterReferencedLabels (var_b_21194, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 556)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
    test_4 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 562)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 562)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 563)) ;
      GGS_uint var_blockIndex_21558 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_7.readProperty_mTargetLabelWhenFalse (), var_blockIndex_21558, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 564)) ;
      GGS_ipic_31__38_Block var_b_21591 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21558, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 565)) ;
      extensionMethod_enterReferencedLabels (var_b_21591, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 566)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SingleInstructionTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                           const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                           GGS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                           GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 588)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 589)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 610)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 610)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_2.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 611)) ;
      GGS_uint var_blockIndex_23524 ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabel (), var_blockIndex_23524, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 612)) ;
      GGS_ipic_31__38_Block var_b_23557 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23524, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 613)) ;
      extensionMethod_enterReferencedLabels (var_b_23557, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 614)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 628)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_24129 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_24129.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_24129.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 634)) ;
    enumerator_24129.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 648)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GGS_lstring constinArgument_inBlockLabel,
                                                                           GGS_bool & outArgument_outOptimizationDone,
                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                           GGS_bool & outArgument_outNOPsubstitution,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_uint var_targetBlockIndex_26025 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabel (), var_targetBlockIndex_26025, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)) ;
  GGS_ipic_31__38_Block var_targetBloc_26063 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_26025, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 692)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inOptimizeFlagStruct.readProperty_mRemoveEmptyRoutine ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 696)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)) ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("call to empty ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)).add_operation (GGS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 701)) ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_4.readProperty_mInstructionLocation (), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 702)), inCompiler COMMA_HERE) ;
      outArgument_outNOPsubstitution = GGS_bool (true) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoRETLWreplacedByMOVLW ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 705)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 707)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GGS_ipic_31__38_RetlwTerminator temp_6 ;
        if (var_targetBloc_26063.readProperty_mTerminator ().isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_26063.readProperty_mTerminator ().ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_26063.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_t_27129 = temp_6 ;
        outArgument_outOptimizationDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)) ;
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("call to RETLW ").add_operation (temp_7.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)).add_operation (GGS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 713)) ;
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_8 = this ;
        outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 716)), var_t_27129.readProperty_mLiteralValue (), inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 719)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26063.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 721)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26063.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)).boolEnum () ;
        if (kBoolTrue == test_9) {
          outArgument_outOptimizedInstruction = var_targetBloc_26063.readProperty_mInstructionList ().getter_mInstructionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)) ;
          outArgument_outOptimizationDone = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("call to single instruction routine ").add_operation (temp_10.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)).add_operation (GGS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 727)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                        const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                        const GGS_lstring constinArgument_inBlockLabel,
                                                                                                        GGS_bool & outArgument_outOptimizationDone,
                                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                                        GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                        GGS_bool & outArgument_outNOPsubstitution,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_28878 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28931 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_28931.hasCurrentObject ()) {
    GGS_bool var_opt_28980 = GGS_bool (false) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28931.current_mInstruction (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 ;
        if (enumerator_28931.current_mInstruction (HERE).isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28931.current_mInstruction (HERE).ptr ())) {
            temp_2 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28931.current_mInstruction (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28931.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)) ;
          }
        }
        GGS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_29085 = temp_2 ;
        GGS_uint var_targetBlockIndex_29195 ;
        constinArgument_inSymbolTable.method_searchKey (var_jsr_29085.readProperty_mTargetLabel (), var_targetBlockIndex_29195, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 751)) ;
        GGS_ipic_31__38_Block var_targetBloc_29237 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_29195, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 752)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_29237.readProperty_mTerminator ().ptr ())).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29237.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 753)).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29237.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)).boolEnum () ;
              if (kBoolTrue == test_4) {
                var_opt_28980 = GGS_bool (true) ;
                outArgument_outOptimizationDone = GGS_bool (true) ;
                var_optimizedInstructionList_28878.addAssign_operation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::init_21__21_ (var_jsr_29085.readProperty_mInstructionLocation (), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 759)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 759)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JSR ").add_operation (var_jsr_29085.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).add_operation (GGS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 762)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29237.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 764)).objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 763)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  GGS_ipic_31__38_SequentialInstruction var_inst_30229 = var_targetBloc_29237.readProperty_mInstructionList ().getter_mInstructionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
                  enumGalgasBool test_6 = kBoolTrue ;
                  if (kBoolTrue == test_6) {
                    test_6 = GGS_bool (ComparisonKind::equal, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_30229.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
                    if (kBoolTrue == test_6) {
                      var_opt_28980 = GGS_bool (true) ;
                      outArgument_outOptimizationDone = GGS_bool (true) ;
                      var_optimizedInstructionList_28878.addAssign_operation (var_inst_30229, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 769)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 769)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("JSR ").add_operation (var_jsr_29085.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)).add_operation (GGS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 772)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_opt_28980.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 777)).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_optimizedInstructionList_28878.addAssign_operation (enumerator_28931.current_mInstruction (HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 778)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 778)) ;
      }
    }
    enumerator_28931.gotoNextObject () ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_10 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_optimizedInstructionList_28878, temp_10.readProperty_mUsesRCALL (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_8) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_11 = this ;
    outArgument_outOptimizedInstruction = temp_11 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                          const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                          const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                          const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_bool & outArgument_outOptimizationDone,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                          GGS_bool & outArgument_outNOPsubstitution,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_31839 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  GGS_bool joker_31872 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_31839, joker_31872, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 804)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_31839, temp_3.readProperty_mSkipIfSet (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                  const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  const GGS_lstring constinArgument_inBlockLabel,
                                                                                                  GGS_bool & outArgument_outOptimizationDone,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                  GGS_bool & outArgument_outNOPsubstitution,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32900 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GGS_bool joker_32933 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32900, joker_32933, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 839)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_32900, temp_3.readProperty_mCompareInstruction (), temp_4.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
    outArgument_outOptimizedInstruction = temp_5 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                  const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                  const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                  const GGS_lstring constinArgument_inBlockLabel,
                                                                                  GGS_bool & outArgument_outOptimizationDone,
                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                  GGS_bool & outArgument_outNOPsubstitution,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_33939 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  GGS_bool joker_33972 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_33939, joker_33972, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 873)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_33939, temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                          const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                          const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                          const GGS_ipic_31__38_SequentialInstructionList constinArgument_inInstructionList,
                                                                          const GGS_lstring constinArgument_inBlockLabel,
                                                                          GGS_bool & outArgument_outOptimizationDone,
                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                          GGS_ipic_31__38_SequentialInstructionList & outArgument_outOptimizedInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone.drop () ; // Release 'out' argument
  outArgument_outOptimizedInstructionList.drop () ; // Release 'out' argument
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outOptimizedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34990 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_34990.hasCurrentObject ()) {
    GGS_bool var_optimizationDone_35161 ;
    GGS_ipic_31__38_SequentialInstruction var_optimizedInstruction_35245 ;
    GGS_bool var_NOPsubstitution_35283 ;
    callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34990.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimizationDone_35161, ioArgument_ioListFileContents, var_optimizedInstruction_35245, var_NOPsubstitution_35283, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 913)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_optimizationDone_35161.boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outOptimizationDone = GGS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_NOPsubstitution_35283.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 926)).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outOptimizedInstructionList.addAssign_operation (var_optimizedInstruction_35245, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 927)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 927)) ;
      }
    }
    enumerator_34990.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (GGS_string & ioArgument_ioListFileContents,
                                                 GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optimizeFlagStruct var_optimizeFlagStruct_41040 = GGS_optimizeFlagStruct::init_21__21__21__21__21__21__21_ (GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (69)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)), GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (82)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1085)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1085)), GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (74)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1086)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1086)), GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (77)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1087)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1087)), GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (73)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)), GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (105)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)), GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (101)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)), inCompiler COMMA_HERE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("BLOCK REPRESENTATION OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Optimization flags:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [D] Dead code elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [E] Empty routine elimination: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mRemoveEmptyRoutine (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [e] In Computed RCALL, empty routine call replaced by BLANK: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [I] Call to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [i] In Computed RCALL, rcall to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [J] JSR followed by RETURN replaced by JUMP: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mJSRfollowedByRETreplacedByJUMP (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [M] MOVLW followed by RETURN replaced by RETLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mMOVLWfollowedByRETreplacedByRETLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [P] JUMP propagation: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1106)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [R] Call to RETLW replaced by MOVLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41040.readProperty_mJSRtoRETLWreplacedByMOVLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [U] Useless test elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1108)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Optimizations:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)) ;
      }
    }
  }
  GGS_bool var_optimizationDone_44152 = GGS_bool (true) ;
  GGS_uint var_optimizationPass_44188 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).isValid ()) {
    uint32_t variant_44211 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).uintValue () ;
    bool loop_44211 = true ;
    while (loop_44211) {
      loop_44211 = var_optimizationDone_44152.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).isValid () ;
      if (loop_44211) {
        loop_44211 = var_optimizationDone_44152.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).boolValue () ;
      }
      if (loop_44211 && (0 == variant_44211)) {
        loop_44211 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)) ;
      }
      if (loop_44211) {
        variant_44211 -- ;
        var_optimizationDone_44152 = GGS_bool (false) ;
        var_optimizationPass_44188 = var_optimizationPass_44188.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n--- Pass ").add_operation (var_optimizationPass_44188.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).add_operation (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).add_operation (GGS_string (" blocks)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)) ;
        GGS_uint var_blockCountBeforeOptimization_44505 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1120)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_print_3F_ (GGS_string ("  Pass ").add_operation (var_optimizationPass_44188.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)).add_operation (var_blockCountBeforeOptimization_44505.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)).add_operation (GGS_string (" blocks.\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)) ;
            }
          }
        }
        GGS_symbolTableForBlockOptimization var_symbolTable_44770 = GGS_symbolTableForBlockOptimization::init (inCompiler COMMA_HERE) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44828 (ioArgument_ioGeneratedBlockList, EnumerationOrder::up) ;
        GGS_uint index_44823 (uint32_t (0)) ;
        while (enumerator_44828.hasCurrentObject ()) {
          {
          var_symbolTable_44770.setter_insertKey (enumerator_44828.current_mBlock (HERE).readProperty_mLabel (), index_44823, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1127)) ;
          }
          enumerator_44828.gotoNextObject () ;
          index_44823.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1126)) ;
        }
        GGS_stringset var_referencedBlockSet_45014 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        cEnumerator_ipic_31__38_BlockList enumerator_45057 (ioArgument_ioGeneratedBlockList, EnumerationOrder::up) ;
        while (enumerator_45057.hasCurrentObject ()) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_45057.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1132)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              extensionMethod_enterReferencedLabels (enumerator_45057.current_mBlock (HERE), var_symbolTable_44770, ioArgument_ioGeneratedBlockList, var_referencedBlockSet_45014, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1133)) ;
            }
          }
          enumerator_45057.gotoNextObject () ;
        }
        GGS_ipic_31__38_BlockList var_optimizedBlockList_45372 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        cEnumerator_ipic_31__38_BlockList enumerator_45421 (ioArgument_ioGeneratedBlockList, EnumerationOrder::up) ;
        while (enumerator_45421.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_referencedBlockSet_45014.getter_hasKey (enumerator_45421.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)).operator_or (GGS_bool (ComparisonKind::notEqual, enumerator_45421.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GGS_ipic_31__38_Block var_optimizedBlock_45753 ;
              extensionMethod_optimize (enumerator_45421.current_mBlock (HERE), var_symbolTable_44770, var_optimizeFlagStruct_41040, ioArgument_ioGeneratedBlockList, var_optimizationDone_44152, ioArgument_ioListFileContents, var_optimizedBlock_45753, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1144)) ;
              var_optimizedBlockList_45372.addAssign_operation (var_optimizedBlock_45753  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1152)) ;
            }
          }
          if (kBoolFalse == test_3) {
            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  [D] ").add_operation (enumerator_45421.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)).add_operation (GGS_string (": not referenced, deleted\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)) ;
            var_optimizationDone_44152 = GGS_bool (true) ;
          }
          enumerator_45421.gotoNextObject () ;
        }
        ioArgument_ioGeneratedBlockList = var_optimizedBlockList_45372 ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No optimization.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1160)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1161)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1162)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                       GGS_string & ioArgument_ioGraphVizString,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GGS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)).add_operation (GGS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_1314 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_1314.hasCurrentObject ()) {
    callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_1314.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 39)) ;
    enumerator_1314.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildInstructionInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GGS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                              GGS_string & /* ioArgument_ioGraphVizString */,
                                                                              const GGS_bool /* constinArgument_inDottedArrow */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GGS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                     GGS_string & ioArgument_ioGraphVizString,
                                                                                     const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)).add_operation (GGS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                      GGS_string & ioArgument_ioGraphVizString,
                                                                                      const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)).add_operation (GGS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                    const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)).add_operation (GGS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_string & ioArgument_ioGraphVizString,
                                                                                          const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 125)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_string & ioArgument_ioGraphVizString,
                                                                                          const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 135)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_string & ioArgument_ioGraphVizString,
                                                                                    const GGS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 145)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 146)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                             GGS_string & ioArgument_ioGraphVizString,
                                                                             const GGS_bool constinArgument_inDottedArrow,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inDottedArrow.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGraphVizString.plusAssign_operation(GGS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 157)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 159)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_buildTerminatorInvocationGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                        GGS_string & ioArgument_ioGraphVizString,
                                                                                        const GGS_bool constinArgument_inDottedArrow,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (temp_0.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inDottedArrow.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGraphVizString.plusAssign_operation(GGS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 170)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 172)) ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inDottedArrow.boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGraphVizString.plusAssign_operation(GGS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 175)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GGS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 177)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ReturnTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetlwTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetfieTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_JumpTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  result_outResult = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_needToInsertJumpInstruction (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                     Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_AbstractConditionTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)).operator_and (callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 262)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 271)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_needToInsertJumpInstruction (const GGS_string constinArgument_inNextBlockLabel,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 280)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                          GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_0.readProperty_mLabel () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 299)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                     GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_0.readProperty_mTargetLabelWhenTrue () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 307)) ;
  }
  {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_1.readProperty_mTargetLabelWhenFalse () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 308)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                       GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 316)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                 GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 327)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                                    GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 338)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 342)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_buildTerminatorOrderedGraph (const GGS_lstring constinArgument_inBlockLabel,
                                                                            GGS_blockInvocationGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 353)) ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 357)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedGraph&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedGraph_26__3F__26_ (GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                            const GGS_string constinArgument_inSourceFileName,
                                            GGS_string & ioArgument_ioListFileContents,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("BLOCK ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Block ordering optimization:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 376)) ;
  GGS_uint var_n_13026 = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 377)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  jump count before optimization: ").add_operation (var_n_13026.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Block ordering optimization... "), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 381)) ;
      }
    }
  }
  GGS_symbolTableForBlockOptimization var_symbolTable_13292 = GGS_symbolTableForBlockOptimization::init (inCompiler COMMA_HERE) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13348 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  GGS_uint index_13343 (uint32_t (0)) ;
  while (enumerator_13348.hasCurrentObject ()) {
    {
    var_symbolTable_13292.setter_insertKey (enumerator_13348.current_mBlock (HERE).readProperty_mLabel (), index_13343, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 386)) ;
    }
    enumerator_13348.gotoNextObject () ;
    index_13343.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 385)) ;
  }
  GGS_blockInvocationGraph var_g_13461 = GGS_blockInvocationGraph::init (inCompiler COMMA_HERE) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13497 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  while (enumerator_13497.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_13497.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 391)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_g_13461.setter_addNode (enumerator_13497.current_mBlock (HERE).readProperty_mLabel (), enumerator_13497.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 392)) ;
        }
        callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13497.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_13497.current_mBlock (HERE).readProperty_mLabel (), var_g_13461, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 393)) ;
      }
    }
    enumerator_13497.gotoNextObject () ;
  }
  GGS_lstringlist var_nodeList_13791 ;
  GGS_stringlist joker_13770 ; // Joker input parameter
  var_g_13461.method_nodesWithNoPredecessor (joker_13770, var_nodeList_13791 COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 397)) ;
  GGS_stringlist var_newOrderedLabelList_13807 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_visitedNodeSet_13849 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_clusterList var_clusterList_13885 = GGS_clusterList::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_13921 (var_nodeList_13791, EnumerationOrder::up) ;
  while (enumerator_13921.hasCurrentObject ()) {
    GGS_blockInvocationGraph var_gg_13975 = var_g_13461.getter_subgraphFromNodes (GGS_lstringlist::class_func_listWithValue (enumerator_13921.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 403)), var_visitedNodeSet_13849, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 402)) ;
    cEnumerator_stringlist enumerator_14084 (var_gg_13975.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 406)), EnumerationOrder::up) ;
    while (enumerator_14084.hasCurrentObject ()) {
      var_visitedNodeSet_13849.addAssign_operation (enumerator_14084.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 407)) ;
      enumerator_14084.gotoNextObject () ;
    }
    {
    var_gg_13975.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 409)) ;
    }
    GGS_stringlist var_partialOrderedLabelList_14265 ;
    GGS_lstringlist joker_14295_3 ; // Joker input parameter
    GGS_stringlist joker_14295_2 ; // Joker input parameter
    GGS_lstringlist joker_14295_1 ; // Joker input parameter
    var_gg_13975.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 410)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_14265, joker_14295_3, joker_14295_2, joker_14295_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 410)) ;
    var_newOrderedLabelList_13807.plusAssign_operation(var_partialOrderedLabelList_14265, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 414)) ;
    GGS_ipic_31__38_BlockList var_cluster_14364 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
    cEnumerator_stringlist enumerator_14402 (var_partialOrderedLabelList_14265, EnumerationOrder::up) ;
    while (enumerator_14402.hasCurrentObject ()) {
      GGS_uint var_blockIndex_14499 ;
      var_symbolTable_13292.method_searchKey (enumerator_14402.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 417)), var_blockIndex_14499, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 417)) ;
      GGS_ipic_31__38_Block var_b_14534 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_14499, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 418)) ;
      var_cluster_14364.addAssign_operation (var_b_14534  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 419)) ;
      enumerator_14402.gotoNextObject () ;
    }
    var_clusterList_13885.addAssign_operation (var_cluster_14364  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 421)) ;
    enumerator_13921.gotoNextObject () ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_14725 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  while (enumerator_14725.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_14725.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 425)))).operator_and (var_visitedNodeSet_13849.getter_hasKey (enumerator_14725.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 426)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 426)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 425)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GGS_blockInvocationGraph var_gg_14910 = var_g_13461.getter_subgraphFromNodes (GGS_lstringlist::class_func_listWithValue (enumerator_14725.current_mBlock (HERE).readProperty_mLabel ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 428)), var_visitedNodeSet_13849, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 427)) ;
        cEnumerator_stringlist enumerator_15034 (var_gg_14910.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 431)), EnumerationOrder::up) ;
        while (enumerator_15034.hasCurrentObject ()) {
          var_visitedNodeSet_13849.addAssign_operation (enumerator_15034.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 432)) ;
          enumerator_15034.gotoNextObject () ;
        }
        {
        var_gg_14910.setter_removeEdgesToNode (enumerator_14725.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 434)) ;
        }
        {
        var_gg_14910.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 435)) ;
        }
        GGS_stringlist var_partialOrderedLabelList_15274 ;
        GGS_lstringlist joker_15306_3 ; // Joker input parameter
        GGS_stringlist joker_15306_2 ; // Joker input parameter
        GGS_lstringlist joker_15306_1 ; // Joker input parameter
        var_gg_14910.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 436)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_15274, joker_15306_3, joker_15306_2, joker_15306_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 436)) ;
        var_newOrderedLabelList_13807.plusAssign_operation(var_partialOrderedLabelList_15274, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 440)) ;
        GGS_ipic_31__38_BlockList var_cluster_15381 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        cEnumerator_stringlist enumerator_15421 (var_partialOrderedLabelList_15274, EnumerationOrder::up) ;
        while (enumerator_15421.hasCurrentObject ()) {
          GGS_uint var_blockIndex_15520 ;
          var_symbolTable_13292.method_searchKey (enumerator_15421.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 443)), var_blockIndex_15520, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 443)) ;
          GGS_ipic_31__38_Block var_b_15557 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15520, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 444)) ;
          var_cluster_15381.addAssign_operation (var_b_15557  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 445)) ;
          enumerator_15421.gotoNextObject () ;
        }
        var_clusterList_13885.addAssign_operation (var_cluster_15381  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 447)) ;
      }
    }
    enumerator_14725.gotoNextObject () ;
  }
  GGS_ipic_31__38_BlockList var_orderedBlockList_15732 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continue_15823 = GGS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_15846 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  bool bool_3 = var_continue_15823.isValidAndTrue () ;
  if (enumerator_15846.hasCurrentObject () && bool_3) {
    while (enumerator_15846.hasCurrentObject () && bool_3) {
      var_continue_15823 = GGS_bool (ComparisonKind::notEqual, enumerator_15846.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 455)))) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_continue_15823.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_orderedBlockList_15732.addAssign_operation (enumerator_15846.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 457)) ;
        }
      }
      enumerator_15846.gotoNextObject () ;
      if (enumerator_15846.hasCurrentObject ()) {
        bool_3 = var_continue_15823.isValidAndTrue () ;
      }
    }
  }
  cEnumerator_stringlist enumerator_16037 (var_newOrderedLabelList_13807, EnumerationOrder::up) ;
  while (enumerator_16037.hasCurrentObject ()) {
    GGS_uint var_blockIndex_16128 ;
    var_symbolTable_13292.method_searchKey (enumerator_16037.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 462)), var_blockIndex_16128, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 462)) ;
    GGS_ipic_31__38_Block var_b_16161 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_16128, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 463)) ;
    var_orderedBlockList_15732.addAssign_operation (var_b_16161  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 464)) ;
    enumerator_16037.gotoNextObject () ;
  }
  GGS_uint var_insertionIndex_16297 = var_orderedBlockList_15732.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas", 467)) ;
  var_continue_15823 = GGS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16366 (ioArgument_ioBlockList, EnumerationOrder::down) ;
  bool bool_5 = var_continue_15823.isValidAndTrue () ;
  if (enumerator_16366.hasCurrentObject () && bool_5) {
    while (enumerator_16366.hasCurrentObject () && bool_5) {
      var_continue_15823 = GGS_bool (ComparisonKind::notEqual, enumerator_16366.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 470)))) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_continue_15823.boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          var_orderedBlockList_15732.setter_insertAtIndex (enumerator_16366.current_mBlock (HERE), var_insertionIndex_16297, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 472)) ;
          }
        }
      }
      enumerator_16366.gotoNextObject () ;
      if (enumerator_16366.hasCurrentObject ()) {
        bool_5 = var_continue_15823.isValidAndTrue () ;
      }
    }
  }
  GGS_uint var_p_16602 = function_blockDiscontinuityCount (var_orderedBlockList_15732, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 476)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  jump count after optimization: ").add_operation (var_p_16602.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 478)).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      routine_print_3F_ (var_n_13026.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (var_p_16602.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GGS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      GGS_bool joker_17003 ; // Joker input parameter
      var_g_13461.getter_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas", 483)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GGS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)), joker_17003, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)) ;
    }
  }
  GGS_stringset var_newSymbolSet_17047 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_bool var_ok_17087 = GGS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_17104 (var_orderedBlockList_15732, EnumerationOrder::up) ;
  while (enumerator_17104.hasCurrentObject ()) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_newSymbolSet_17047.getter_hasKey (enumerator_17104.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 489)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GGS_string var_s_17210 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17104.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 490)).add_operation (GGS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 491)) ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 492)), var_s_17210, fixItArray10  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 492)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_s_17210.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)) ;
        var_ok_17087 = GGS_bool (false) ;
      }
    }
    if (kBoolFalse == test_9) {
      var_newSymbolSet_17047.addAssign_operation (enumerator_17104.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 496)) ;
    }
    enumerator_17104.gotoNextObject () ;
  }
  cEnumerator_symbolTableForBlockOptimization enumerator_17473 (var_symbolTable_13292, EnumerationOrder::up) ;
  while (enumerator_17473.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_newSymbolSet_17047.getter_hasKey (enumerator_17473.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GGS_string var_s_17564 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 501)).add_operation (GGS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 502)) ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 503)), var_s_17564, fixItArray12  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 503)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_s_17564.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)) ;
        var_ok_17087 = GGS_bool (false) ;
      }
    }
    enumerator_17473.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_ok_17087.boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioBlockList = var_orderedBlockList_15732 ;
      {
      routine_displayBlockList_3F__26__3F_ (GGS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList_15732, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 511)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    GGS_string var_s_17992 = GGS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    TC_Array <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 514)), var_s_17992, fixItArray14  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 514)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_17992.add_operation (GGS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)) ;
    {
    routine_displayBlockList_3F__26__3F_ (GGS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList_15732, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 516)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = var_ok_17087.boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      routine_perform_5F_cluster_5F_ordering_3F__26__26_ (var_clusterList_13885, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 520)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildInvocationGraph?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildInvocationGraph_3F__21_ (const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                           GGS_string & outArgument_outGraphVizString,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGraphVizString.drop () ; // Release 'out' argument
  outArgument_outGraphVizString = GGS_string ("digraph G {\n") ;
  outArgument_outGraphVizString.plusAssign_operation(GGS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 534)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_18746 (constinArgument_inBlockList, EnumerationOrder::up) ;
  while (enumerator_18746.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_18746.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 536)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outGraphVizString.plusAssign_operation(GGS_string ("  \"").add_operation (enumerator_18746.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)).add_operation (GGS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)) ;
      }
    }
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_18940 (enumerator_18746.current_mBlock (HERE).readProperty_mInstructionList (), EnumerationOrder::up) ;
    while (enumerator_18940.hasCurrentObject ()) {
      callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_18940.current_mInstruction (HERE).ptr (), enumerator_18746.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 540)) ;
      enumerator_18940.gotoNextObject () ;
    }
    callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18746.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_18746.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 542)) ;
    enumerator_18746.gotoNextObject () ;
  }
  outArgument_outGraphVizString.plusAssign_operation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 544)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'blockDiscontinuityCount'
//
//--------------------------------------------------------------------------------------------------

GGS_uint function_blockDiscontinuityCount (const GGS_ipic_31__38_BlockList & constinArgument_inBlockList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outResult ; // Returned variable
  result_outResult = GGS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_19393 (constinArgument_inBlockList, EnumerationOrder::up) ;
  GGS_uint index_19388 (uint32_t (0)) ;
  while (enumerator_19393.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_19393.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 552)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_nextBlockLabel_19517 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::lowerThan, index_19388.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 554)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas", 554)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_nextBlockLabel_19517 = constinArgument_inBlockList.getter_mBlockAtIndex (index_19388.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 555)).readProperty_mLabel ().readProperty_string () ;
          }
        }
        if (kBoolFalse == test_1) {
          var_nextBlockLabel_19517 = GGS_string::makeEmptyString () ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19393.current_mBlock (HERE).readProperty_mTerminator ().ptr (), var_nextBlockLabel_19517, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 559)).boolEnum () ;
          if (kBoolTrue == test_2) {
            result_outResult.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 560)) ;
          }
        }
      }
    }
    enumerator_19393.gotoNextObject () ;
    index_19388.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 551)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_blockDiscontinuityCount [2] = {
  & kTypeDescriptor_GALGAS_ipic_31__38_BlockList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_blockDiscontinuityCount (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList operand0 = GGS_ipic_31__38_BlockList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                       inCompiler
                                                                                       COMMA_THERE) ;
  return function_blockDiscontinuityCount (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_blockDiscontinuityCount ("blockDiscontinuityCount",
                                                                         functionWithGenericHeader_blockDiscontinuityCount,
                                                                         & kTypeDescriptor_GALGAS_uint,
                                                                         1,
                                                                         functionArgs_blockDiscontinuityCount) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlockOrdering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (const GGS_string constinArgument_inSourceFileName,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_string var_invocationGraph_20187 ;
      {
      routine_buildInvocationGraph_3F__21_ (ioArgument_ioGeneratedBlockList, var_invocationGraph_20187, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 573)) ;
      }
      GGS_bool joker_20301 ; // Joker input parameter
      var_invocationGraph_20187.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GGS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 574)), joker_20301, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 574)) ;
    }
  }
  GGS_bool var_optimize_20328 = GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 578)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 577)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_optimize_20328.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildOrderedGraph_26__3F__26_ (ioArgument_ioGeneratedBlockList, constinArgument_inSourceFileName, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 580)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_sortKey (const GGS_clusterList & constinArgument_inClusterList,
                             Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outKey ; // Returned variable
  result_outKey = GGS_string::makeEmptyString () ;
  cEnumerator_clusterList enumerator_604 (constinArgument_inClusterList, EnumerationOrder::up) ;
  while (enumerator_604.hasCurrentObject ()) {
    result_outKey.plusAssign_operation(enumerator_604.current_mBlockList (HERE).getter_mBlockAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)).readProperty_mLabel ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)) ;
    if (enumerator_604.hasNextObject ()) {
      result_outKey.plusAssign_operation(GGS_string ("."), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 25)) ;
    }
    enumerator_604.gotoNextObject () ;
  }
//---
  return result_outKey ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_sortKey [2] = {
  & kTypeDescriptor_GALGAS_clusterList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_sortKey (Compiler * inCompiler,
                                                     const cObjectArray & inEffectiveParameterArray,
                                                     const GGS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_clusterList operand0 = GGS_clusterList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_sortKey (operand0,
                           inCompiler
                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_sortKey ("sortKey",
                                                         functionWithGenericHeader_sortKey,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         1,
                                                         functionArgs_sortKey) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_cluster_ordering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const GGS_clusterList constinArgument_inInitialClusterList,
                                                         GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimize_964 = GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_and (GGS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 35)).operator_and (GGS_bool (gOption_piccolo_5F_options_doNotReorderCluster.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_optimize_964.operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 38)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Option '--").add_operation (GGS_string (gOption_piccolo_5F_options_doNotReorderCluster.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)).add_operation (GGS_string ("': this optimization is not performed.n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GGS_uint var_clusterCount_1407 = constinArgument_inInitialClusterList.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("CLUSTER ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)) ;
    GGS_string temp_1 ;
    const enumGalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, var_clusterCount_1407.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GGS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_s_1733 = GGS_string ("Cluster ordering optimization (").add_operation (var_clusterCount_1407.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GGS_string (" cluster"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GGS_string ("):\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1733.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 48)).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_print_3F_ (var_s_1733, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 49)) ;
        }
      }
    }
    GGS_clusterList var_clusterList_2019 = constinArgument_inInitialClusterList ;
    GGS_neededConversionForClusterOrder var_neededConversionForClusterOrder_2062 = GGS_neededConversionForClusterOrder::init (inCompiler COMMA_HERE) ;
    GGS_bool var_continue_2145 = GGS_bool (true) ;
    GGS_uint var_pass_2175 = GGS_uint (uint32_t (0U)) ;
    if (var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).isValid ()) {
      uint32_t variant_2188 = var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).uintValue () ;
      bool loop_2188 = true ;
      while (loop_2188) {
        loop_2188 = var_continue_2145.isValid () ;
        if (loop_2188) {
          loop_2188 = var_continue_2145.boolValue () ;
        }
        if (loop_2188 && (0 == variant_2188)) {
          loop_2188 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)) ;
        }
        if (loop_2188) {
          variant_2188 -- ;
          var_pass_2175.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 58)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Pass ").add_operation (var_pass_2175.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)) ;
          GGS_ipic_31__38_BlockList var_workingBlockList_2387 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
          GGS_symbolTableForClusterOrdering var_symbolTable_2435 = GGS_symbolTableForClusterOrdering::init (inCompiler COMMA_HERE) ;
          cEnumerator_clusterList enumerator_2493 (var_clusterList_2019, EnumerationOrder::up) ;
          GGS_uint index_2488 (uint32_t (0)) ;
          while (enumerator_2493.hasCurrentObject ()) {
            var_workingBlockList_2387.plusAssign_operation(enumerator_2493.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 64)) ;
            cEnumerator_ipic_31__38_BlockList enumerator_2590 (enumerator_2493.current_mBlockList (HERE), EnumerationOrder::up) ;
            while (enumerator_2590.hasCurrentObject ()) {
              {
              var_symbolTable_2435.setter_insertKey (enumerator_2590.current_mBlock (HERE).readProperty_mLabel (), index_2488, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 66)) ;
              }
              enumerator_2590.gotoNextObject () ;
            }
            enumerator_2493.gotoNextObject () ;
            index_2488.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 63)) ;
          }
          GGS_uint var_insertionIdx_2769 = var_workingBlockList_2387.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 70)) ;
          cEnumerator_ipic_31__38_BlockList enumerator_2822 (ioArgument_ioBlockList, EnumerationOrder::down) ;
          bool bool_4 = var_continue_2145.isValidAndTrue () ;
          if (enumerator_2822.hasCurrentObject () && bool_4) {
            while (enumerator_2822.hasCurrentObject () && bool_4) {
              var_continue_2145 = GGS_bool (ComparisonKind::notEqual, enumerator_2822.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 72)))) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_continue_2145.boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_symbolTable_2435.setter_insertKey (enumerator_2822.current_mBlock (HERE).readProperty_mLabel (), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)) ;
                  }
                  {
                  var_workingBlockList_2387.setter_insertAtIndex (enumerator_2822.current_mBlock (HERE), var_insertionIdx_2769, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 75)) ;
                  }
                }
              }
              enumerator_2822.gotoNextObject () ;
              if (enumerator_2822.hasCurrentObject ()) {
                bool_4 = var_continue_2145.isValidAndTrue () ;
              }
            }
          }
          GGS_branchOverflowMap var_overflowMap_3267 ;
          {
          routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (var_workingBlockList_2387, ioArgument_ioBlockList, var_overflowMap_3267, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 79)) ;
          }
          GGS_uint var_overflowCount_3303 = GGS_uint (uint32_t (0U)) ;
          cEnumerator_branchOverflowMapDictionary enumerator_3336 (var_overflowMap_3267.readProperty_dictionary (), EnumerationOrder::up) ;
          while (enumerator_3336.hasCurrentObject ()) {
            cEnumerator_stringlist enumerator_3385 (enumerator_3336.current_mList (HERE), EnumerationOrder::up) ;
            while (enumerator_3385.hasCurrentObject ()) {
              var_overflowCount_3303.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 87)) ;
              GGS_uint var_sourceCluster_3494 ;
              var_symbolTable_2435.method_searchKey (enumerator_3336.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), var_sourceCluster_3494, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)) ;
              GGS_uint var_targetCluster_3571 ;
              var_symbolTable_2435.method_searchKey (enumerator_3385.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)), var_targetCluster_3571, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  ").add_operation (enumerator_3336.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GGS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_sourceCluster_3494.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GGS_string (") --> "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (enumerator_3385.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GGS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_targetCluster_3571.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)) ;
              enumerator_3385.gotoNextObject () ;
            }
            enumerator_3336.gotoNextObject () ;
          }
          {
          var_neededConversionForClusterOrder_2062.setter_insertKey (function_sortKey (var_clusterList_2019, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)), var_overflowCount_3303, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 93)) ;
          }
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 97)).boolEnum () ;
            if (kBoolTrue == test_6) {
              GGS_string var_s_3928 = GGS_string ("  Pass ").add_operation (var_pass_2175.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)) ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GGS_bool (ComparisonKind::equal, var_overflowCount_3303.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_s_3928.plusAssign_operation(GGS_string ("no branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 100)) ;
                }
              }
              if (kBoolFalse == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_overflowCount_3303.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    var_s_3928.plusAssign_operation(GGS_string ("1 branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  var_s_3928.plusAssign_operation(var_overflowCount_3303.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)).add_operation (GGS_string (" branch overflows"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)) ;
                }
              }
              {
              routine_print_3F_ (var_s_3928, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 106)) ;
              }
            }
          }
          GGS_bool var_correctionLoop_4250 = GGS_bool (true) ;
          cEnumerator_branchOverflowMapDictionary enumerator_4287 (var_overflowMap_3267.readProperty_dictionary (), EnumerationOrder::up) ;
          bool bool_9 = var_correctionLoop_4250.isValidAndTrue () ;
          if (enumerator_4287.hasCurrentObject () && bool_9) {
            while (enumerator_4287.hasCurrentObject () && bool_9) {
              cEnumerator_stringlist enumerator_4357 (enumerator_4287.current_mList (HERE), EnumerationOrder::up) ;
              bool bool_10 = var_correctionLoop_4250.isValidAndTrue () ;
              if (enumerator_4357.hasCurrentObject () && bool_10) {
                while (enumerator_4357.hasCurrentObject () && bool_10) {
                  GGS_uint var_targetCluster_4461 ;
                  var_symbolTable_2435.method_searchKey (enumerator_4357.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)), var_targetCluster_4461, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_targetCluster_4461.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 113)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      GGS_uint var_sourceCluster_4583 ;
                      var_symbolTable_2435.method_searchKey (enumerator_4287.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)), var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)) ;
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GGS_bool (ComparisonKind::equal, var_sourceCluster_4583.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 115)).objectCompare (var_targetCluster_4461)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_correctionLoop_4250 = GGS_bool (false) ;
                          var_continue_2145 = GGS_bool (true) ;
                          GGS_ipic_31__38_BlockList var_last_4787 ;
                          {
                          var_clusterList_2019.setter_removeAtIndex (var_last_4787, var_targetCluster_4461, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 118)) ;
                          }
                          GGS_ipic_31__38_BlockList var_first_4874 ;
                          {
                          var_clusterList_2019.setter_removeAtIndex (var_first_4874, var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)) ;
                          }
                          {
                          var_clusterList_2019.setter_insertAtIndex (var_first_4874.add_operation (var_last_4787, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)), var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)) ;
                          }
                          GGS_string var_m_4996 = GGS_string ("merge #").add_operation (var_targetCluster_4461.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GGS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (var_sourceCluster_4583.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)) ;
                          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  --> ").add_operation (var_m_4996, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)) ;
                          enumGalgasBool test_13 = kBoolTrue ;
                          if (kBoolTrue == test_13) {
                            test_13 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 123)).boolEnum () ;
                            if (kBoolTrue == test_13) {
                              {
                              routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_4996, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)) ;
                              }
                            }
                          }
                        }
                      }
                      if (kBoolFalse == test_12) {
                        enumGalgasBool test_14 = kBoolTrue ;
                        if (kBoolTrue == test_14) {
                          test_14 = GGS_bool (ComparisonKind::equal, var_sourceCluster_4583.objectCompare (var_targetCluster_4461.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 126)))).boolEnum () ;
                          if (kBoolTrue == test_14) {
                            var_correctionLoop_4250 = GGS_bool (false) ;
                            var_continue_2145 = GGS_bool (true) ;
                            GGS_ipic_31__38_BlockList var_last_5411 ;
                            {
                            var_clusterList_2019.setter_removeAtIndex (var_last_5411, var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 129)) ;
                            }
                            GGS_ipic_31__38_BlockList var_first_5498 ;
                            {
                            var_clusterList_2019.setter_removeAtIndex (var_first_5498, var_targetCluster_4461, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)) ;
                            }
                            {
                            var_clusterList_2019.setter_insertAtIndex (var_first_5498.add_operation (var_last_5411, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)), var_targetCluster_4461, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)) ;
                            }
                            GGS_string var_m_5620 = GGS_string ("merge #").add_operation (var_sourceCluster_4583.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GGS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (var_targetCluster_4461.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)) ;
                            ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  --> ").add_operation (var_m_5620, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)) ;
                            enumGalgasBool test_15 = kBoolTrue ;
                            if (kBoolTrue == test_15) {
                              test_15 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 134)).boolEnum () ;
                              if (kBoolTrue == test_15) {
                                {
                                routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_5620, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135)) ;
                                }
                              }
                            }
                          }
                        }
                        if (kBoolFalse == test_14) {
                          enumGalgasBool test_16 = kBoolTrue ;
                          if (kBoolTrue == test_16) {
                            test_16 = GGS_bool (ComparisonKind::lowerThan, var_sourceCluster_4583.objectCompare (var_targetCluster_4461)).boolEnum () ;
                            if (kBoolTrue == test_16) {
                              GGS_clusterList var_candidate_5927 = var_clusterList_2019 ;
                              GGS_ipic_31__38_BlockList var_b_6014 ;
                              {
                              var_candidate_5927.setter_removeAtIndex (var_b_6014, var_targetCluster_4461, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)) ;
                              }
                              {
                              var_candidate_5927.setter_insertAtIndex (var_b_6014, var_targetCluster_4461.add_operation (var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)) ;
                              }
                              enumGalgasBool test_17 = kBoolTrue ;
                              if (kBoolTrue == test_17) {
                                test_17 = var_neededConversionForClusterOrder_2062.getter_hasKey (function_sortKey (var_candidate_5927, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).boolEnum () ;
                                if (kBoolTrue == test_17) {
                                  var_clusterList_2019 = var_candidate_5927 ;
                                  var_correctionLoop_4250 = GGS_bool (false) ;
                                  var_continue_2145 = GGS_bool (true) ;
                                  GGS_string var_m_6344 = GGS_string ("roll up [#").add_operation (var_targetCluster_4461.add_operation (var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GGS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (var_targetCluster_4461.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)) ;
                                  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  --> ").add_operation (var_m_6344, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)) ;
                                  enumGalgasBool test_18 = kBoolTrue ;
                                  if (kBoolTrue == test_18) {
                                    test_18 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 147)).boolEnum () ;
                                    if (kBoolTrue == test_18) {
                                      {
                                      routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_6344, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148)) ;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if (kBoolFalse == test_16) {
                            enumGalgasBool test_19 = kBoolTrue ;
                            if (kBoolTrue == test_19) {
                              test_19 = GGS_bool (ComparisonKind::greaterThan, var_sourceCluster_4583.objectCompare (var_targetCluster_4461)).boolEnum () ;
                              if (kBoolTrue == test_19) {
                                GGS_clusterList var_candidate_6700 = var_clusterList_2019 ;
                                GGS_ipic_31__38_BlockList var_b_6787 ;
                                {
                                var_candidate_6700.setter_removeAtIndex (var_b_6787, var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)) ;
                                }
                                {
                                var_candidate_6700.setter_insertAtIndex (var_b_6787, var_targetCluster_4461.add_operation (var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)) ;
                                }
                                enumGalgasBool test_20 = kBoolTrue ;
                                if (kBoolTrue == test_20) {
                                  test_20 = var_neededConversionForClusterOrder_2062.getter_hasKey (function_sortKey (var_candidate_6700, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).boolEnum () ;
                                  if (kBoolTrue == test_20) {
                                    var_clusterList_2019 = var_candidate_6700 ;
                                    var_correctionLoop_4250 = GGS_bool (false) ;
                                    var_continue_2145 = GGS_bool (true) ;
                                    GGS_string var_m_7117 = GGS_string ("roll up [#").add_operation (var_targetCluster_4461.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GGS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (var_targetCluster_4461.add_operation (var_sourceCluster_4583, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)) ;
                                    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  --> ").add_operation (var_m_7117, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)) ;
                                    enumGalgasBool test_21 = kBoolTrue ;
                                    if (kBoolTrue == test_21) {
                                      test_21 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 161)).boolEnum () ;
                                      if (kBoolTrue == test_21) {
                                        {
                                        routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_7117, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162)) ;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  enumerator_4357.gotoNextObject () ;
                  if (enumerator_4357.hasCurrentObject ()) {
                    bool_10 = var_correctionLoop_4250.isValidAndTrue () ;
                  }
                }
              }
              enumerator_4287.gotoNextObject () ;
              if (enumerator_4287.hasCurrentObject ()) {
                bool_9 = var_correctionLoop_4250.isValidAndTrue () ;
              }
            }
          }
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 169)).boolEnum () ;
            if (kBoolTrue == test_22) {
              {
              routine_print_3F_ (GGS_string (".\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 170)) ;
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 173)).boolEnum () ;
      if (kBoolTrue == test_23) {
        {
        routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 174)) ;
        }
      }
    }
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 176)) ;
    GGS_ipic_31__38_BlockList var_newBlockList_7699 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
    var_continue_2145 = GGS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_7805 (ioArgument_ioBlockList, EnumerationOrder::up) ;
    bool bool_24 = var_continue_2145.isValidAndTrue () ;
    if (enumerator_7805.hasCurrentObject () && bool_24) {
      while (enumerator_7805.hasCurrentObject () && bool_24) {
        var_continue_2145 = GGS_bool (ComparisonKind::notEqual, enumerator_7805.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 182)))) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_continue_2145.boolEnum () ;
          if (kBoolTrue == test_25) {
            var_newBlockList_7699.addAssign_operation (enumerator_7805.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 184)) ;
          }
        }
        enumerator_7805.gotoNextObject () ;
        if (enumerator_7805.hasCurrentObject ()) {
          bool_24 = var_continue_2145.isValidAndTrue () ;
        }
      }
    }
    cEnumerator_clusterList enumerator_8006 (var_clusterList_2019, EnumerationOrder::up) ;
    while (enumerator_8006.hasCurrentObject ()) {
      var_newBlockList_7699.plusAssign_operation(enumerator_8006.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 189)) ;
      enumerator_8006.gotoNextObject () ;
    }
    GGS_uint var_insertionIndex_8135 = var_newBlockList_7699.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 192)) ;
    var_continue_2145 = GGS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_8204 (ioArgument_ioBlockList, EnumerationOrder::down) ;
    bool bool_26 = var_continue_2145.isValidAndTrue () ;
    if (enumerator_8204.hasCurrentObject () && bool_26) {
      while (enumerator_8204.hasCurrentObject () && bool_26) {
        var_continue_2145 = GGS_bool (ComparisonKind::notEqual, enumerator_8204.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 195)))) ;
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_continue_2145.boolEnum () ;
          if (kBoolTrue == test_27) {
            {
            var_newBlockList_7699.setter_insertAtIndex (enumerator_8204.current_mBlock (HERE), var_insertionIndex_8135, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 197)) ;
            }
          }
        }
        enumerator_8204.gotoNextObject () ;
        if (enumerator_8204.hasCurrentObject ()) {
          bool_26 = var_continue_2145.isValidAndTrue () ;
        }
      }
    }
    ioArgument_ioBlockList = var_newBlockList_7699 ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performRelativesResolution?&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_performRelativesResolution_3F__26__26__26_ (const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                         GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GGS_uint & ioArgument_ioConversionCount,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList var_modifiedBlockList_1588 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_1639 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1668 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  GGS_uint index_1663 (uint32_t (0)) ;
  while (enumerator_1668.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1723 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1663.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)).objectCompare (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1723 = ioArgument_ioBlockList.getter_mBlockAtIndex (index_1663.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1723 = GGS_string::makeEmptyString () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_1668.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 65)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_blockStartAddress_1639 = enumerator_1668.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    GGS_ipic_31__38_Block var_modifiedBlock_2202 ;
    extensionMethod_performRelativesResolution (enumerator_1668.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel_1723, var_blockStartAddress_1639, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock_2202, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 68)) ;
    var_modifiedBlockList_1588.addAssign_operation (var_modifiedBlock_2202  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 76)) ;
    GGS_uint var_blockSize_2276 = extensionGetter_blockSize (enumerator_1668.current_mBlock (HERE), var_nextBlockLabel_1723, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 77)) ;
    var_blockStartAddress_1639 = var_blockStartAddress_1639.add_operation (var_blockSize_2276, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 78)) ;
    enumerator_1668.gotoNextObject () ;
    index_1663.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList_1588 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'computeLabelAbsoluteAddressMap??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                             const GGS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GGS_symbolTableForRelativesResolution & outArgument_outSymbolTable,
                                                             GGS_uint & outArgument_outFreeAddress,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSymbolTable.drop () ; // Release 'out' argument
  outArgument_outFreeAddress.drop () ; // Release 'out' argument
  outArgument_outSymbolTable = GGS_symbolTableForRelativesResolution::init (inCompiler COMMA_HERE) ;
  outArgument_outFreeAddress = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 106)) ;
  GGS_uint var_blockStartAddress_3325 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_3354 (constinArgument_inGeneratedBlockList, EnumerationOrder::up) ;
  GGS_uint index_3349 (uint32_t (0)) ;
  while (enumerator_3354.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_3418 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_3349.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_3418 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_3349.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_3418 = GGS_string::makeEmptyString () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_3354.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 116)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_blockStartAddress_3325 = enumerator_3354.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    {
    outArgument_outSymbolTable.setter_insertKey (enumerator_3354.current_mBlock (HERE).readProperty_mLabel (), var_blockStartAddress_3325, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 119)) ;
    }
    GGS_uint var_blockSize_3812 = extensionGetter_blockSize (enumerator_3354.current_mBlock (HERE), var_nextBlockLabel_3418, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 120)) ;
    var_blockStartAddress_3325 = var_blockStartAddress_3325.add_operation (var_blockSize_3812, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 121)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_3354.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 122)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outFreeAddress = var_blockStartAddress_3325 ;
      }
    }
    enumerator_3354.gotoNextObject () ;
    index_3349.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 109)) ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_4042 (constinArgument_inInitialBlockList, EnumerationOrder::up) ;
  while (enumerator_4042.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_4042.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 128)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = outArgument_outSymbolTable.getter_hasKey (enumerator_4042.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            outArgument_outSymbolTable.setter_insertKey (enumerator_4042.current_mBlock (HERE).readProperty_mLabel (), enumerator_4042.current_mBlock (HERE).readProperty_mAddress (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 130)) ;
            }
          }
        }
      }
    }
    enumerator_4042.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (GGS_string & ioArgument_ioListFileContents,
                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 142)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Relative branch conversion to absolute:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 143)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("RELATIVES RESOLUTION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)) ;
  GGS_bool var_resolutionDone_4854 = GGS_bool (false) ;
  GGS_uint var_pass_4889 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).isValid ()) {
    uint32_t variant_4900 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).uintValue () ;
    bool loop_4900 = true ;
    while (loop_4900) {
      loop_4900 = var_resolutionDone_4854.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).isValid () ;
      if (loop_4900) {
        loop_4900 = var_resolutionDone_4854.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).boolValue () ;
      }
      if (loop_4900 && (0 == variant_4900)) {
        loop_4900 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)) ;
      }
      if (loop_4900) {
        variant_4900 -- ;
        var_pass_4889.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 153)) ;
        GGS_symbolTableForRelativesResolution var_symbolTable_5151 ;
        {
        GGS_uint joker_5169 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (ioArgument_ioGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_5151, joker_5169, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 154)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\nPass ").add_operation (var_pass_4889.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)) ;
        GGS_uint var_conversionCount_5243 = GGS_uint (uint32_t (0U)) ;
        {
        routine_performRelativesResolution_3F__26__26__26_ (var_symbolTable_5151, ioArgument_ioGeneratedBlockList, var_conversionCount_5243, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 162)) ;
        }
        var_resolutionDone_4854 = GGS_bool (ComparisonKind::equal, var_conversionCount_5243.objectCompare (GGS_uint (uint32_t (0U)))) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GGS_string var_s_5500 = GGS_string ("  Pass ").add_operation (var_pass_4889.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::equal, var_conversionCount_5243.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_2) {
                var_s_5500.plusAssign_operation(GGS_string ("none."), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 172)) ;
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GGS_bool (ComparisonKind::equal, var_conversionCount_5243.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  var_s_5500.plusAssign_operation(GGS_string ("1 conversion"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 174)) ;
                }
              }
              if (kBoolFalse == test_3) {
                var_s_5500.plusAssign_operation(var_conversionCount_5243.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)).add_operation (GGS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)) ;
              }
            }
            {
            routine_print_3F_ (var_s_5500.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  No conversion.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 182)) ;
      {
      routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 183)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                             const GGS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GGS_branchOverflowMap & outArgument_outOverflowMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOverflowMap.drop () ; // Release 'out' argument
  GGS_symbolTableForRelativesResolution var_symbolTable_7196 ;
  {
  GGS_uint joker_7212 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable_7196, joker_7212, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 226)) ;
  }
  outArgument_outOverflowMap = GGS_branchOverflowMap::init (inCompiler COMMA_HERE) ;
  GGS_uint var_blockStartAddress_7277 = GGS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7306 (constinArgument_inBlockList, EnumerationOrder::up) ;
  GGS_uint index_7301 (uint32_t (0)) ;
  while (enumerator_7306.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_7361 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_7301.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_7361 = constinArgument_inBlockList.getter_mBlockAtIndex (index_7301.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_7361 = GGS_string::makeEmptyString () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_7306.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_blockStartAddress_7277 = enumerator_7306.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    extensionMethod_relativeBranchOverflow (enumerator_7306.current_mBlock (HERE), var_symbolTable_7196, var_nextBlockLabel_7361, var_blockStartAddress_7277, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 245)) ;
    GGS_uint var_blockSize_7800 = extensionGetter_blockSize (enumerator_7306.current_mBlock (HERE), var_nextBlockLabel_7361, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 251)) ;
    var_blockStartAddress_7277 = var_blockStartAddress_7277.add_operation (var_blockSize_7800, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 252)) ;
    enumerator_7306.gotoNextObject () ;
    index_7301.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (const GGS_uint constinArgument_inAddress,
                                                           const GGS_codeList constinArgument_inCode,
                                                           const GGS_stringlist constinArgument_inIpicText,
                                                           const GGS_uint constinArgument_inMin,
                                                           const GGS_uint constinArgument_inMax,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_ipicText_1391 = constinArgument_inIpicText ;
  if (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).isValid ()) {
    uint32_t variant_1415 = constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).uintValue () ;
    bool loop_1415 = true ;
    while (loop_1415) {
      loop_1415 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1391.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).isValid () ;
      if (loop_1415) {
        loop_1415 = GGS_bool (ComparisonKind::lowerThan, var_ipicText_1391.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).boolValue () ;
      }
      if (loop_1415 && (0 == variant_1415)) {
        loop_1415 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas", 41)) ;
      }
      if (loop_1415) {
        variant_1415 -- ;
        var_ipicText_1391.addAssign_operation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 43)) ;
      }
    }
  }
  GGS_uint var_address_1529 = constinArgument_inAddress ;
  GGS_bool var_first_1555 = GGS_bool (true) ;
  cEnumerator_stringlist enumerator_1575 (var_ipicText_1391, EnumerationOrder::up) ;
  cEnumerator_codeList enumerator_1612 (constinArgument_inCode, EnumerationOrder::up) ;
  while (enumerator_1575.hasCurrentObject () && enumerator_1612.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_x_36_string (var_address_1529, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)) ;
    var_address_1529 = var_address_1529.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_1612.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)) ;
    GGS_string var_s_1748 = GGS_string (" ") ;
    cEnumerator_uintlist enumerator_1765 (enumerator_1612.current_mBinaryCode (HERE), EnumerationOrder::up) ;
    while (enumerator_1765.hasCurrentObject ()) {
      var_s_1748.plusAssign_operation(GGS_string (" ").add_operation (extensionGetter_x_34_string (enumerator_1765.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)) ;
      enumerator_1765.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1748.getter_stringByRightPadding (GGS_uint (uint32_t (13U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)) ;
    var_s_1748 = GGS_string::makeEmptyString () ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GGS_bool test_1 = var_first_1555 ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_1748.plusAssign_operation(constinArgument_inMin.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 59)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_s_1748.plusAssign_operation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 61)) ;
        }
        var_s_1748.plusAssign_operation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 63)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMax.objectCompare (GGS_uint (uint32_t (99999U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_s_1748.plusAssign_operation(constinArgument_inMax.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 65)) ;
          }
        }
        if (kBoolFalse == test_3) {
          var_s_1748.plusAssign_operation(GGS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 67)) ;
        }
        var_s_1748.plusAssign_operation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 69)) ;
      }
    }
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1748.getter_stringByRightPadding (GGS_uint (uint32_t (12U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_1612.current_mAssemblyCode (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (50U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 73)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_1575.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 74)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 75)) ;
    var_first_1555 = GGS_bool (false) ;
    enumerator_1575.gotoNextObject () ;
    enumerator_1612.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2480 (var_ipicText_1391.getter_subListFromIndex (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 79)), EnumerationOrder::up) ;
  while (enumerator_2480.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_x_36_string (var_address_1529, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByRightPadding (GGS_uint (uint32_t (76U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_2480.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 82)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 83)) ;
    enumerator_2480.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18GenerateCode?????????&?!!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (const GGS_string constinArgument_inSourceFileName,
                                                                                           const GGS_programKind constinArgument_inProgramKind,
                                                                                           const GGS_uint constinArgument_inBootloaderReservedROMsize,
                                                                                           const GGS_uint constinArgument_inROMsize,
                                                                                           const GGS_string constinArgument_inProcessorName,
                                                                                           const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                                           const GGS_registerTable constinArgument_inAllRegisters,
                                                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                           const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                           const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                                                           GGS_uint & outArgument_outUsedROMsize,
                                                                                           GGS_generatedCodeMap & outArgument_outGeneratedCodeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  outArgument_outGeneratedCodeMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("CODE GENERATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 222)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Code generation:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 223)) ;
      }
    }
  }
  GGS_symbolTableForRelativesResolution var_symbolTable_7623 ;
  GGS_uint var_firstDataAddress_7650 ;
  {
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inGeneratedBlockList, GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE), var_symbolTable_7623, var_firstDataAddress_7650, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 226)) ;
  }
  GGS_uint var_dataAddress_7741 = var_firstDataAddress_7650 ;
  GGS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7800 = GGS_pic_31__38__5F_dataAddressMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_7839 (constinArgument_inDataMap, EnumerationOrder::up) ;
  while (enumerator_7839.hasCurrentObject ()) {
    {
    var_dataAddressMap_7800.setter_insertKey (enumerator_7839.current_lkey (HERE), var_dataAddress_7741, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)) ;
    }
    var_dataAddress_7741 = var_dataAddress_7741.add_operation (enumerator_7839.current_mData (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 237)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)) ;
    enumerator_7839.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 240)) ;
  }
  GGS_string var_assemblyString_8048 = GGS_string::makeEmptyString () ;
  GGS_bigint var_relocatableCodeSize_8074 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 242)) ;
  GGS_bigint var_blockStartAddress_8104 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 243)) ;
  outArgument_outGeneratedCodeMap = GGS_generatedCodeMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_ipic_31__38_BlockList enumerator_8161 (constinArgument_inGeneratedBlockList, EnumerationOrder::up) ;
  GGS_uint index_8156 (uint32_t (0)) ;
  while (enumerator_8161.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_8225 ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::lowerThan, index_8156.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 247)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_nextBlockLabel_8225 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_8156.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_1) {
      var_nextBlockLabel_8225 = GGS_string::makeEmptyString () ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_8161.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 252)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_blockStartAddress_8104 = enumerator_8161.current_mBlock (HERE).readProperty_mAddress ().getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 253)) ;
        {
        routine_setEmitAddress_3F_ (var_blockStartAddress_8104.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)) ;
        }
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_8161.current_mBlock (HERE), var_symbolTable_7623, var_dataAddressMap_7800, var_blockStartAddress_8104.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 259)), var_nextBlockLabel_8225, ioArgument_ioListFileContents, var_assemblyString_8048, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 256)) ;
    GGS_uint var_blockSize_8793 = extensionGetter_blockSize (enumerator_8161.current_mBlock (HERE), var_nextBlockLabel_8225, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 265)) ;
    var_blockStartAddress_8104 = var_blockStartAddress_8104.add_operation (var_blockSize_8793.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 266)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_8161.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 267)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_relocatableCodeSize_8074 = var_relocatableCodeSize_8074.add_operation (var_blockSize_8793.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 268)) ;
      }
    }
    enumerator_8161.gotoNextObject () ;
    index_8156.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 245)) ;
  }
  var_dataAddress_7741 = var_firstDataAddress_7650 ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_9077 (constinArgument_inDataMap, EnumerationOrder::up) ;
  const bool bool_4 = true ;
  if (enumerator_9077.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress_3F_ (var_dataAddress_7741, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 275)) ;
    }
    {
    GGS_codeList temp_5 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    temp_5.enterElement (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7741.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    temp_6.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("    ORG ").add_operation (var_dataAddress_7741.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7741, temp_5, temp_6, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 280)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 276)) ;
    }
    var_assemblyString_8048.plusAssign_operation(GGS_string ("    ORG ").add_operation (var_dataAddress_7741.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)) ;
    while (enumerator_9077.hasCurrentObject () && bool_4) {
      {
      GGS_codeList temp_7 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      temp_7.enterElement (GGS_codeList_2E_element::init_21__21_ (GGS_string ("_data_").add_operation (enumerator_9077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      temp_8.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("_data_").add_operation (enumerator_9077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7741, temp_7, temp_8, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 290)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 286)) ;
      }
      var_assemblyString_8048.plusAssign_operation(GGS_string ("_data_").add_operation (enumerator_9077.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)) ;
      cEnumerator_uintlist enumerator_9666 (enumerator_9077.current_mData (HERE), EnumerationOrder::up) ;
      while (enumerator_9666.hasCurrentObject ()) {
        var_assemblyString_8048.plusAssign_operation(GGS_string ("    DW ").add_operation (enumerator_9666.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)) ;
        {
        routine_emitCode_3F_ (enumerator_9666.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 297)) ;
        }
        {
        GGS_codeList temp_9 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_10.enterElement (GGS_uintlist_2E_element::init_21_ (enumerator_9666.current_mValue (HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_9.enterElement (GGS_codeList_2E_element::init_21__21_ (GGS_string ("    DW ").add_operation (enumerator_9666.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)), temp_10, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GGS_stringlist temp_11 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        temp_11.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("    DW ").add_operation (enumerator_9666.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7741, temp_9, temp_11, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 302)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 298)) ;
        }
        var_dataAddress_7741 = var_dataAddress_7741.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 306)) ;
        enumerator_9666.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 308)) ;
      enumerator_9077.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_print_3F_ (GGS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_8074.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)).add_operation (GGS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)) ;
      }
    }
  }
  outArgument_outUsedROMsize = var_dataAddress_7741 ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GGS_programKind::Enumeration::invalid:
    break ;
  case GGS_programKind::Enumeration::enum_regularProgram:
  case GGS_programKind::Enumeration::enum_userProgram:
    {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), GGS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GGS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)) ;
        }
      }
    }
    break ;
  case GGS_programKind::Enumeration::enum_bootloaderProgram:
    {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), GGS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GGS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (constinArgument_inBootloaderReservedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), fixItArray16  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)) ;
        }
      }
    }
    break ;
  }
  cEnumerator_actualConfigurationMap enumerator_10845 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_10845.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_10845.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 328)) ;
    }
    {
    routine_emitByte_3F_ (enumerator_10845.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 329)) ;
    }
    enumerator_10845.gotoNextObject () ;
  }
  GGS_string var_contents_11025 ;
  {
  routine_getGeneratedContents_21_ (var_contents_11025, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 332)) ;
  }
  GGS_string var_destinationFile_11041 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 333)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 333)) ;
  GGS_bool joker_11179 ; // Joker input parameter
  var_contents_11025.method_writeToFileWhenDifferentContents (var_destinationFile_11041, joker_11179, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 334)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GGS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_17) {
      GGS_string var_baseName_11282 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas", 337)).getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 337)) ;
      GGS_string var_cContents_11416 ;
      {
      routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_11282, var_cContents_11416, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 338)) ;
      }
      var_destinationFile_11041 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 339)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 339)) ;
      GGS_bool joker_11570 ; // Joker input parameter
      var_cContents_11416.method_writeToFileWhenDifferentContents (var_destinationFile_11041, joker_11570, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 340)) ;
      GGS_string var_hContents_11620 ;
      {
      routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_11282, var_hContents_11620, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 341)) ;
      }
      var_destinationFile_11041 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 342)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 342)) ;
      GGS_bool joker_11774 ; // Joker input parameter
      var_hContents_11620.method_writeToFileWhenDifferentContents (var_destinationFile_11041, joker_11774, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 343)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GGS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas", 346)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_8048, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 347)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18GenerateAssemblyFile??????'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inSourceFileName,
                                                                      const GGS_string constinArgument_inProcessorName,
                                                                      const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                      const GGS_registerTable constinArgument_inAllRegisters,
                                                                      const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                      const GGS_string constinArgument_inAssemblyCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_assemblyString_12797 = GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 373)) ;
  var_assemblyString_12797.plusAssign_operation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 374)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 376)) ;
  cEnumerator_registerTable enumerator_13046 (constinArgument_inPredefinedRegisters, EnumerationOrder::up) ;
  while (enumerator_13046.hasCurrentObject ()) {
    GGS_uint var_firstRegister_13121 ;
    enumerator_13046.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13121, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)) ;
    var_assemblyString_12797.plusAssign_operation(enumerator_13046.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (var_firstRegister_13121.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)) ;
    enumerator_13046.gotoNextObject () ;
  }
  var_assemblyString_12797.plusAssign_operation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 381)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 383)) ;
  cEnumerator_registerTable enumerator_13383 (constinArgument_inAllRegisters, EnumerationOrder::up) ;
  while (enumerator_13383.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_13383.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 385)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas", 385)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_uint var_firstRegister_13513 ;
        enumerator_13383.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13513, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)) ;
        var_assemblyString_12797.plusAssign_operation(enumerator_13383.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (var_firstRegister_13513.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)) ;
      }
    }
    enumerator_13383.gotoNextObject () ;
  }
  var_assemblyString_12797.plusAssign_operation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 390)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 392)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 393)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 394)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string ("BSR_ACCESS EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 395)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 397)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_assemblyString_12797.plusAssign_operation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 398)) ;
      cEnumerator_actualConfigurationMap enumerator_14016 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
      while (enumerator_14016.hasCurrentObject ()) {
        var_assemblyString_12797.plusAssign_operation(GGS_string ("  __config ").add_operation (enumerator_14016.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (enumerator_14016.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)) ;
        enumerator_14016.gotoNextObject () ;
      }
    }
  }
  var_assemblyString_12797.plusAssign_operation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 404)) ;
  var_assemblyString_12797.plusAssign_operation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 405)) ;
  GGS_string var_asmDestinationFile_14359 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 407)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 407)) ;
  GGS_bool joker_14508 ; // Joker input parameter
  var_assemblyString_12797.method_writeToFileWhenDifferentContents (var_asmDestinationFile_14359, joker_14508, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 408)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                       GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                       GGS_uint & outArgument_outStackNeeds,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueStackNeeds_1598 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_trueStackNeeds_1598, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
  GGS_uint var_falseStackNeeds_1774 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_falseStackNeeds_1774, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 46)) ;
  GGS_uint temp_2 ;
  const enumGalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, var_trueStackNeeds_1598.objectCompare (var_falseStackNeeds_1774)).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_trueStackNeeds_1598 ;
  }else if (kBoolFalse == test_3) {
    temp_2 = var_falseStackNeeds_1774 ;
  }
  outArgument_outStackNeeds = temp_2 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                 GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                 GGS_uint & outArgument_outStackNeeds,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_2166 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_2166.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2166.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2166.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 63)) ;
      }
    }
    enumerator_2166.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                  GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                  GGS_uint & outArgument_outStackNeeds,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_2611 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_2611.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2611.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2611.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 78)) ;
      }
    }
    enumerator_2611.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                          GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                          GGS_uint & outArgument_outStackNeeds,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.addAssign_operation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 92)) ;
    }
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                     GGS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                     GGS_uint & outArgument_outStackNeeds,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.addAssign_operation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 105)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioBlockToExploreSet.addAssign_operation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 108)) ;
    }
  }
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                   GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                   GGS_uint & outArgument_outStackNeeds,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (1U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GGS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                           GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                           GGS_uint & outArgument_outStackNeeds,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_exploreAccessibleBlocksForStackComputations (GGS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GGS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GGS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GGS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioRoutineCalledSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_5769 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_5769.hasCurrentObject ()) {
    callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_5769.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 176)) ;
    enumerator_5769.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildCalledRoutineSetForStackComputations (GGS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18StackComputations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_StackComputations_26__3F_ (GGS_string & ioArgument_ioListFileContents,
                                                    const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("*").add_operation (GGS_string ("STACK COMPUTATIONS").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)) ;
  GGS_stringset var_startLabelsToExplore_6779 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_blockMapForStackComputation var_blockMapForStackComputation_6821 = GGS_blockMapForStackComputation::init (inCompiler COMMA_HERE) ;
  cEnumerator_ipic_31__38_BlockList enumerator_6889 (constinArgument_inBlockList, EnumerationOrder::up) ;
  while (enumerator_6889.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_6889.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_stack_computations.galgas", 204)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_startLabelsToExplore_6779.addAssign_operation (enumerator_6889.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 205)) ;
      }
    }
    {
    var_blockMapForStackComputation_6821.setter_insertKey (enumerator_6889.current_mBlock (HERE).readProperty_mLabel (), enumerator_6889.current_mBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 207)) ;
    }
    enumerator_6889.gotoNextObject () ;
  }
  GGS_routineCallMap var_routineCallMap_7186 = GGS_routineCallMap::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).isValid ()) {
    uint32_t variant_7209 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).uintValue () ;
    bool loop_7209 = true ;
    while (loop_7209) {
      loop_7209 = GGS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7209) {
        loop_7209 = GGS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7209 && (0 == variant_7209)) {
        loop_7209 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)) ;
      }
      if (loop_7209) {
        variant_7209 -- ;
        GGS_string var_startLabel_7294 = var_startLabelsToExplore_6779.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 214)) ;
        {
        var_startLabelsToExplore_6779.setter_removeKey (var_startLabel_7294 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 215)) ;
        }
        GGS_stringset var_blockToExploreSet_7432 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        var_blockToExploreSet_7432.addAssign_operation (var_startLabel_7294  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 218)) ;
        GGS_stringset var_exploredBlockSet_7521 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_stringset var_calledRoutineSet_7563 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_uint var_terminatorStackNeeds_7600 = GGS_uint (uint32_t (0U)) ;
        if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).isValid ()) {
          uint32_t variant_7629 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).uintValue () ;
          bool loop_7629 = true ;
          while (loop_7629) {
            loop_7629 = GGS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7432.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
            if (loop_7629) {
              loop_7629 = GGS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7432.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_7629 && (0 == variant_7629)) {
              loop_7629 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)) ;
            }
            if (loop_7629) {
              variant_7629 -- ;
              GGS_string var_b_7725 = var_blockToExploreSet_7432.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 225)) ;
              {
              var_blockToExploreSet_7432.setter_removeKey (var_b_7725 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 226)) ;
              }
              var_exploredBlockSet_7521.addAssign_operation (var_b_7725  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 227)) ;
              GGS_ipic_31__38_Block var_aBlock_7905 ;
              var_blockMapForStackComputation_6821.method_searchKey (var_b_7725.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 228)), var_aBlock_7905, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 228)) ;
              GGS_uint var_tsn_8051 ;
              callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_AbstractBlockTerminator *) var_aBlock_7905.readProperty_mTerminator ().ptr (), var_blockToExploreSet_7432, var_exploredBlockSet_7521, var_tsn_8051, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 229)) ;
              enumGalgasBool test_1 = kBoolTrue ;
              if (kBoolTrue == test_1) {
                test_1 = GGS_bool (ComparisonKind::greaterThan, var_tsn_8051.objectCompare (var_terminatorStackNeeds_7600)).boolEnum () ;
                if (kBoolTrue == test_1) {
                  var_terminatorStackNeeds_7600 = var_tsn_8051 ;
                }
              }
              cEnumerator_ipic_31__38_SequentialInstructionList enumerator_8175 (var_aBlock_7905.readProperty_mInstructionList (), EnumerationOrder::up) ;
              while (enumerator_8175.hasCurrentObject ()) {
                callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_8175.current_mInstruction (HERE).ptr (), var_calledRoutineSet_7563, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 238)) ;
                enumerator_8175.gotoNextObject () ;
              }
            }
          }
        }
        {
        var_routineCallMap_7186.setter_insertKey (var_startLabel_7294.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 241)), var_calledRoutineSet_7563, var_terminatorStackNeeds_7600, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 241)) ;
        }
        cEnumerator_stringset enumerator_8414 (var_calledRoutineSet_7563, EnumerationOrder::up) ;
        while (enumerator_8414.hasCurrentObject ()) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_routineCallMap_7186.getter_hasKey (enumerator_8414.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_startLabelsToExplore_6779.addAssign_operation (enumerator_8414.current_key (HERE)  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 244)) ;
            }
          }
          enumerator_8414.gotoNextObject () ;
        }
      }
    }
  }
  GGS_routineStackRequirementMap var_routineStackRequirementMap_8657 = GGS_routineStackRequirementMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_progress_8696 = GGS_bool (true) ;
  if (var_routineCallMap_7186.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).isValid ()) {
    uint32_t variant_8714 = var_routineCallMap_7186.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).uintValue () ;
    bool loop_8714 = true ;
    while (loop_8714) {
      loop_8714 = var_progress_8696.isValid () ;
      if (loop_8714) {
        loop_8714 = var_progress_8696.boolValue () ;
      }
      if (loop_8714 && (0 == variant_8714)) {
        loop_8714 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)) ;
      }
      if (loop_8714) {
        variant_8714 -- ;
        var_progress_8696 = GGS_bool (false) ;
        GGS_routineCallMap var_tempRoutineCallMap_8815 = var_routineCallMap_7186 ;
        var_routineCallMap_7186 = GGS_routineCallMap::init (inCompiler COMMA_HERE) ;
        cEnumerator_routineCallMap enumerator_8908 (var_tempRoutineCallMap_8815, EnumerationOrder::up) ;
        while (enumerator_8908.hasCurrentObject ()) {
          GGS_uint var_levels_8973 = enumerator_8908.current_mTerminatorStackNeeds (HERE) ;
          GGS_bool var_solved_9020 = GGS_bool (true) ;
          cEnumerator_stringset enumerator_9045 (enumerator_8908.current_mCalledRoutineSet (HERE), EnumerationOrder::up) ;
          bool bool_3 = var_solved_9020.isValidAndTrue () ;
          if (enumerator_9045.hasCurrentObject () && bool_3) {
            while (enumerator_9045.hasCurrentObject () && bool_3) {
              var_solved_9020 = var_routineStackRequirementMap_8657.getter_hasKey (enumerator_9045.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 262)) ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_solved_9020.boolEnum () ;
                if (kBoolTrue == test_4) {
                  GGS_uint var_rLevel_9242 ;
                  var_routineStackRequirementMap_8657.method_searchKey (enumerator_9045.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 264)), var_rLevel_9242, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 264)) ;
                  enumGalgasBool test_5 = kBoolTrue ;
                  if (kBoolTrue == test_5) {
                    test_5 = GGS_bool (ComparisonKind::lowerOrEqual, var_levels_8973.objectCompare (var_rLevel_9242)).boolEnum () ;
                    if (kBoolTrue == test_5) {
                      var_levels_8973 = var_rLevel_9242.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 266)) ;
                    }
                  }
                }
              }
              enumerator_9045.gotoNextObject () ;
              if (enumerator_9045.hasCurrentObject ()) {
                bool_3 = var_solved_9020.isValidAndTrue () ;
              }
            }
          }
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_solved_9020.boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              var_routineStackRequirementMap_8657.setter_insertKey (enumerator_8908.current_lkey (HERE), var_levels_8973, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 271)) ;
              }
              var_progress_8696 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_6) {
            {
            var_routineCallMap_7186.setter_insertKey (enumerator_8908.current_lkey (HERE), enumerator_8908.current_mCalledRoutineSet (HERE), enumerator_8908.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 274)) ;
            }
          }
          enumerator_8908.gotoNextObject () ;
        }
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("Levels Routine\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 278)) ;
  cEnumerator_routineStackRequirementMap enumerator_9636 (var_routineStackRequirementMap_8657, EnumerationOrder::up) ;
  while (enumerator_9636.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_9636.current_mLevels (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).getter_stringByLeftPadding (GGS_uint (uint32_t (6U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (enumerator_9636.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)) ;
    enumerator_9636.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 282)) ;
  GGS_bool var_noRecursiveRoutine_9842 = GGS_bool (ComparisonKind::equal, var_routineCallMap_7186.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 284)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_noRecursiveRoutine_9842.operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GGS_bool (gOption_piccolo_5F_options_doNotWarnRecursive.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 286)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 287)), GGS_string ("There are recursive routines"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 287)) ;
        }
      }
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("The following routines are recursive:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 289)) ;
      cEnumerator_routineCallMap enumerator_10147 (var_routineCallMap_7186, EnumerationOrder::up) ;
      while (enumerator_10147.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  - ").add_operation (enumerator_10147.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)) ;
        enumerator_10147.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 293)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_noRecursiveRoutine_9842.boolEnum () ;
    if (kBoolTrue == test_10) {
      GGS_uint var_mainLevels_10400 ;
      var_routineStackRequirementMap_8657.method_searchKey (GGS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 297)), var_mainLevels_10400, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 297)) ;
      GGS_uint var_totalLevels_10426 = var_mainLevels_10400 ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_routineStackRequirementMap_8657.getter_hasKey (GGS_string (".HIGH_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 299)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GGS_uint var_highIntLevels_10602 ;
          var_routineStackRequirementMap_8657.method_searchKey (GGS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 300)), var_highIntLevels_10602, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 300)) ;
          var_totalLevels_10426 = var_totalLevels_10426.add_operation (var_highIntLevels_10602, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)) ;
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_routineStackRequirementMap_8657.getter_hasKey (GGS_string (".LOW_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 303)).boolEnum () ;
        if (kBoolTrue == test_12) {
          GGS_uint var_lowIntLevels_10826 ;
          var_routineStackRequirementMap_8657.method_searchKey (GGS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 304)), var_lowIntLevels_10826, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 304)) ;
          var_totalLevels_10426 = var_totalLevels_10426.add_operation (var_lowIntLevels_10826, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)) ;
        }
      }
      {
      routine_print_3F_ (GGS_string ("Max stack depth: ").add_operation (var_totalLevels_10426.getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::greaterThan, var_totalLevels_10426.objectCompare (GGS_uint (uint32_t (31U)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 309)), GGS_string ("Max stack depth is greater than 31"), fixItArray14  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 309)) ;
        }
      }
    }
  }
}


