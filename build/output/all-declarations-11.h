#ifndef all_2D_declarations_2D__31__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@baseline_instruction_IF_BitTest getBaseCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                              class GALGAS_uint & outArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBaseCode (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBaseCode (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_uint & out_outBaseCode,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@baseline_instruction_IF_BitTest getMnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                              class GALGAS_string & outArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getMnemonic (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getMnemonic (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_string & out_outMnemonic,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@midrange_instruction_IF_BitTest getBaseCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                              class GALGAS_uint & outArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBaseCode (const int32_t inClassIndex,
                                      categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBaseCode (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_uint & out_outBaseCode,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@midrange_instruction_IF_BitTest getMnemonic'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                              class GALGAS_string & outArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getMnemonic (const int32_t inClassIndex,
                                      categoryMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getMnemonic (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_string & out_outMnemonic,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) (const class cPtr_registerExpression * inObject,
                                                                                                         const class GALGAS_registerTable constinArgument0,
                                                                                                         const class GALGAS_constantMap constinArgument1,
                                                                                                         class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument2,
                                                                                                         class GALGAS_stringset & ioArgument3,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                       categoryMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeRegisterExpressionWithoutCheckingBank (const class cPtr_registerExpression * inObject,
                                                                      const GALGAS_registerTable constin_inRegisterTable,
                                                                      const GALGAS_constantMap constin_inConstantMap,
                                                                      GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                      GALGAS_stringset & io_ioUsedRegisters,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@registerExpression getRegisterAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_registerExpression_getRegisterAddress) (const class cPtr_registerExpression * inObject,
                                                                               const class GALGAS_registerTable constinArgument0,
                                                                               const class GALGAS_constantMap constinArgument1,
                                                                               class GALGAS_stringset & ioArgument2,
                                                                               class GALGAS_uint & outArgument3,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getRegisterAddress (const int32_t inClassIndex,
                                             categoryMethodSignature_registerExpression_getRegisterAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getRegisterAddress (const class cPtr_registerExpression * inObject,
                                            const GALGAS_registerTable constin_inRegisterTable,
                                            const GALGAS_constantMap constin_inConstantMap,
                                            GALGAS_stringset & io_ioUsedRegisters,
                                            GALGAS_uint & out_outRegisterAddress,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

#endif
