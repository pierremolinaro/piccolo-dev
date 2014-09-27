#ifndef method_2D_registerExpression_2D_analyzeRegisterExpression_1_DEFINED
#define method_2D_registerExpression_2D_analyzeRegisterExpression_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@registerExpression analyzeRegisterExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_registerExpression_analyzeRegisterExpression) (const class cPtr_registerExpression * inObject,
                                                                                      const class GALGAS_uint constinArgument0,
                                                                                      const class GALGAS_uint constinArgument1,
                                                                                      const class GALGAS_registerTable constinArgument2,
                                                                                      class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument3,
                                                                                      class GALGAS_bitSliceTable & outArgument4,
                                                                                      class GALGAS_stringset & ioArgument5,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                    categoryMethodSignature_registerExpression_analyzeRegisterExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeRegisterExpression (const class cPtr_registerExpression * inObject,
                                                   const GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const GALGAS_uint constin_inCurrentBank,
                                                   const GALGAS_registerTable constin_inRegisterTable,
                                                   GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                   GALGAS_bitSliceTable & out_outBitSliceTable,
                                                   GALGAS_stringset & io_ioUsedRegisters,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

