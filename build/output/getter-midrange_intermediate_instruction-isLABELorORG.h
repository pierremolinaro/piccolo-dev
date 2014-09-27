#ifndef getter_2D_midrange_5F_intermediate_5F_instruction_2D_isLABELorORG_1_DEFINED
#define getter_2D_midrange_5F_intermediate_5F_instruction_2D_isLABELorORG_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category reader '@midrange_intermediate_instruction isLABELorORG'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isLABELorORG (const int32_t inClassIndex,
                                       categoryReaderSignature_midrange_5F_intermediate_5F_instruction_isLABELorORG inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

