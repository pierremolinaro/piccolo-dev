#ifndef getter_2D_registerExpression_2D_getRegisterAddress_1_DEFINED
#define getter_2D_registerExpression_2D_getRegisterAddress_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category reader '@registerExpression getRegisterAddress'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_registerExpression_getRegisterAddress) (const class cPtr_registerExpression * inObject,
                                                                                            const class GALGAS_registerTable & constinArgument0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_getRegisterAddress (const int32_t inClassIndex,
                                             categoryReaderSignature_registerExpression_getRegisterAddress inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_getRegisterAddress (const cPtr_registerExpression * inObject,
                                                         const GALGAS_registerTable & constin_inRegisterTable,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

