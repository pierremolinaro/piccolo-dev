#ifndef proc_2D_analyze_5F_ram_5F_sections_1_DEFINED
#define proc_2D_analyze_5F_ram_5F_sections_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'analyze_ram_sections'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyze_5F_ram_5F_sections (const class GALGAS_string constinArgument0,
                                         const class GALGAS_ramDefinitionList constinArgument1,
                                         class GALGAS_ramBankTable & ioArgument2,
                                         const class GALGAS_registerTable constinArgument3,
                                         class GALGAS_string & ioArgument4,
                                         class GALGAS_registerTable & ioArgument5,
                                         class GALGAS_declaredByteMap & outArgument6,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

