#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze_data_sections???&!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (const class GALGAS_dataList constinArgument0,
                                                                                     const class GALGAS_registerTable constinArgument1,
                                                                                     const class GALGAS_constantMap constinArgument2,
                                                                                     class GALGAS_string & ioArgument3,
                                                                                     class GALGAS_pic_31__38__5F_dataMap & outArgument4,
                                                                                     class GALGAS_constantMap & ioArgument5,
                                                                                     class GALGAS_stringset & ioArgument6,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18DurationComputations&!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_DurationComputations_26__21_ (class GALGAS_ipic_31__38_BlockList & ioArgument0,
                                                       class GALGAS_blockDurationMap & outArgument1,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18GenerateCode?????????&?!!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (const class GALGAS_string constinArgument0,
                                                                                           const class GALGAS_programKind constinArgument1,
                                                                                           const class GALGAS_uint constinArgument2,
                                                                                           const class GALGAS_uint constinArgument3,
                                                                                           const class GALGAS_string constinArgument4,
                                                                                           const class GALGAS_registerTable constinArgument5,
                                                                                           const class GALGAS_registerTable constinArgument6,
                                                                                           const class GALGAS_pic_31__38__5F_dataMap constinArgument7,
                                                                                           const class GALGAS_actualConfigurationMap constinArgument8,
                                                                                           class GALGAS_string & ioArgument9,
                                                                                           const class GALGAS_ipic_31__38_BlockList constinArgument10,
                                                                                           class GALGAS_uint & outArgument11,
                                                                                           class GALGAS_generatedCodeMap & outArgument12,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlockOrdering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (const class GALGAS_string constinArgument0,
                                                            class GALGAS_string & ioArgument1,
                                                            class GALGAS_ipic_31__38_BlockList & ioArgument2,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (class GALGAS_string & ioArgument0,
                                                 class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18PrintDurations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_PrintDurations_26__3F_ (class GALGAS_string & ioArgument0,
                                                 const class GALGAS_blockDurationMap constinArgument1,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (class GALGAS_string & ioArgument0,
                                                      class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18StackComputations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_StackComputations_26__3F_ (class GALGAS_string & ioArgument0,
                                                    const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto2block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_32_block_3F__3F__26_ (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto4block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_34_block_3F__3F__26_ (const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedGraph&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedGraph_26__3F__26_ (class GALGAS_ipic_31__38_BlockList & ioArgument0,
                                            const class GALGAS_string constinArgument1,
                                            class GALGAS_string & ioArgument2,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'blockDiscontinuityCount'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uint function_blockDiscontinuityCount (const class GALGAS_ipic_31__38_BlockList & constinArgument0,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_cluster_ordering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const class GALGAS_clusterList constinArgument0,
                                                         class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                         class GALGAS_string & ioArgument2,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildInvocationGraph?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildInvocationGraph_3F__21_ (const class GALGAS_ipic_31__38_BlockList constinArgument0,
                                           class GALGAS_string & outArgument1,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_sortKey (const class GALGAS_clusterList & constinArgument0,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                             class GALGAS_branchOverflowMap & outArgument2,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'performRelativesResolution?&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_performRelativesResolution_3F__26__26__26_ (const class GALGAS_symbolTableForRelativesResolution constinArgument0,
                                                         class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                         class GALGAS_uint & ioArgument2,
                                                         class GALGAS_string & ioArgument3,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'computeLabelAbsoluteAddressMap??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (const class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                             class GALGAS_symbolTableForRelativesResolution & outArgument2,
                                                             class GALGAS_uint & outArgument3,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18GenerateAssemblyFile??????'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (const class GALGAS_string constinArgument0,
                                                                      const class GALGAS_string constinArgument1,
                                                                      const class GALGAS_registerTable constinArgument2,
                                                                      const class GALGAS_registerTable constinArgument3,
                                                                      const class GALGAS_actualConfigurationMap constinArgument4,
                                                                      const class GALGAS_string constinArgument5,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'embeddedDevices'
//
//--------------------------------------------------------------------------------------------------

extern const char * gWrapperFileContent_288_embeddedDevices ;
extern const char * gWrapperFileContent_117_embeddedDevices ;
extern const char * gWrapperFileContent_273_embeddedDevices ;
extern const char * gWrapperFileContent_127_embeddedDevices ;
extern const char * gWrapperFileContent_445_embeddedDevices ;
extern const char * gWrapperFileContent_74_embeddedDevices ;
extern const char * gWrapperFileContent_79_embeddedDevices ;
extern const char * gWrapperFileContent_381_embeddedDevices ;
extern const char * gWrapperFileContent_411_embeddedDevices ;
extern const char * gWrapperFileContent_458_embeddedDevices ;
extern const char * gWrapperFileContent_367_embeddedDevices ;
extern const char * gWrapperFileContent_449_embeddedDevices ;
extern const char * gWrapperFileContent_164_embeddedDevices ;
extern const char * gWrapperFileContent_328_embeddedDevices ;
extern const char * gWrapperFileContent_125_embeddedDevices ;
extern const char * gWrapperFileContent_210_embeddedDevices ;
extern const char * gWrapperFileContent_59_embeddedDevices ;
extern const char * gWrapperFileContent_103_embeddedDevices ;
extern const char * gWrapperFileContent_321_embeddedDevices ;
extern const char * gWrapperFileContent_415_embeddedDevices ;
extern const char * gWrapperFileContent_280_embeddedDevices ;
extern const char * gWrapperFileContent_5_embeddedDevices ;
extern const char * gWrapperFileContent_283_embeddedDevices ;
extern const char * gWrapperFileContent_208_embeddedDevices ;
extern const char * gWrapperFileContent_428_embeddedDevices ;
extern const char * gWrapperFileContent_358_embeddedDevices ;
extern const char * gWrapperFileContent_216_embeddedDevices ;
extern const char * gWrapperFileContent_231_embeddedDevices ;
extern const char * gWrapperFileContent_440_embeddedDevices ;
extern const char * gWrapperFileContent_146_embeddedDevices ;
extern const char * gWrapperFileContent_351_embeddedDevices ;
extern const char * gWrapperFileContent_112_embeddedDevices ;
extern const char * gWrapperFileContent_54_embeddedDevices ;
extern const char * gWrapperFileContent_319_embeddedDevices ;
extern const char * gWrapperFileContent_202_embeddedDevices ;
extern const char * gWrapperFileContent_377_embeddedDevices ;
extern const char * gWrapperFileContent_384_embeddedDevices ;
extern const char * gWrapperFileContent_471_embeddedDevices ;
extern const char * gWrapperFileContent_179_embeddedDevices ;
extern const char * gWrapperFileContent_284_embeddedDevices ;
extern const char * gWrapperFileContent_461_embeddedDevices ;
extern const char * gWrapperFileContent_406_embeddedDevices ;
extern const char * gWrapperFileContent_37_embeddedDevices ;
extern const char * gWrapperFileContent_100_embeddedDevices ;
extern const char * gWrapperFileContent_472_embeddedDevices ;
extern const char * gWrapperFileContent_383_embeddedDevices ;
extern const char * gWrapperFileContent_227_embeddedDevices ;
extern const char * gWrapperFileContent_234_embeddedDevices ;
extern const char * gWrapperFileContent_282_embeddedDevices ;
extern const char * gWrapperFileContent_118_embeddedDevices ;
extern const char * gWrapperFileContent_309_embeddedDevices ;
extern const char * gWrapperFileContent_16_embeddedDevices ;
extern const char * gWrapperFileContent_62_embeddedDevices ;
extern const char * gWrapperFileContent_42_embeddedDevices ;
extern const char * gWrapperFileContent_136_embeddedDevices ;
extern const char * gWrapperFileContent_29_embeddedDevices ;
extern const char * gWrapperFileContent_262_embeddedDevices ;
extern const char * gWrapperFileContent_1_embeddedDevices ;
extern const char * gWrapperFileContent_96_embeddedDevices ;
extern const char * gWrapperFileContent_15_embeddedDevices ;
extern const char * gWrapperFileContent_334_embeddedDevices ;
extern const char * gWrapperFileContent_464_embeddedDevices ;
extern const char * gWrapperFileContent_159_embeddedDevices ;
extern const char * gWrapperFileContent_341_embeddedDevices ;
extern const char * gWrapperFileContent_143_embeddedDevices ;
extern const char * gWrapperFileContent_356_embeddedDevices ;
extern const char * gWrapperFileContent_261_embeddedDevices ;
extern const char * gWrapperFileContent_339_embeddedDevices ;
extern const char * gWrapperFileContent_246_embeddedDevices ;
extern const char * gWrapperFileContent_196_embeddedDevices ;
extern const char * gWrapperFileContent_245_embeddedDevices ;
extern const char * gWrapperFileContent_124_embeddedDevices ;
extern const char * gWrapperFileContent_218_embeddedDevices ;
extern const char * gWrapperFileContent_114_embeddedDevices ;
extern const char * gWrapperFileContent_390_embeddedDevices ;
extern const char * gWrapperFileContent_181_embeddedDevices ;
extern const char * gWrapperFileContent_150_embeddedDevices ;
extern const char * gWrapperFileContent_266_embeddedDevices ;
extern const char * gWrapperFileContent_305_embeddedDevices ;
extern const char * gWrapperFileContent_174_embeddedDevices ;
extern const char * gWrapperFileContent_226_embeddedDevices ;
extern const char * gWrapperFileContent_281_embeddedDevices ;
extern const char * gWrapperFileContent_120_embeddedDevices ;
extern const char * gWrapperFileContent_203_embeddedDevices ;
extern const char * gWrapperFileContent_253_embeddedDevices ;
extern const char * gWrapperFileContent_350_embeddedDevices ;
extern const char * gWrapperFileContent_142_embeddedDevices ;
extern const char * gWrapperFileContent_194_embeddedDevices ;
extern const char * gWrapperFileContent_248_embeddedDevices ;
extern const char * gWrapperFileContent_336_embeddedDevices ;
extern const char * gWrapperFileContent_263_embeddedDevices ;
extern const char * gWrapperFileContent_340_embeddedDevices ;
extern const char * gWrapperFileContent_152_embeddedDevices ;
extern const char * gWrapperFileContent_361_embeddedDevices ;
extern const char * gWrapperFileContent_357_embeddedDevices ;
extern const char * gWrapperFileContent_168_embeddedDevices ;
extern const char * gWrapperFileContent_375_embeddedDevices ;
extern const char * gWrapperFileContent_451_embeddedDevices ;
extern const char * gWrapperFileContent_364_embeddedDevices ;
extern const char * gWrapperFileContent_66_embeddedDevices ;
extern const char * gWrapperFileContent_444_embeddedDevices ;
extern const char * gWrapperFileContent_417_embeddedDevices ;
extern const char * gWrapperFileContent_161_embeddedDevices ;
extern const char * gWrapperFileContent_55_embeddedDevices ;
extern const char * gWrapperFileContent_332_embeddedDevices ;
extern const char * gWrapperFileContent_258_embeddedDevices ;
extern const char * gWrapperFileContent_175_embeddedDevices ;
extern const char * gWrapperFileContent_171_embeddedDevices ;
extern const char * gWrapperFileContent_274_embeddedDevices ;
extern const char * gWrapperFileContent_318_embeddedDevices ;
extern const char * gWrapperFileContent_72_embeddedDevices ;
extern const char * gWrapperFileContent_2_embeddedDevices ;
extern const char * gWrapperFileContent_211_embeddedDevices ;
extern const char * gWrapperFileContent_396_embeddedDevices ;
extern const char * gWrapperFileContent_424_embeddedDevices ;
extern const char * gWrapperFileContent_267_embeddedDevices ;
extern const char * gWrapperFileContent_109_embeddedDevices ;
extern const char * gWrapperFileContent_277_embeddedDevices ;
extern const char * gWrapperFileContent_80_embeddedDevices ;
extern const char * gWrapperFileContent_235_embeddedDevices ;
extern const char * gWrapperFileContent_312_embeddedDevices ;
extern const char * gWrapperFileContent_177_embeddedDevices ;
extern const char * gWrapperFileContent_78_embeddedDevices ;
extern const char * gWrapperFileContent_410_embeddedDevices ;
extern const char * gWrapperFileContent_430_embeddedDevices ;
extern const char * gWrapperFileContent_232_embeddedDevices ;
extern const char * gWrapperFileContent_87_embeddedDevices ;
extern const char * gWrapperFileContent_354_embeddedDevices ;
extern const char * gWrapperFileContent_141_embeddedDevices ;
extern const char * gWrapperFileContent_230_embeddedDevices ;
extern const char * gWrapperFileContent_275_embeddedDevices ;
extern const char * gWrapperFileContent_128_embeddedDevices ;
extern const char * gWrapperFileContent_388_embeddedDevices ;
extern const char * gWrapperFileContent_101_embeddedDevices ;
extern const char * gWrapperFileContent_126_embeddedDevices ;
extern const char * gWrapperFileContent_450_embeddedDevices ;
extern const char * gWrapperFileContent_204_embeddedDevices ;
extern const char * gWrapperFileContent_343_embeddedDevices ;
extern const char * gWrapperFileContent_157_embeddedDevices ;
extern const char * gWrapperFileContent_170_embeddedDevices ;
extern const char * gWrapperFileContent_353_embeddedDevices ;
extern const char * gWrapperFileContent_140_embeddedDevices ;
extern const char * gWrapperFileContent_293_embeddedDevices ;
extern const char * gWrapperFileContent_192_embeddedDevices ;
extern const char * gWrapperFileContent_303_embeddedDevices ;
extern const char * gWrapperFileContent_224_embeddedDevices ;
extern const char * gWrapperFileContent_222_embeddedDevices ;
extern const char * gWrapperFileContent_22_embeddedDevices ;
extern const char * gWrapperFileContent_285_embeddedDevices ;
extern const char * gWrapperFileContent_81_embeddedDevices ;
extern const char * gWrapperFileContent_459_embeddedDevices ;
extern const char * gWrapperFileContent_291_embeddedDevices ;
extern const char * gWrapperFileContent_213_embeddedDevices ;
extern const char * gWrapperFileContent_237_embeddedDevices ;
extern const char * gWrapperFileContent_348_embeddedDevices ;
extern const char * gWrapperFileContent_18_embeddedDevices ;
extern const char * gWrapperFileContent_256_embeddedDevices ;
extern const char * gWrapperFileContent_32_embeddedDevices ;
extern const char * gWrapperFileContent_469_embeddedDevices ;
extern const char * gWrapperFileContent_374_embeddedDevices ;
extern const char * gWrapperFileContent_58_embeddedDevices ;
extern const char * gWrapperFileContent_344_embeddedDevices ;
extern const char * gWrapperFileContent_48_embeddedDevices ;
extern const char * gWrapperFileContent_302_embeddedDevices ;
extern const char * gWrapperFileContent_368_embeddedDevices ;
extern const char * gWrapperFileContent_394_embeddedDevices ;
extern const char * gWrapperFileContent_67_embeddedDevices ;
extern const char * gWrapperFileContent_436_embeddedDevices ;
extern const char * gWrapperFileContent_33_embeddedDevices ;
extern const char * gWrapperFileContent_398_embeddedDevices ;
extern const char * gWrapperFileContent_94_embeddedDevices ;
extern const char * gWrapperFileContent_3_embeddedDevices ;
extern const char * gWrapperFileContent_422_embeddedDevices ;
extern const char * gWrapperFileContent_71_embeddedDevices ;
extern const char * gWrapperFileContent_193_embeddedDevices ;
extern const char * gWrapperFileContent_138_embeddedDevices ;
extern const char * gWrapperFileContent_264_embeddedDevices ;
extern const char * gWrapperFileContent_172_embeddedDevices ;
extern const char * gWrapperFileContent_441_embeddedDevices ;
extern const char * gWrapperFileContent_173_embeddedDevices ;
extern const char * gWrapperFileContent_311_embeddedDevices ;
extern const char * gWrapperFileContent_233_embeddedDevices ;
extern const char * gWrapperFileContent_43_embeddedDevices ;
extern const char * gWrapperFileContent_135_embeddedDevices ;
extern const char * gWrapperFileContent_360_embeddedDevices ;
extern const char * gWrapperFileContent_251_embeddedDevices ;
extern const char * gWrapperFileContent_160_embeddedDevices ;
extern const char * gWrapperFileContent_331_embeddedDevices ;
extern const char * gWrapperFileContent_349_embeddedDevices ;
extern const char * gWrapperFileContent_238_embeddedDevices ;
extern const char * gWrapperFileContent_426_embeddedDevices ;
extern const char * gWrapperFileContent_407_embeddedDevices ;
extern const char * gWrapperFileContent_115_embeddedDevices ;
extern const char * gWrapperFileContent_191_embeddedDevices ;
extern const char * gWrapperFileContent_97_embeddedDevices ;
extern const char * gWrapperFileContent_38_embeddedDevices ;
extern const char * gWrapperFileContent_287_embeddedDevices ;
extern const char * gWrapperFileContent_301_embeddedDevices ;
extern const char * gWrapperFileContent_470_embeddedDevices ;
extern const char * gWrapperFileContent_373_embeddedDevices ;
extern const char * gWrapperFileContent_379_embeddedDevices ;
extern const char * gWrapperFileContent_27_embeddedDevices ;
extern const char * gWrapperFileContent_423_embeddedDevices ;
extern const char * gWrapperFileContent_52_embeddedDevices ;
extern const char * gWrapperFileContent_463_embeddedDevices ;
extern const char * gWrapperFileContent_84_embeddedDevices ;
extern const char * gWrapperFileContent_123_embeddedDevices ;
extern const char * gWrapperFileContent_304_embeddedDevices ;
extern const char * gWrapperFileContent_70_embeddedDevices ;
extern const char * gWrapperFileContent_363_embeddedDevices ;
extern const char * gWrapperFileContent_465_embeddedDevices ;
extern const char * gWrapperFileContent_320_embeddedDevices ;
extern const char * gWrapperFileContent_201_embeddedDevices ;
extern const char * gWrapperFileContent_165_embeddedDevices ;
extern const char * gWrapperFileContent_386_embeddedDevices ;
extern const char * gWrapperFileContent_26_embeddedDevices ;
extern const char * gWrapperFileContent_50_embeddedDevices ;
extern const char * gWrapperFileContent_371_embeddedDevices ;
extern const char * gWrapperFileContent_178_embeddedDevices ;
extern const char * gWrapperFileContent_4_embeddedDevices ;
extern const char * gWrapperFileContent_432_embeddedDevices ;
extern const char * gWrapperFileContent_308_embeddedDevices ;
extern const char * gWrapperFileContent_333_embeddedDevices ;
extern const char * gWrapperFileContent_189_embeddedDevices ;
extern const char * gWrapperFileContent_198_embeddedDevices ;
extern const char * gWrapperFileContent_241_embeddedDevices ;
extern const char * gWrapperFileContent_73_embeddedDevices ;
extern const char * gWrapperFileContent_116_embeddedDevices ;
extern const char * gWrapperFileContent_286_embeddedDevices ;
extern const char * gWrapperFileContent_147_embeddedDevices ;
extern const char * gWrapperFileContent_88_embeddedDevices ;
extern const char * gWrapperFileContent_416_embeddedDevices ;
extern const char * gWrapperFileContent_454_embeddedDevices ;
extern const char * gWrapperFileContent_209_embeddedDevices ;
extern const char * gWrapperFileContent_119_embeddedDevices ;
extern const char * gWrapperFileContent_268_embeddedDevices ;
extern const char * gWrapperFileContent_13_embeddedDevices ;
extern const char * gWrapperFileContent_188_embeddedDevices ;
extern const char * gWrapperFileContent_144_embeddedDevices ;
extern const char * gWrapperFileContent_265_embeddedDevices ;
extern const char * gWrapperFileContent_21_embeddedDevices ;
extern const char * gWrapperFileContent_439_embeddedDevices ;
extern const char * gWrapperFileContent_51_embeddedDevices ;
extern const char * gWrapperFileContent_382_embeddedDevices ;
extern const char * gWrapperFileContent_229_embeddedDevices ;
extern const char * gWrapperFileContent_19_embeddedDevices ;
extern const char * gWrapperFileContent_402_embeddedDevices ;
extern const char * gWrapperFileContent_40_embeddedDevices ;
extern const char * gWrapperFileContent_206_embeddedDevices ;
extern const char * gWrapperFileContent_279_embeddedDevices ;
extern const char * gWrapperFileContent_404_embeddedDevices ;
extern const char * gWrapperFileContent_300_embeddedDevices ;
extern const char * gWrapperFileContent_228_embeddedDevices ;
extern const char * gWrapperFileContent_113_embeddedDevices ;
extern const char * gWrapperFileContent_44_embeddedDevices ;
extern const char * gWrapperFileContent_366_embeddedDevices ;
extern const char * gWrapperFileContent_323_embeddedDevices ;
extern const char * gWrapperFileContent_292_embeddedDevices ;
extern const char * gWrapperFileContent_403_embeddedDevices ;
extern const char * gWrapperFileContent_9_embeddedDevices ;
extern const char * gWrapperFileContent_297_embeddedDevices ;
extern const char * gWrapperFileContent_260_embeddedDevices ;
extern const char * gWrapperFileContent_392_embeddedDevices ;
extern const char * gWrapperFileContent_443_embeddedDevices ;
extern const char * gWrapperFileContent_7_embeddedDevices ;
extern const char * gWrapperFileContent_254_embeddedDevices ;
extern const char * gWrapperFileContent_187_embeddedDevices ;
extern const char * gWrapperFileContent_166_embeddedDevices ;
extern const char * gWrapperFileContent_419_embeddedDevices ;
extern const char * gWrapperFileContent_8_embeddedDevices ;
extern const char * gWrapperFileContent_466_embeddedDevices ;
extern const char * gWrapperFileContent_276_embeddedDevices ;
extern const char * gWrapperFileContent_338_embeddedDevices ;
extern const char * gWrapperFileContent_249_embeddedDevices ;
extern const char * gWrapperFileContent_180_embeddedDevices ;
extern const char * gWrapperFileContent_370_embeddedDevices ;
extern const char * gWrapperFileContent_307_embeddedDevices ;
extern const char * gWrapperFileContent_105_embeddedDevices ;
extern const char * gWrapperFileContent_6_embeddedDevices ;
extern const char * gWrapperFileContent_447_embeddedDevices ;
extern const char * gWrapperFileContent_385_embeddedDevices ;
extern const char * gWrapperFileContent_47_embeddedDevices ;
extern const char * gWrapperFileContent_448_embeddedDevices ;
extern const char * gWrapperFileContent_108_embeddedDevices ;
extern const char * gWrapperFileContent_83_embeddedDevices ;
extern const char * gWrapperFileContent_442_embeddedDevices ;
extern const char * gWrapperFileContent_295_embeddedDevices ;
extern const char * gWrapperFileContent_225_embeddedDevices ;
extern const char * gWrapperFileContent_322_embeddedDevices ;
extern const char * gWrapperFileContent_393_embeddedDevices ;
extern const char * gWrapperFileContent_425_embeddedDevices ;
extern const char * gWrapperFileContent_85_embeddedDevices ;
extern const char * gWrapperFileContent_298_embeddedDevices ;
extern const char * gWrapperFileContent_362_embeddedDevices ;
extern const char * gWrapperFileContent_453_embeddedDevices ;
extern const char * gWrapperFileContent_399_embeddedDevices ;
extern const char * gWrapperFileContent_315_embeddedDevices ;
extern const char * gWrapperFileContent_130_embeddedDevices ;
extern const char * gWrapperFileContent_133_embeddedDevices ;
extern const char * gWrapperFileContent_359_embeddedDevices ;
extern const char * gWrapperFileContent_24_embeddedDevices ;
extern const char * gWrapperFileContent_219_embeddedDevices ;
extern const char * gWrapperFileContent_306_embeddedDevices ;
extern const char * gWrapperFileContent_197_embeddedDevices ;
extern const char * gWrapperFileContent_0_embeddedDevices ;
extern const char * gWrapperFileContent_75_embeddedDevices ;
extern const char * gWrapperFileContent_236_embeddedDevices ;
extern const char * gWrapperFileContent_12_embeddedDevices ;
extern const char * gWrapperFileContent_408_embeddedDevices ;
extern const char * gWrapperFileContent_427_embeddedDevices ;
extern const char * gWrapperFileContent_200_embeddedDevices ;
extern const char * gWrapperFileContent_325_embeddedDevices ;
extern const char * gWrapperFileContent_412_embeddedDevices ;
extern const char * gWrapperFileContent_446_embeddedDevices ;
extern const char * gWrapperFileContent_317_embeddedDevices ;
extern const char * gWrapperFileContent_214_embeddedDevices ;
extern const char * gWrapperFileContent_397_embeddedDevices ;
extern const char * gWrapperFileContent_473_embeddedDevices ;
extern const char * gWrapperFileContent_299_embeddedDevices ;
extern const char * gWrapperFileContent_155_embeddedDevices ;
extern const char * gWrapperFileContent_149_embeddedDevices ;
extern const char * gWrapperFileContent_182_embeddedDevices ;
extern const char * gWrapperFileContent_158_embeddedDevices ;
extern const char * gWrapperFileContent_347_embeddedDevices ;
extern const char * gWrapperFileContent_186_embeddedDevices ;
extern const char * gWrapperFileContent_190_embeddedDevices ;
extern const char * gWrapperFileContent_162_embeddedDevices ;
extern const char * gWrapperFileContent_326_embeddedDevices ;
extern const char * gWrapperFileContent_134_embeddedDevices ;
extern const char * gWrapperFileContent_131_embeddedDevices ;
extern const char * gWrapperFileContent_316_embeddedDevices ;
extern const char * gWrapperFileContent_217_embeddedDevices ;
extern const char * gWrapperFileContent_391_embeddedDevices ;
extern const char * gWrapperFileContent_28_embeddedDevices ;
extern const char * gWrapperFileContent_475_embeddedDevices ;
extern const char * gWrapperFileContent_455_embeddedDevices ;
extern const char * gWrapperFileContent_129_embeddedDevices ;
extern const char * gWrapperFileContent_45_embeddedDevices ;
extern const char * gWrapperFileContent_431_embeddedDevices ;
extern const char * gWrapperFileContent_107_embeddedDevices ;
extern const char * gWrapperFileContent_223_embeddedDevices ;
extern const char * gWrapperFileContent_429_embeddedDevices ;
extern const char * gWrapperFileContent_20_embeddedDevices ;
extern const char * gWrapperFileContent_102_embeddedDevices ;
extern const char * gWrapperFileContent_409_embeddedDevices ;
extern const char * gWrapperFileContent_111_embeddedDevices ;
extern const char * gWrapperFileContent_289_embeddedDevices ;
extern const char * gWrapperFileContent_365_embeddedDevices ;
extern const char * gWrapperFileContent_65_embeddedDevices ;
extern const char * gWrapperFileContent_60_embeddedDevices ;
extern const char * gWrapperFileContent_31_embeddedDevices ;
extern const char * gWrapperFileContent_294_embeddedDevices ;
extern const char * gWrapperFileContent_220_embeddedDevices ;
extern const char * gWrapperFileContent_389_embeddedDevices ;
extern const char * gWrapperFileContent_76_embeddedDevices ;
extern const char * gWrapperFileContent_380_embeddedDevices ;
extern const char * gWrapperFileContent_474_embeddedDevices ;
extern const char * gWrapperFileContent_372_embeddedDevices ;
extern const char * gWrapperFileContent_86_embeddedDevices ;
extern const char * gWrapperFileContent_271_embeddedDevices ;
extern const char * gWrapperFileContent_313_embeddedDevices ;
extern const char * gWrapperFileContent_250_embeddedDevices ;
extern const char * gWrapperFileContent_163_embeddedDevices ;
extern const char * gWrapperFileContent_335_embeddedDevices ;
extern const char * gWrapperFileContent_259_embeddedDevices ;
extern const char * gWrapperFileContent_176_embeddedDevices ;
extern const char * gWrapperFileContent_395_embeddedDevices ;
extern const char * gWrapperFileContent_296_embeddedDevices ;
extern const char * gWrapperFileContent_243_embeddedDevices ;
extern const char * gWrapperFileContent_324_embeddedDevices ;
extern const char * gWrapperFileContent_252_embeddedDevices ;
extern const char * gWrapperFileContent_221_embeddedDevices ;
extern const char * gWrapperFileContent_435_embeddedDevices ;
extern const char * gWrapperFileContent_89_embeddedDevices ;
extern const char * gWrapperFileContent_82_embeddedDevices ;
extern const char * gWrapperFileContent_10_embeddedDevices ;
extern const char * gWrapperFileContent_476_embeddedDevices ;
extern const char * gWrapperFileContent_46_embeddedDevices ;
extern const char * gWrapperFileContent_11_embeddedDevices ;
extern const char * gWrapperFileContent_17_embeddedDevices ;
extern const char * gWrapperFileContent_91_embeddedDevices ;
extern const char * gWrapperFileContent_39_embeddedDevices ;
extern const char * gWrapperFileContent_456_embeddedDevices ;
extern const char * gWrapperFileContent_69_embeddedDevices ;
extern const char * gWrapperFileContent_376_embeddedDevices ;
extern const char * gWrapperFileContent_36_embeddedDevices ;
extern const char * gWrapperFileContent_330_embeddedDevices ;
extern const char * gWrapperFileContent_342_embeddedDevices ;
extern const char * gWrapperFileContent_156_embeddedDevices ;
extern const char * gWrapperFileContent_139_embeddedDevices ;
extern const char * gWrapperFileContent_437_embeddedDevices ;
extern const char * gWrapperFileContent_345_embeddedDevices ;
extern const char * gWrapperFileContent_110_embeddedDevices ;
extern const char * gWrapperFileContent_413_embeddedDevices ;
extern const char * gWrapperFileContent_242_embeddedDevices ;
extern const char * gWrapperFileContent_199_embeddedDevices ;
extern const char * gWrapperFileContent_167_embeddedDevices ;
extern const char * gWrapperFileContent_352_embeddedDevices ;
extern const char * gWrapperFileContent_56_embeddedDevices ;
extern const char * gWrapperFileContent_467_embeddedDevices ;
extern const char * gWrapperFileContent_183_embeddedDevices ;
extern const char * gWrapperFileContent_255_embeddedDevices ;
extern const char * gWrapperFileContent_240_embeddedDevices ;
extern const char * gWrapperFileContent_327_embeddedDevices ;
extern const char * gWrapperFileContent_98_embeddedDevices ;
extern const char * gWrapperFileContent_418_embeddedDevices ;
extern const char * gWrapperFileContent_215_embeddedDevices ;
extern const char * gWrapperFileContent_272_embeddedDevices ;
extern const char * gWrapperFileContent_270_embeddedDevices ;
extern const char * gWrapperFileContent_195_embeddedDevices ;
extern const char * gWrapperFileContent_154_embeddedDevices ;
extern const char * gWrapperFileContent_169_embeddedDevices ;
extern const char * gWrapperFileContent_269_embeddedDevices ;
extern const char * gWrapperFileContent_25_embeddedDevices ;
extern const char * gWrapperFileContent_434_embeddedDevices ;
extern const char * gWrapperFileContent_93_embeddedDevices ;
extern const char * gWrapperFileContent_401_embeddedDevices ;
extern const char * gWrapperFileContent_63_embeddedDevices ;
extern const char * gWrapperFileContent_369_embeddedDevices ;
extern const char * gWrapperFileContent_212_embeddedDevices ;
extern const char * gWrapperFileContent_90_embeddedDevices ;
extern const char * gWrapperFileContent_421_embeddedDevices ;
extern const char * gWrapperFileContent_57_embeddedDevices ;
extern const char * gWrapperFileContent_35_embeddedDevices ;
extern const char * gWrapperFileContent_68_embeddedDevices ;
extern const char * gWrapperFileContent_420_embeddedDevices ;
extern const char * gWrapperFileContent_106_embeddedDevices ;
extern const char * gWrapperFileContent_151_embeddedDevices ;
extern const char * gWrapperFileContent_329_embeddedDevices ;
extern const char * gWrapperFileContent_104_embeddedDevices ;
extern const char * gWrapperFileContent_41_embeddedDevices ;
extern const char * gWrapperFileContent_23_embeddedDevices ;
extern const char * gWrapperFileContent_77_embeddedDevices ;
extern const char * gWrapperFileContent_468_embeddedDevices ;
extern const char * gWrapperFileContent_414_embeddedDevices ;
extern const char * gWrapperFileContent_30_embeddedDevices ;
extern const char * gWrapperFileContent_145_embeddedDevices ;
extern const char * gWrapperFileContent_121_embeddedDevices ;
extern const char * gWrapperFileContent_310_embeddedDevices ;
extern const char * gWrapperFileContent_34_embeddedDevices ;
extern const char * gWrapperFileContent_355_embeddedDevices ;
extern const char * gWrapperFileContent_205_embeddedDevices ;
extern const char * gWrapperFileContent_14_embeddedDevices ;
extern const char * gWrapperFileContent_438_embeddedDevices ;
extern const char * gWrapperFileContent_153_embeddedDevices ;
extern const char * gWrapperFileContent_452_embeddedDevices ;
extern const char * gWrapperFileContent_99_embeddedDevices ;
extern const char * gWrapperFileContent_148_embeddedDevices ;
extern const char * gWrapperFileContent_92_embeddedDevices ;
extern const char * gWrapperFileContent_433_embeddedDevices ;
extern const char * gWrapperFileContent_257_embeddedDevices ;
extern const char * gWrapperFileContent_346_embeddedDevices ;
extern const char * gWrapperFileContent_49_embeddedDevices ;
extern const char * gWrapperFileContent_244_embeddedDevices ;
extern const char * gWrapperFileContent_314_embeddedDevices ;
extern const char * gWrapperFileContent_457_embeddedDevices ;
extern const char * gWrapperFileContent_61_embeddedDevices ;
extern const char * gWrapperFileContent_95_embeddedDevices ;
extern const char * gWrapperFileContent_400_embeddedDevices ;
extern const char * gWrapperFileContent_185_embeddedDevices ;
extern const char * gWrapperFileContent_387_embeddedDevices ;
extern const char * gWrapperFileContent_207_embeddedDevices ;
extern const char * gWrapperFileContent_290_embeddedDevices ;
extern const char * gWrapperFileContent_64_embeddedDevices ;
extern const char * gWrapperFileContent_239_embeddedDevices ;
extern const char * gWrapperFileContent_132_embeddedDevices ;
extern const char * gWrapperFileContent_53_embeddedDevices ;
extern const char * gWrapperFileContent_122_embeddedDevices ;
extern const char * gWrapperFileContent_278_embeddedDevices ;
extern const char * gWrapperFileContent_462_embeddedDevices ;
extern const char * gWrapperFileContent_378_embeddedDevices ;
extern const char * gWrapperFileContent_137_embeddedDevices ;
extern const char * gWrapperFileContent_460_embeddedDevices ;
extern const char * gWrapperFileContent_405_embeddedDevices ;
extern const char * gWrapperFileContent_247_embeddedDevices ;
extern const char * gWrapperFileContent_184_embeddedDevices ;
extern const char * gWrapperFileContent_337_embeddedDevices ;

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const cRegularFileWrapper gWrapperFile_0_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_1_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_2_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_3_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_4_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_5_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_6_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_7_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_8_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_9_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_10_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_11_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_12_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_13_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_14_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_15_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_16_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_17_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_18_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_19_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_20_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_21_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_22_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_23_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_24_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_25_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_26_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_27_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_28_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_29_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_30_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_31_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_32_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_33_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_34_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_35_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_36_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_37_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_38_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_39_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_40_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_41_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_42_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_43_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_44_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_45_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_46_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_47_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_48_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_49_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_50_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_51_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_52_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_53_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_54_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_55_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_56_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_57_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_58_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_59_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_60_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_61_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_62_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_63_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_64_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_65_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_66_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_67_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_68_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_69_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_70_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_71_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_72_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_73_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_74_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_75_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_76_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_77_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_78_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_79_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_80_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_81_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_82_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_83_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_84_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_85_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_86_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_87_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_88_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_89_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_90_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_91_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_92_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_93_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_94_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_95_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_96_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_97_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_98_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_99_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_100_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_101_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_102_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_103_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_104_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_105_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_106_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_107_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_108_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_109_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_110_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_111_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_112_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_113_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_114_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_115_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_116_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_117_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_118_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_119_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_120_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_121_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_122_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_123_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_124_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_125_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_126_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_127_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_128_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_129_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_130_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_131_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_132_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_133_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_134_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_135_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_136_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_137_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_138_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_139_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_140_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_141_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_142_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_143_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_144_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_145_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_146_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_147_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_148_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_149_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_150_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_151_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_152_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_153_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_154_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_155_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_156_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_157_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_158_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_159_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_160_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_161_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_162_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_163_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_164_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_165_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_166_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_167_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_168_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_169_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_170_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_171_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_172_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_173_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_174_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_175_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_176_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_177_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_178_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_179_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_180_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_181_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_182_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_183_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_184_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_185_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_186_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_187_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_188_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_189_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_190_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_191_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_192_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_193_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_194_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_195_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_196_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_197_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_198_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_199_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_200_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_201_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_202_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_203_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_204_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_205_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_206_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_207_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_208_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_209_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_210_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_211_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_212_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_213_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_214_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_215_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_216_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_217_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_218_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_219_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_220_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_221_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_222_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_223_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_224_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_225_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_226_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_227_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_228_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_229_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_230_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_231_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_232_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_233_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_234_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_235_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_236_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_237_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_238_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_239_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_240_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_241_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_242_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_243_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_244_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_245_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_246_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_247_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_248_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_249_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_250_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_251_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_252_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_253_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_254_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_255_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_256_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_257_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_258_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_259_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_260_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_261_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_262_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_263_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_264_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_265_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_266_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_267_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_268_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_269_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_270_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_271_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_272_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_273_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_274_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_275_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_276_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_277_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_278_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_279_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_280_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_281_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_282_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_283_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_284_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_285_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_286_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_287_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_288_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_289_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_290_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_291_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_292_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_293_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_294_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_295_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_296_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_297_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_298_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_299_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_300_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_301_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_302_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_303_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_304_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_305_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_306_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_307_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_308_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_309_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_310_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_311_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_312_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_313_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_314_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_315_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_316_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_317_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_318_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_319_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_320_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_321_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_322_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_323_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_324_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_325_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_326_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_327_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_328_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_329_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_330_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_331_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_332_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_333_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_334_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_335_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_336_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_337_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_338_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_339_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_340_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_341_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_342_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_343_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_344_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_345_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_346_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_347_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_348_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_349_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_350_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_351_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_352_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_353_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_354_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_355_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_356_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_357_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_358_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_359_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_360_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_361_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_362_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_363_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_364_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_365_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_366_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_367_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_368_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_369_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_370_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_371_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_372_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_373_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_374_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_375_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_376_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_377_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_378_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_379_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_380_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_381_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_382_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_383_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_384_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_385_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_386_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_387_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_388_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_389_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_390_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_391_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_392_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_393_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_394_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_395_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_396_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_397_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_398_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_399_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_400_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_401_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_402_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_403_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_404_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_405_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_406_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_407_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_408_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_409_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_410_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_411_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_412_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_413_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_414_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_415_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_416_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_417_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_418_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_419_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_420_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_421_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_422_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_423_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_424_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_425_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_426_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_427_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_428_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_429_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_430_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_431_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_432_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_433_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_434_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_435_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_436_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_437_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_438_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_439_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_440_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_441_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_442_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_443_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_444_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_445_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_446_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_447_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_448_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_449_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_450_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_451_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_452_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_453_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_454_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_455_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_456_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_457_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_458_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_459_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_460_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_461_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_462_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_463_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_464_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_465_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_466_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_467_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_468_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_469_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_470_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_471_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_472_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_473_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_474_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_475_embeddedDevices ;
extern const cRegularFileWrapper gWrapperFile_476_embeddedDevices ;

//--------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_embeddedDevices ;

