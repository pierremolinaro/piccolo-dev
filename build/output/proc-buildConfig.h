#ifndef proc_2D_buildConfig_1_DEFINED
#define proc_2D_buildConfig_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Routine 'buildConfig'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildConfig (const class GALGAS_configRegisterMap constinArgument0,
                          const class GALGAS_configDefinitionList constinArgument1,
                          class GALGAS_string & ioArgument2,
                          class GALGAS_actualConfigurationMap & outArgument3,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

