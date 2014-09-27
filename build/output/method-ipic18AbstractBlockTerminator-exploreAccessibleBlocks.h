#ifndef method_2D_ipic_31__38_AbstractBlockTerminator_2D_exploreAccessibleBlocks_1_DEFINED
#define method_2D_ipic_31__38_AbstractBlockTerminator_2D_exploreAccessibleBlocks_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Abstract category method '@ipic18AbstractBlockTerminator exploreAccessibleBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocks) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     class GALGAS_stringset & ioArgument0,
                                                                                                     class GALGAS_stringset & ioArgument1,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_exploreAccessibleBlocks (const int32_t inClassIndex,
                                                  categoryMethodSignature_ipic_31__38_AbstractBlockTerminator_exploreAccessibleBlocks inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_exploreAccessibleBlocks (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 GALGAS_stringset & io_ioBlockToExploreSet,
                                                 GALGAS_stringset & io_ioExploredBlockSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

