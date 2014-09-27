#ifndef proc_2D_handleBaselineInstructionList_1_DEFINED
#define proc_2D_handleBaselineInstructionList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

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

#endif

