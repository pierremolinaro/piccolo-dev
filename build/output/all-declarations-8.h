#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@registerExpression resolveBaselineAccess'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (class cPtr_registerExpression * inObject,
                                                const class GGS_registerTable constin_inRegisterTable,
                                                const class GGS_constantMap constin_inConstantMap,
                                                class GGS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                class GGS_bitSliceTable & out_outBitSliceTable,
                                                class GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

