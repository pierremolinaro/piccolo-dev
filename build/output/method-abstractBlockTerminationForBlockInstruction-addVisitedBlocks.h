#ifndef method_2D_abstractBlockTerminationForBlockInstruction_2D_addVisitedBlocks_1_DEFINED
#define method_2D_abstractBlockTerminationForBlockInstruction_2D_addVisitedBlocks_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                      class GALGAS_stringset & ioArgument0,
                                                                                                      const class GALGAS_blockInstructionBlockMap constinArgument1,
                                                                                                      const class GALGAS_string constinArgument2,
                                                                                                      const class GALGAS_uint constinArgument3,
                                                                                                      class GALGAS_blockInitialBankSelectionMap & ioArgument4,
                                                                                                      class GALGAS_bool & ioArgument5,
                                                                                                      class GALGAS_bool & ioArgument6,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addVisitedBlocks (const int32_t inClassIndex,
                                           categoryMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addVisitedBlocks (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                          GALGAS_stringset & io_ioVisitedBlockSet,
                                          const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                          const GALGAS_string constin_inCurrentBlockName,
                                          const GALGAS_uint constin_inInitialBlockSetting,
                                          GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                          GALGAS_bool & io_ioContinuesInSequence,
                                          GALGAS_bool & io_ioContinueAccessibilityExploration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

