#ifndef method_2D_ipic_31__38_AbstractBlockTerminator_2D_buildTerminatorInvocationGraph_1_DEFINED
#define method_2D_ipic_31__38_AbstractBlockTerminator_2D_buildTerminatorInvocationGraph_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Abstract category method '@ipic18AbstractBlockTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                            const class GALGAS_lstring constinArgument0,
                                                                                                            class GALGAS_string & ioArgument1,
                                                                                                            const class GALGAS_bool constinArgument2,
                                                                                                            class C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildTerminatorInvocationGraph (const int32_t inClassIndex,
                                                         categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_buildTerminatorInvocationGraph inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildTerminatorInvocationGraph (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                        const GALGAS_lstring constin_inBlockLabel,
                                                        GALGAS_string & io_ioGraphVizString,
                                                        const GALGAS_bool constin_inDottedArrow,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

