#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList (const class GALGAS_pic_31__38_InstructionList constinArgument0,
                                               const class GALGAS_stringset constinArgument1,
                                               const class GALGAS_declaredRoutineMap constinArgument2,
                                               const class GALGAS_stringset constinArgument3,
                                               class GALGAS_pic_31__38_InstructionList & outArgument4,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayBlockList (const class GALGAS_string constinArgument0,
                               class GALGAS_string & ioArgument1,
                               const class GALGAS_ipic_31__38_BlockList constinArgument2,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

