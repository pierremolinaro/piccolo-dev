//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'ram_sections.cpp'                           *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      august 21th, 2008, at 20h4'31"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != THE_LIBPM_VERSION
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "ram_sections.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "ram_sections.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
// Virtual Table for category method '@declarationInRam.handleDeclaration'   *
//                                                                           *
//---------------------------------------------------------------------------*

static TC_UniqueArray <typeCategoryMethod__declarationInRam__handleDeclaration> gDispatchTableFor__declarationInRam__handleDeclaration ;

//---------------------------------------------------------------------------*

void
enterCategoryMethod__declarationInRam__handleDeclaration (typeCategoryMethod__declarationInRam__handleDeclaration inRoutine,
                     const sint32 inClassID) {
  gDispatchTableFor__declarationInRam__handleDeclaration.forceObjectAtIndex (inClassID, inRoutine, NULL) ;
}

//---------------------------------------------------------------------------*

typeCategoryMethod__declarationInRam__handleDeclaration
findCategoryMethod__declarationInRam__handleDeclaration (AC_galgasClassRunTimeInformation * inClassPtr) {
  typeCategoryMethod__declarationInRam__handleDeclaration result = NULL ;
  if (inClassPtr->slotID () < gDispatchTableFor__declarationInRam__handleDeclaration.count ()) {
    result = gDispatchTableFor__declarationInRam__handleDeclaration (inClassPtr->slotID () COMMA_HERE) ;
  }
  if (result == NULL) {
    AC_galgasClassRunTimeInformation * superClassPtr = inClassPtr->superClassPtr () ;
    if (superClassPtr != NULL) {
      result = findCategoryMethod__declarationInRam__handleDeclaration (superClassPtr) ;
      gDispatchTableFor__declarationInRam__handleDeclaration.forceObjectAtIndex (inClassPtr->slotID (), result, NULL) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//       Category method '@commonDeclarationInRam.handleDeclaration'         *
//                                                                           *
//---------------------------------------------------------------------------*

static void
category_method__commonDeclarationInRam__handleDeclaration (C_Compiler & _inLexique,
                                const cPtr_commonDeclarationInRam * operand_1324,
                                GGS_ramBankTable  & var_cas_ioRamBank,
                                GGS_registerTable  & var_cas_ioRegisterTable,
                                const GGS_lstring   var_cas_inCurrentRamBank
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (operand_1324 != NULL) {
    GGS_uint  var_cas_firstFreeAddressBeforeCommon ;
    GGS_uint  automatic_var_0 ;
    GGS_uintlist  automatic_var_1 ;
    const GGS_ramBankTable  _temp_1481 = var_cas_ioRamBank ;
    if (_temp_1481._isBuilt ()) {
      _temp_1481 (HERE)->method_searchKey (_inLexique, var_cas_inCurrentRamBank, var_cas_firstFreeAddressBeforeCommon, automatic_var_0, automatic_var_1 COMMA_SOURCE_FILE_AT_LINE (32)) ;
    }
    GGS_bool var_cas_firstFreeAddressDefined ;
    var_cas_firstFreeAddressDefined = GGS_bool (true, false) ;
    GGS_uint  var_cas_firstFreeAddress ;
    var_cas_firstFreeAddress = GGS_uint (true, 0U) ;
    {
      GGS_commonBranchList::cEnumerator enumerator_1635 (operand_1324->mBranchList, true) ;
      const GGS_commonBranchList::cElement * operand_1635 = NULL ;
      while (((operand_1635 = enumerator_1635.nextObject ()))) {
        macroValidPointer (operand_1635) ;
        GGS_ramBankTable  var_cas_ramBank ;
        var_cas_ramBank = var_cas_ioRamBank ;
        {
          GGS_declarationInRamList::cEnumerator enumerator_1705 (operand_1635->mDeclarations, true) ;
          const GGS_declarationInRamList::cElement * operand_1705 = NULL ;
          while (((operand_1705 = enumerator_1705.nextObject ()))) {
            macroValidPointer (operand_1705) ;
            const GGS_declarationInRam  _temp_1746 = operand_1705->mDeclaration ;
            if (_temp_1746._isBuilt ()) {
              typeCategoryMethod__declarationInRam__handleDeclaration _method = findCategoryMethod__declarationInRam__handleDeclaration (_temp_1746._galgasObjectRunTimeInfo ()) ;
              if (_method != NULL) {
                _method (_inLexique, _temp_1746 (HERE), var_cas_ramBank, var_cas_ioRegisterTable, var_cas_inCurrentRamBank COMMA_SOURCE_FILE_AT_LINE (38)) ;
              }
            }
          }
        }
        GGS_uint  var_cas_ffa ;
        GGS_uint  automatic_var_2 ;
        GGS_uintlist  automatic_var_3 ;
        const GGS_ramBankTable  _temp_1852 = var_cas_ramBank ;
        if (_temp_1852._isBuilt ()) {
          _temp_1852 (HERE)->method_searchKey (_inLexique, var_cas_inCurrentRamBank, var_cas_ffa, automatic_var_2, automatic_var_3 COMMA_SOURCE_FILE_AT_LINE (41)) ;
        }
        if (((var_cas_firstFreeAddressDefined)._operator_not ()).isBuiltAndTrue ()) {
          var_cas_firstFreeAddress = var_cas_ffa ;
          var_cas_firstFreeAddressDefined = GGS_bool (true, true) ;
        }else if (((var_cas_ffa)._operator_isNotEqual (var_cas_firstFreeAddress)).isBuiltAndTrue ()) {
          operand_1635->mEndOfBranchLocation.reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, ((((GGS_string (true, "this branch allocates "))._operator_concat (var_cas_ffa._substract_operation (_inLexique, var_cas_firstFreeAddressBeforeCommon COMMA_SOURCE_FILE_AT_LINE (46)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (46))))._operator_concat (GGS_string (true, " byte(s), while the first branch allocates ")))._operator_concat (var_cas_firstFreeAddress._substract_operation (_inLexique, var_cas_firstFreeAddressBeforeCommon COMMA_SOURCE_FILE_AT_LINE (48)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (48))))._operator_concat (GGS_string (true, " byte(s)")) COMMA_SOURCE_FILE_AT_LINE (49)) ;
        }
      }
    }
    var_cas_ioRamBank.modifier_setMFirstFreeAddressForKey (_inLexique, var_cas_firstFreeAddress, var_cas_inCurrentRamBank.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (51)) COMMA_SOURCE_FILE_AT_LINE (51)) ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Category method '@byteDeclarationInRam.handleDeclaration'          *
//                                                                           *
//---------------------------------------------------------------------------*

static void
category_method__byteDeclarationInRam__handleDeclaration (C_Compiler & _inLexique,
                                const cPtr_byteDeclarationInRam * operand_2543,
                                GGS_ramBankTable  & var_cas_ioRamBank,
                                GGS_registerTable  & var_cas_ioRegisterTable,
                                const GGS_lstring   var_cas_inCurrentRamBank
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (operand_2543 != NULL) {
    GGS_uint  var_cas_lastAddressPlusOne ;
    GGS_uint  var_cas_firstFreeAddress ;
    GGS_uintlist  var_cas_mirrorOffsetList ;
    const GGS_ramBankTable  _temp_2748 = var_cas_ioRamBank ;
    if (_temp_2748._isBuilt ()) {
      _temp_2748 (HERE)->method_searchKey (_inLexique, var_cas_inCurrentRamBank, var_cas_firstFreeAddress, var_cas_lastAddressPlusOne, var_cas_mirrorOffsetList COMMA_SOURCE_FILE_AT_LINE (64)) ;
    }
    if (((operand_2543->mSize.reader_uint (_inLexique COMMA_SOURCE_FILE_AT_LINE (65)))._operator_isEqual (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
      operand_2543->mSize.reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "zero size is not allowed") COMMA_SOURCE_FILE_AT_LINE (67)) ;
    }
    GGS_uintlist  var_cas_addressList ;
    var_cas_addressList = GGS_uintlist ::constructor_listWithValue (var_cas_firstFreeAddress) ;
    {
      GGS_uintlist::cEnumerator enumerator_2997 (var_cas_mirrorOffsetList, true) ;
      const GGS_uintlist::cElement * operand_2997 = NULL ;
      while (((operand_2997 = enumerator_2997.nextObject ()))) {
        macroValidPointer (operand_2997) ;
        var_cas_addressList._addAssign_operation (var_cas_firstFreeAddress._add_operation (_inLexique, operand_2997->mValue COMMA_SOURCE_FILE_AT_LINE (70))) ;
      }
    }
    var_cas_ioRegisterTable.modifier_insertKey (_inLexique, operand_2543->mName, var_cas_addressList, operand_2543->mSize.reader_uint (_inLexique COMMA_SOURCE_FILE_AT_LINE (72)), operand_2543->mBitSliceTable, operand_2543->mBitDefinitionString COMMA_SOURCE_FILE_AT_LINE (72)) ;
    var_cas_firstFreeAddress = var_cas_firstFreeAddress._add_operation (_inLexique, operand_2543->mSize.reader_uint (_inLexique COMMA_SOURCE_FILE_AT_LINE (73)) COMMA_SOURCE_FILE_AT_LINE (73)) ;
    var_cas_ioRamBank.modifier_setMFirstFreeAddressForKey (_inLexique, var_cas_firstFreeAddress, var_cas_inCurrentRamBank.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (74)) COMMA_SOURCE_FILE_AT_LINE (74)) ;
    if (((var_cas_firstFreeAddress)._operator_strictSup (var_cas_lastAddressPlusOne)).isBuiltAndTrue ()) {
      operand_2543->mName.reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, ((((GGS_string (true, "overflow in '"))._operator_concat (var_cas_inCurrentRamBank))._operator_concat (GGS_string (true, "' ram bank for '")))._operator_concat (operand_2543->mName))._operator_concat (GGS_string (true, "' declaration")) COMMA_SOURCE_FILE_AT_LINE (77)) ;
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of routine "analyze_ram_sections"              *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_analyze_ram_sections (C_Compiler & _inLexique,
                                const GGS_ramDefinitionList   var_cas_inRamDefinitionList,
                                GGS_ramBankTable  & var_cas_ioRamBankTable,
                                const GGS_registerTable   var_cas_inSpecialRegisterTable,
                                GGS_string & var_cas_ioListFileContents,
                                GGS_registerTable  & var_cas_outAllRegisters COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_analyze_ram_sections at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  var_cas_outAllRegisters = var_cas_inSpecialRegisterTable ;
  {
    GGS_ramDefinitionList::cEnumerator enumerator_4176 (var_cas_inRamDefinitionList, true) ;
    const GGS_ramDefinitionList::cElement * operand_4176 = NULL ;
    while (((operand_4176 = enumerator_4176.nextObject ()))) {
      macroValidPointer (operand_4176) ;
      {
        GGS_declarationInRamList::cEnumerator enumerator_4204 (operand_4176->mDeclaration, true) ;
        const GGS_declarationInRamList::cElement * operand_4204 = NULL ;
        while (((operand_4204 = enumerator_4204.nextObject ()))) {
          macroValidPointer (operand_4204) ;
          const GGS_declarationInRam  _temp_4245 = operand_4204->mDeclaration ;
          if (_temp_4245._isBuilt ()) {
            typeCategoryMethod__declarationInRam__handleDeclaration _method = findCategoryMethod__declarationInRam__handleDeclaration (_temp_4245._galgasObjectRunTimeInfo ()) ;
            if (_method != NULL) {
              _method (_inLexique, _temp_4245 (HERE), var_cas_ioRamBankTable, var_cas_outAllRegisters, operand_4176->mBankName COMMA_SOURCE_FILE_AT_LINE (95)) ;
            }
          }
        }
      }
    }
  }
  if ((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("piccolo_options", "ouputListingFile" COMMA_SOURCE_FILE_AT_LINE (98)))).isBuiltAndTrue ()) {
    var_cas_ioListFileContents._dotAssign_operation (GGS_string (true, "").reader_stringByLeftAndRightPadding (_inLexique, GGS_uint (true, 79U), GGS_char (true, '*') COMMA_SOURCE_FILE_AT_LINE (99))) ;
    var_cas_ioListFileContents.writeString ("\n") ;
    var_cas_ioListFileContents.writeString ("*") ;
    var_cas_ioListFileContents._dotAssign_operation (GGS_string (true, "DECLARED VARIABLES").reader_stringByLeftAndRightPadding (_inLexique, GGS_uint (true, 77U), GGS_char (true, ' ') COMMA_SOURCE_FILE_AT_LINE (100))) ;
    var_cas_ioListFileContents.writeString ("*\n") ;
    var_cas_ioListFileContents._dotAssign_operation (GGS_string (true, "").reader_stringByLeftAndRightPadding (_inLexique, GGS_uint (true, 79U), GGS_char (true, '*') COMMA_SOURCE_FILE_AT_LINE (101))) ;
    var_cas_ioListFileContents.writeString ("\n"
      "\n") ;
    {
      GGS_registerTable::cEnumerator enumerator_4667 (var_cas_outAllRegisters, true) ;
      const GGS_registerTable::cElement * operand_4667 = NULL ;
      while (((operand_4667 = enumerator_4667.nextObject ()))) {
        macroValidPointer (operand_4667) ;
        if (((var_cas_inSpecialRegisterTable.reader_hasKey (_inLexique, operand_4667->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (103)) COMMA_SOURCE_FILE_AT_LINE (103)))._operator_not ()).isBuiltAndTrue ()) {
          var_cas_ioListFileContents._dotAssign_operation (operand_4667->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (104)).reader_stringByLeftPadding (_inLexique, GGS_uint (true, 40U), GGS_char (true, ' ') COMMA_SOURCE_FILE_AT_LINE (104))) ;
          var_cas_ioListFileContents.writeString (" ") ;
          {
            GGS_uintlist::cEnumerator enumerator_4853 (operand_4667->mInfo.mRegisterAddressList, true) ;
            const GGS_uintlist::cElement * operand_4853 = enumerator_4853.nextObject () ;
            if ((operand_4853 != NULL)) {
              bool _foreach_loop_4853 ;
              do{
                macroValidPointer (operand_4853) ;
                var_cas_ioListFileContents._dotAssign_operation (operand_4853->mValue.reader_hexString (_inLexique COMMA_SOURCE_FILE_AT_LINE (106))) ;
                operand_4853 = enumerator_4853.nextObject () ;
                _foreach_loop_4853 = ((operand_4853 != NULL)) ;
                if (_foreach_loop_4853) {
                  var_cas_ioListFileContents.writeString (", ") ;
                }
              }while (_foreach_loop_4853) ;
            }
          }
          var_cas_ioListFileContents._dotAssign_operation (operand_4667->mInfo.mBitDefinitionString) ;
          var_cas_ioListFileContents.writeString ("\n") ;
        }
      }
    }
    var_cas_ioListFileContents.writeString ("\n") ;
  }
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_analyze_ram_sections\n") ;
  #endif
}

//---------------------------------------------------------------------------*
//                                                                           *
//                      Prologue and epilogue actions                        *
//                                                                           *
//---------------------------------------------------------------------------*

static void prologueRoutineFor_ram_sections (void) {
 enterCategoryMethod__declarationInRam__handleDeclaration ((typeCategoryMethod__declarationInRam__handleDeclaration) category_method__commonDeclarationInRam__handleDeclaration, gClassInfoFor__commonDeclarationInRam.slotID ()) ;
 enterCategoryMethod__declarationInRam__handleDeclaration ((typeCategoryMethod__declarationInRam__handleDeclaration) category_method__byteDeclarationInRam__handleDeclaration, gClassInfoFor__byteDeclarationInRam.slotID ()) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogueAction prologueEpilogueObjectFor_ram_sections (prologueRoutineFor_ram_sections,
                                   NULL) ;

//---------------------------------------------------------------------------*
