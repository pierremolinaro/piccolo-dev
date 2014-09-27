#ifndef method_2D_ipic_31__38_SequentialInstruction_2D_instructionRelativeBranchOverflow_1_DEFINED
#define method_2D_ipic_31__38_SequentialInstruction_2D_instructionRelativeBranchOverflow_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Category method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                             const class GALGAS_uint constinArgument0,
                                                                                                             const class GALGAS_string constinArgument1,
                                                                                                             const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                             class GALGAS_branchOverflowMap & ioArgument3,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_instructionRelativeBranchOverflow (const int32_t inClassIndex,
                                                            categoryMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_instructionRelativeBranchOverflow (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GALGAS_uint constin_inAddress,
                                                           const GALGAS_string constin_inBlockLabel,
                                                           const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

