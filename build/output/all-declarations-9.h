#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-8.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getBaseCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_uint & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_getBaseCode (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_getBaseCode (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_uint & out_outBaseCode,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@midrange_instruction_IF_BitTest getMnemonic'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic) (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                               class GALGAS_string & outArgument0,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_getMnemonic (const int32_t inClassIndex,
                                       extensionMethodSignature_midrange_5F_instruction_5F_IF_5F_BitTest_getMnemonic inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_getMnemonic (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GALGAS_string & out_outMnemonic,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@registerExpression resolveMidrangeAccess'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_registerExpression_resolveMidrangeAccess) (const class cPtr_registerExpression * inObject,
                                                                                   const class GALGAS_uint constinArgument0,
                                                                                   const class GALGAS_uint constinArgument1,
                                                                                   const class GALGAS_registerTable constinArgument2,
                                                                                   const class GALGAS_constantMap constinArgument3,
                                                                                   class GALGAS_midrange_5F_intermediate_5F_registerExpression & outArgument4,
                                                                                   class GALGAS_bitSliceTable & outArgument5,
                                                                                   class GALGAS_stringset & ioArgument6,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_resolveMidrangeAccess (const int32_t inClassIndex,
                                                 extensionMethodSignature_registerExpression_resolveMidrangeAccess inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_resolveMidrangeAccess (const class cPtr_registerExpression * inObject,
                                                const GALGAS_uint constin_inTotalBankCount,
                                                const GALGAS_uint constin_inCurrentBank,
                                                const GALGAS_registerTable constin_inRegisterTable,
                                                const GALGAS_constantMap constin_inConstantMap,
                                                GALGAS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GALGAS_bitSliceTable & out_outBitSliceTable,
                                                GALGAS_stringset & io_ioUsedRegisters,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension method '@registerExpression analyzeRegisterExpression'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_registerExpression_analyzeRegisterExpression) (const class cPtr_registerExpression * inObject,
                                                                                       const class GALGAS_uint constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       const class GALGAS_registerTable constinArgument2,
                                                                                       const class GALGAS_constantMap constinArgument3,
                                                                                       const class GALGAS_bool constinArgument4,
                                                                                       class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument5,
                                                                                       class GALGAS_bitSliceTable & outArgument6,
                                                                                       class GALGAS_stringset & ioArgument7,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeRegisterExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_registerExpression_analyzeRegisterExpression inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeRegisterExpression (const class cPtr_registerExpression * inObject,
                                                    const GALGAS_uint constin_inAccessBankSplitOffset,
                                                    const GALGAS_uint constin_inCurrentBank,
                                                    const GALGAS_registerTable constin_inRegisterTable,
                                                    const GALGAS_constantMap constin_inConstantMap,
                                                    const GALGAS_bool constin_inWriteAccess,
                                                    GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GALGAS_bitSliceTable & out_outBitSliceTable,
                                                    GALGAS_stringset & io_ioUsedRegisters,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank) (const class cPtr_registerExpression * inObject,
                                                                                                          const class GALGAS_registerTable constinArgument0,
                                                                                                          const class GALGAS_constantMap constinArgument1,
                                                                                                          const class GALGAS_bool constinArgument2,
                                                                                                          class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument3,
                                                                                                          class GALGAS_stringset & ioArgument4,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const int32_t inClassIndex,
                                                                        extensionMethodSignature_registerExpression_analyzeRegisterExpressionWithoutCheckingBank inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (const class cPtr_registerExpression * inObject,
                                                                       const GALGAS_registerTable constin_inRegisterTable,
                                                                       const GALGAS_constantMap constin_inConstantMap,
                                                                       const GALGAS_bool constin_inWriteAccess,
                                                                       GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GALGAS_stringset & io_ioUsedRegisters,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@registerExpression getRegisterAddress'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_registerExpression_getRegisterAddress) (const class cPtr_registerExpression * inObject,
                                                                                const class GALGAS_registerTable constinArgument0,
                                                                                const class GALGAS_constantMap constinArgument1,
                                                                                const class GALGAS_bool constinArgument2,
                                                                                class GALGAS_stringset & ioArgument3,
                                                                                class GALGAS_uint & outArgument4,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_getRegisterAddress (const int32_t inClassIndex,
                                              extensionMethodSignature_registerExpression_getRegisterAddress inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_getRegisterAddress (const class cPtr_registerExpression * inObject,
                                             const GALGAS_registerTable constin_inRegisterTable,
                                             const GALGAS_constantMap constin_inConstantMap,
                                             const GALGAS_bool constin_inWriteAccess,
                                             GALGAS_stringset & io_ioUsedRegisters,
                                             GALGAS_uint & out_outRegisterAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ;

extern C_StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'initCodeGenerator'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_initCodeGenerator (class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'setEmitAddress'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_setEmitAddress (const class GALGAS_uint constinArgument0,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'currentEmitAddress'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_currentEmitAddress (class GALGAS_uint & outArgument0,
                                 class C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 Routine 'emitByte'                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_emitByte (const class GALGAS_uint constinArgument0,
                       class C_Compiler * inCompiler
                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'getGeneratedContents'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_getGeneratedContents (class GALGAS_string & outArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'get_C_ArrayImplementation'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_get_5F_C_5F_ArrayImplementation (const class GALGAS_string constinArgument0,
                                              class GALGAS_string & outArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'get_C_ArrayHeader'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_get_5F_C_5F_ArrayHeader (const class GALGAS_string constinArgument0,
                                      class GALGAS_string & outArgument1,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'checkCurrentEmitAddress'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkCurrentEmitAddress (const class GALGAS_uint constinArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'print_constant_definition'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_print_5F_constant_5F_definition (const class GALGAS_constantMap constinArgument0,
                                              class GALGAS_string & ioArgument1,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'actualBuildConfig'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_actualBuildConfig (const class GALGAS_configRegisterMap constinArgument0,
                                const class GALGAS_configDefinitionList constinArgument1,
                                class GALGAS_string & ioArgument2,
                                class GALGAS_actualConfigurationMap & outArgument3,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                Routine 'buildConfig'                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildConfig (const class GALGAS_configRegisterMap constinArgument0,
                          const class GALGAS_configDefinitionList constinArgument1,
                          class GALGAS_string & ioArgument2,
                          class GALGAS_actualConfigurationMap & outArgument3,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Routine 'addBaselineUsedRoutinesFromInstructionList'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_addBaselineUsedRoutinesFromInstructionList (const class GALGAS_baseline_5F_instructionList constinArgument0,
                                                         class GALGAS_stringset & ioArgument1,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'baseline_computeUsedRoutines'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_baseline_5F_computeUsedRoutines (const class GALGAS_baseline_5F_routineDefinitionList & constinArgument0,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'analyze_ram_sections'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyze_5F_ram_5F_sections (const class GALGAS_string constinArgument0,
                                         const class GALGAS_ramDefinitionList constinArgument1,
                                         const class GALGAS_constantMap constinArgument2,
                                         class GALGAS_stringset & ioArgument3,
                                         class GALGAS_ramBankTable & ioArgument4,
                                         const class GALGAS_registerTable constinArgument5,
                                         class GALGAS_string & ioArgument6,
                                         class GALGAS_registerTable & ioArgument7,
                                         class GALGAS_declaredByteMap & outArgument8,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'build_baseline_assembly_code'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_build_5F_baseline_5F_assembly_5F_code (const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument0,
                                                    const class GALGAS_actualConfigurationMap constinArgument1,
                                                    const class GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument2,
                                                    const class GALGAS_bitSliceTable constinArgument3,
                                                    class GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument4,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'build_baseline_binary_code'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_build_5F_baseline_5F_binary_5F_code (const class GALGAS_baseline_5F_assembly_5F_instructionList constinArgument0,
                                                  const class GALGAS_uint constinArgument1,
                                                  class GALGAS_string & ioArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'handleBaselineInstructionList'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'parseDeviceDefinition'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_parseDeviceDefinition (const class GALGAS_lstring constinArgument0,
                                    class GALGAS_piccoloDeviceModel & outArgument1,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'perform_baseline_optimizations'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_perform_5F_baseline_5F_optimizations (class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument0,
                                                   class GALGAS_string & ioArgument1,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'acceptableTRISoperand'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_acceptableTRISoperand (class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

