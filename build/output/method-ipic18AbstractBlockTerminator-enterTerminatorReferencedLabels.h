#ifndef method_2D_ipic_31__38_AbstractBlockTerminator_2D_enterTerminatorReferencedLabels_1_DEFINED
#define method_2D_ipic_31__38_AbstractBlockTerminator_2D_enterTerminatorReferencedLabels_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                             const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                             const class GALGAS_ipic_31__38_BlockList constinArgument1,
                                                                                                             class GALGAS_stringset & ioArgument2,
                                                                                                             class C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterTerminatorReferencedLabels (const int32_t inClassIndex,
                                                          categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_enterTerminatorReferencedLabels inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterTerminatorReferencedLabels (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                         const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                         const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                         GALGAS_stringset & io_ioReferencedBlockSet,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

