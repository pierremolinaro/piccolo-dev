#ifndef method_2D_ipic_31__38_SequentialInstruction_2D_buildCalledRoutineSet_1_DEFINED
#define method_2D_ipic_31__38_SequentialInstruction_2D_buildCalledRoutineSet_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

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

#endif

