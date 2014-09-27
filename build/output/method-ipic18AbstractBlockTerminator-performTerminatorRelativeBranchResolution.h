#ifndef method_2D_ipic_31__38_AbstractBlockTerminator_2D_performTerminatorRelativeBranchResolution_1_DEFINED
#define method_2D_ipic_31__38_AbstractBlockTerminator_2D_performTerminatorRelativeBranchResolution_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Category method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                       const class GALGAS_uint constinArgument0,
                                                                                                                       const class GALGAS_string constinArgument1,
                                                                                                                       const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                                       const class GALGAS_string constinArgument3,
                                                                                                                       class GALGAS_uint & ioArgument4,
                                                                                                                       class GALGAS_string & ioArgument5,
                                                                                                                       class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument6,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_performTerminatorRelativeBranchResolution (const int32_t inClassIndex,
                                                                    categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_performTerminatorRelativeBranchResolution (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                   const GALGAS_uint constin_inAddress,
                                                                   const GALGAS_string constin_inBlockLabel,
                                                                   const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                   const GALGAS_string constin_inNextBlockLabel,
                                                                   GALGAS_uint & io_ioConversionCount,
                                                                   GALGAS_string & io_ioListFileContents,
                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

