#ifndef method_2D_declarationInRam_2D_handleDeclaration_1_DEFINED
#define method_2D_declarationInRam_2D_handleDeclaration_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@declarationInRam handleDeclaration'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_declarationInRam_handleDeclaration) (const class cPtr_declarationInRam * inObject,
                                                                            class GALGAS_ramBankTable & ioArgument0,
                                                                            class GALGAS_registerTable & ioArgument1,
                                                                            const class GALGAS_lstring constinArgument2,
                                                                            class GALGAS_declaredByteMap & ioArgument3,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_handleDeclaration (const int32_t inClassIndex,
                                            categoryMethodSignature_declarationInRam_handleDeclaration inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_handleDeclaration (const class cPtr_declarationInRam * inObject,
                                           GALGAS_ramBankTable & io_ioRamBank,
                                           GALGAS_registerTable & io_ioRegisterTable,
                                           const GALGAS_lstring constin_inCurrentRamBank,
                                           GALGAS_declaredByteMap & io_ioDeclaredByteMap,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

