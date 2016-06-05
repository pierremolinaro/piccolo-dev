#ifndef all_2D_declarations_2D__31__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__31__ENTITIES_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Extension method '@baseline_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_uint & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Extension method '@baseline_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_string & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_uint & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_string & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) (const class cPtr_registerExpression * inObject,
                                                                                                          const class GALGAS_registerTable constinArgument0,
                                                                                                          const class GALGAS_constantMap constinArgument1,
                                                                                                          class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument2,
                                                                                                          class GALGAS_stringset & ioArgument3,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                        extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const class cPtr_registerExpression * inObject,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Extension method '@registerExpression getRegisterAddress'                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_registerExpression_getRegisterAddress) (const class cPtr_registerExpression * inObject,
                                                                                const class GALGAS_registerTable constinArgument0,
                                                                                const class GALGAS_constantMap constinArgument1,
                                                                                class GALGAS_stringset & ioArgument2,
                                                                                class GALGAS_uint & outArgument3,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_getRegisterAddress (const int32_t inClassIndex,
                                              extensionMethodSignature_registerExpression_getRegisterAddress inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (const class cPtr_registerExpression * inObject,
                                             const GALGAS_registerTable constin_inRegisterTable,
                                             const GALGAS_constantMap constin_inConstantMap,
                                             GALGAS_stringset & io_ioUsedRegisters,
                                             GALGAS_uint & out_outRegisterAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

#endif
