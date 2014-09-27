#ifndef method_2D_ipic_31__38_SequentialInstruction_2D_performInstructionRelativeBranchResolution_1_DEFINED
#define method_2D_ipic_31__38_SequentialInstruction_2D_performInstructionRelativeBranchResolution_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Category method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                      const class GALGAS_uint constinArgument0,
                                                                                                                      const class GALGAS_string constinArgument1,
                                                                                                                      const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                                      class GALGAS_uint & ioArgument3,
                                                                                                                      class GALGAS_string & ioArgument4,
                                                                                                                      class GALGAS_ipic_31__38_SequentialInstruction & outArgument5,
                                                                                                                      class C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performInstructionRelativeBranchResolution (const int32_t inClassIndex,
                                                                     categoryMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performInstructionRelativeBranchResolution (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                    const GALGAS_uint constin_inAddress,
                                                                    const GALGAS_string constin_inBlockLabel,
                                                                    const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    GALGAS_uint & io_ioConversionCount,
                                                                    GALGAS_string & io_ioListFileContents,
                                                                    GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

