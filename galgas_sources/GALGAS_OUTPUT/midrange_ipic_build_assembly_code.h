//---------------------------------------------------------------------------*
//                                                                           *
//                File 'midrange_ipic_build_assembly_code.h'                 *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                     august 23th, 2008, at 19h15'23"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef midrange_ipic_build_assembly_code_DEFINED
#define midrange_ipic_build_assembly_code_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

// Include imported semantics
#include "midrange_ipic_metamodel.h"
#include "piccolo_embedded_devices.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//      Category method '@midrange_ipic_instruction.buildAssemblyCode'       *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*typeCategoryMethod__midrange_ipic_instruction__buildAssemblyCode)  (C_Compiler & _inLexique,
                                const cPtr_midrange_ipic_instruction * inObjectPtr,
                                GGS_string & var_cas_ioString,
                                GGS_uint  & var_cas_ioLocalLabelIndex
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void
enterCategoryMethod__midrange_ipic_instruction__buildAssemblyCode (typeCategoryMethod__midrange_ipic_instruction__buildAssemblyCode inRoutine,
                     const sint32 inClassID) ;

//---------------------------------------------------------------------------*

typeCategoryMethod__midrange_ipic_instruction__buildAssemblyCode
findCategoryMethod__midrange_ipic_instruction__buildAssemblyCode (AC_galgasClassRunTimeInformation * inClassPtr) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                  Routine 'midrange_build_assembly_code'                   *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_midrange_build_assembly_code (C_Compiler &,
                                const GGS_string ,
                                const GGS_registerTable  ,
                                const GGS_registerTable  ,
                                const GGS_midrange_ipic_instructionList  ,
                                const GGS_actualConfigurationMap  ,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif