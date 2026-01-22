#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"



//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_configuration_5F_definition_i0_ (GGS_configDefinitionList & ioArgument_ioConfigDefinitionList,
                                                                    Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("communs.galgas", 8)) ;
  GGS_location var_defLocation_200 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 9)) ;
  GGS_configSettingList var_settingList_235 = GGS_configSettingList::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("communs.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_0 (inCompiler) == 2) {
      GGS_lstring var_settingName_324 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 14)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("communs.galgas", 15)) ;
      GGS_lstring var_settingValue_361 ;
      switch (select_communs_1 (inCompiler)) {
      case 1: {
        var_settingValue_361 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 18)) ;
      } break ;
      case 2: {
        var_settingValue_361 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("communs.galgas", 20)) ;
      } break ;
      default:
        break ;
      }
      var_settingList_235.addAssignOperation (var_settingName_324, var_settingValue_361  COMMA_SOURCE_FILE ("communs.galgas", 22)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("communs.galgas", 24)) ;
  ioArgument_ioConfigDefinitionList.addAssignOperation (var_defLocation_200, var_settingList_235  COMMA_SOURCE_FILE ("communs.galgas", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_configuration_5F_definition_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("communs.galgas", 8)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("communs.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 14)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("communs.galgas", 15)) ;
      switch (select_communs_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 18)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("communs.galgas", 20)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("communs.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_configuration_5F_definition_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("communs.galgas", 8)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("communs.galgas", 11)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 14)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("communs.galgas", 15)) ;
      switch (select_communs_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 18)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("communs.galgas", 20)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("communs.galgas", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_declaration_5F_in_5F_ram_i1_ (GGS_declarationInRam & outArgument_outDeclaration,
                                                                 Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outDeclaration.drop () ; // Release 'out' argument
  GGS_registerProtection var_protection_732 ;
  switch (select_communs_2 (inCompiler)) {
  case 1: {
    var_protection_732 = GGS_registerProtection::class_func_publicRegister (SOURCE_FILE ("communs.galgas", 33)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_protected COMMA_SOURCE_FILE ("communs.galgas", 35)) ;
    var_protection_732 = GGS_registerProtection::class_func_protectedRegister (SOURCE_FILE ("communs.galgas", 36)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_private COMMA_SOURCE_FILE ("communs.galgas", 38)) ;
    var_protection_732 = GGS_registerProtection::class_func_privateRegister (SOURCE_FILE ("communs.galgas", 39)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("communs.galgas", 41)) ;
  GGS_lstring var_name_939 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 42)) ;
  GGS_immediatExpression var_sizeExpression_999 ;
  switch (select_communs_3 (inCompiler)) {
  case 1: {
    var_sizeExpression_999 = GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 45)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 47)) ;
    nt_immediate_5F_expression_ (var_sizeExpression_999, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  GGS_bitSliceTable var_bitSliceTable_1154 = GGS_bitSliceTable::init (inCompiler COMMA_HERE) ;
  GGS_string var_bitDefinitionString_1202 ;
  switch (select_communs_4 (inCompiler)) {
  case 1: {
    var_bitDefinitionString_1202 = GGS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("communs.galgas", 56)) ;
    var_bitDefinitionString_1202 = GGS_string (" <") ;
    GGS_sint var_sliceIndex_1318 = GGS_sint (int32_t (8L)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_communs_6 (inCompiler)) {
      case 1: {
        GGS_uint var_sliceWidth_1374 = GGS_uint (uint32_t (0U)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          GGS_uint var_sliceBase_1443 = GGS_uint (uint32_t (0U)) ;
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_sliceIndex_1318.objectCompare (GGS_sint (int32_t (0L)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              var_sliceBase_1443 = var_sliceIndex_1318.getter_uint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 65)) ;
            }
          }
          GGS_lstring var_sliceName_1584 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 67)) ;
          switch (select_communs_8 (inCompiler)) {
          case 1: {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_1374.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_1374.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("communs.galgas", 69)).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_sliceName_1584.readProperty_location (), GGS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_1584.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 70)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 70)), fixItArray4  COMMA_SOURCE_FILE ("communs.galgas", 70)) ;
              }
            }
            var_sliceWidth_1374 = GGS_uint (uint32_t (1U)) ;
            var_bitDefinitionString_1202.plusAssignOperation(var_sliceName_1584.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 73)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 75)) ;
            GGS_luint var_sliceSize_1914 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 76)) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_1374.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_1374.objectCompare (var_sliceSize_1914.readProperty_uint ())) COMMA_SOURCE_FILE ("communs.galgas", 77)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_sliceName_1584.readProperty_location (), GGS_string ("a slice of ").add_operation (var_sliceWidth_1374.getter_string (SOURCE_FILE ("communs.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 78)).add_operation (GGS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 78)).add_operation (var_sliceName_1584.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 78)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 78)), fixItArray6  COMMA_SOURCE_FILE ("communs.galgas", 78)) ;
              }
            }
            var_sliceWidth_1374 = var_sliceSize_1914.readProperty_uint () ;
            var_sliceBase_1443 = var_sliceBase_1443.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 81)).substract_operation (var_sliceSize_1914.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 81)) ;
            var_bitDefinitionString_1202.plusAssignOperation(var_sliceName_1584.readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 82)).add_operation (var_sliceSize_1914.readProperty_uint ().getter_string (SOURCE_FILE ("communs.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 82)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 82)) ;
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 83)) ;
          } break ;
          default:
            break ;
          }
          GGS_uint var_base_2360 = GGS_uint (uint32_t (0U)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::greaterOrEqual, var_sliceIndex_1318.objectCompare (var_sliceWidth_1374.getter_sint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 86)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              var_base_2360 = var_sliceIndex_1318.getter_uint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 87)).substract_operation (var_sliceWidth_1374, inCompiler COMMA_SOURCE_FILE ("communs.galgas", 87)) ;
            }
          }
          {
          var_bitSliceTable_1154.setter_insertKey (var_sliceName_1584, var_base_2360, var_sliceWidth_1374, inCompiler COMMA_SOURCE_FILE ("communs.galgas", 89)) ;
          }
          if (select_communs_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("communs.galgas", 91)) ;
            var_bitDefinitionString_1202.plusAssignOperation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 92)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
        var_sliceIndex_1318 = var_sliceIndex_1318.substract_operation (var_sliceWidth_1374.getter_sint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 94)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 96)) ;
        var_bitDefinitionString_1202.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 97)) ;
        var_sliceIndex_1318.minusAssignOperation(GGS_sint (int32_t (1L)), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 98)) ;
      } break ;
      case 3: {
        GGS_luint var_bitCount_2791 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 100)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::equal, var_bitCount_2791.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (var_bitCount_2791.readProperty_location (), GGS_string ("the bit count should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("communs.galgas", 102)) ;
          }
        }
        UpEnumerator_range enumerator_2944 (GGS_range (GGS_uint (uint32_t (0U)), var_bitCount_2791.readProperty_uint ().substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 104)))) ;
        while (enumerator_2944.hasCurrentObject ()) {
          var_bitDefinitionString_1202.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 105)) ;
          enumerator_2944.gotoNextObject () ;
          if (enumerator_2944.hasCurrentObject ()) {
            var_bitDefinitionString_1202.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 106)) ;
          }
        }
        var_sliceIndex_1318 = var_sliceIndex_1318.substract_operation (var_bitCount_2791.readProperty_uint ().getter_sint (inCompiler COMMA_SOURCE_FILE ("communs.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 108)) ;
      } break ;
      default:
        break ;
      }
      if (select_communs_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 111)) ;
        var_bitDefinitionString_1202.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 112)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_sliceIndex_1318.objectCompare (GGS_sint (int32_t (0L)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (var_name_939.readProperty_location (), GGS_string ("Incorrect bit definition for register '").add_operation (var_name_939.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 115)).add_operation (GGS_string ("': "), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 115)).add_operation (GGS_sint (int32_t (8L)).substract_operation (var_sliceIndex_1318, inCompiler COMMA_SOURCE_FILE ("communs.galgas", 115)).getter_string (SOURCE_FILE ("communs.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 115)).add_operation (GGS_string (" bits (s) are defined, instead of 8"), inCompiler COMMA_SOURCE_FILE ("communs.galgas", 115)), fixItArray11  COMMA_SOURCE_FILE ("communs.galgas", 115)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("communs.galgas", 117)) ;
    var_bitDefinitionString_1202.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 118)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outDeclaration = GGS_byteDeclarationInRam::init_21__21__21__21__21_ (var_name_939, var_sizeExpression_999, var_bitSliceTable_1154, var_bitDefinitionString_1202, var_protection_732, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_declaration_5F_in_5F_ram_i1_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_protected COMMA_SOURCE_FILE ("communs.galgas", 35)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_private COMMA_SOURCE_FILE ("communs.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("communs.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 42)) ;
  switch (select_communs_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 47)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  switch (select_communs_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("communs.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_communs_6 (inCompiler)) {
      case 1: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 67)) ;
          switch (select_communs_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 75)) ;
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 76)) ;
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 83)) ;
          } break ;
          default:
            break ;
          }
          if (select_communs_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("communs.galgas", 91)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 96)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 100)) ;
      } break ;
      default:
        break ;
      }
      if (select_communs_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 111)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("communs.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_declaration_5F_in_5F_ram_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_protected COMMA_SOURCE_FILE ("communs.galgas", 35)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_private COMMA_SOURCE_FILE ("communs.galgas", 38)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("communs.galgas", 41)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 42)) ;
  switch (select_communs_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 47)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 49)) ;
  } break ;
  default:
    break ;
  }
  switch (select_communs_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("communs.galgas", 56)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_communs_6 (inCompiler)) {
      case 1: {
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 67)) ;
          switch (select_communs_8 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 75)) ;
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 76)) ;
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 83)) ;
          } break ;
          default:
            break ;
          }
          if (select_communs_7 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("communs.galgas", 91)) ;
          }else{
            repeatFlag_1 = false ;
          }
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 96)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 100)) ;
      } break ;
      default:
        break ;
      }
      if (select_communs_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 111)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("communs.galgas", 117)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_ram_5F_definition_i2_ (GGS_ramDefinitionList & ioArgument_ioRamDefinitionList,
                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("communs.galgas", 128)) ;
  GGS_lstring var_bankName_3673 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("communs.galgas", 130)) ;
  GGS_declarationInRamList var_declarationInRamList_3694 = GGS_declarationInRamList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_9 (inCompiler) == 2) {
      GGS_declarationInRam var_declaration_3806 ;
      nt_declaration_5F_in_5F_ram_ (var_declaration_3806, inCompiler) ;
      var_declarationInRamList_3694.addAssignOperation (var_declaration_3806  COMMA_SOURCE_FILE ("communs.galgas", 135)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  ioArgument_ioRamDefinitionList.addAssignOperation (var_bankName_3673, var_declarationInRamList_3694  COMMA_SOURCE_FILE ("communs.galgas", 137)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("communs.galgas", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_ram_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("communs.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("communs.galgas", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_9 (inCompiler) == 2) {
      nt_declaration_5F_in_5F_ram_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("communs.galgas", 138)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_ram_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("communs.galgas", 128)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 129)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("communs.galgas", 130)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_9 (inCompiler) == 2) {
      nt_declaration_5F_in_5F_ram_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("communs.galgas", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_constant_5F_definition_i3_ (GGS_constantDefinitionList & ioArgument_ioConstantDefinitionList,
                                                               Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_const COMMA_SOURCE_FILE ("communs.galgas", 145)) ;
  GGS_lstring var_constantName_4109 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_constantDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("communs.galgas", 147)) ;
  GGS_immediatExpression var_expression_4207 ;
  nt_immediate_5F_expression_ (var_expression_4207, inCompiler) ;
  ioArgument_ioConstantDefinitionList.addAssignOperation (var_constantName_4109, var_expression_4207  COMMA_SOURCE_FILE ("communs.galgas", 149)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_constant_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_const COMMA_SOURCE_FILE ("communs.galgas", 145)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_constantDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("communs.galgas", 147)) ;
  nt_immediate_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_constant_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_const COMMA_SOURCE_FILE ("communs.galgas", 145)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_constantDeclaration, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 146)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("communs.galgas", 147)) ;
  nt_immediate_5F_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_expression_i4_ (GGS_immediatExpression & outArgument_outExpression,
                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_bitwise_5F_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("communs.galgas", 158)) ;
      GGS_immediatExpression var_rightExpression_4520 ;
      nt_immediate_5F_bitwise_5F_term_ (var_rightExpression_4520, inCompiler) ;
      outArgument_outExpression = GGS_immediatOr::init_21__21_ (outArgument_outExpression, var_rightExpression_4520, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("communs.galgas", 162)) ;
      GGS_immediatExpression var_rightExpression_4673 ;
      nt_immediate_5F_bitwise_5F_term_ (var_rightExpression_4673, inCompiler) ;
      outArgument_outExpression = GGS_immediatXor::init_21__21_ (outArgument_outExpression, var_rightExpression_4673, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_expression_i4_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("communs.galgas", 158)) ;
      nt_immediate_5F_bitwise_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("communs.galgas", 162)) ;
      nt_immediate_5F_bitwise_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_expression_i4_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("communs.galgas", 158)) ;
      nt_immediate_5F_bitwise_5F_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("communs.galgas", 162)) ;
      nt_immediate_5F_bitwise_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_term_i5_ (GGS_immediatExpression & outArgument_outExpression,
                                                                     Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_bitwise_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("communs.galgas", 174)) ;
      GGS_immediatExpression var_rightExpression_4996 ;
      nt_immediate_5F_bitwise_5F_factor_ (var_rightExpression_4996, inCompiler) ;
      outArgument_outExpression = GGS_immediatAnd::init_21__21_ (outArgument_outExpression, var_rightExpression_4996, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_term_i5_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("communs.galgas", 174)) ;
      nt_immediate_5F_bitwise_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_bitwise_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_communs_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("communs.galgas", 174)) ;
      nt_immediate_5F_bitwise_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GGS_immediatExpression & outArgument_outExpression,
                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_term_ (outArgument_outExpression, inCompiler) ;
  switch (select_communs_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("communs.galgas", 186)) ;
    GGS_immediatExpression var_rightExpression_5299 ;
    nt_immediate_5F_term_ (var_rightExpression_5299, inCompiler) ;
    outArgument_outExpression = GGS_immediatEqualTest::init_21__21_ (outArgument_outExpression, var_rightExpression_5299, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("communs.galgas", 190)) ;
    GGS_immediatExpression var_rightExpression_5430 ;
    nt_immediate_5F_term_ (var_rightExpression_5430, inCompiler) ;
    outArgument_outExpression = GGS_immediatNotEqualTest::init_21__21_ (outArgument_outExpression, var_rightExpression_5430, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("communs.galgas", 194)) ;
    GGS_immediatExpression var_rightExpression_5564 ;
    nt_immediate_5F_term_ (var_rightExpression_5564, inCompiler) ;
    outArgument_outExpression = GGS_immediatGreaterOrEqualTest::init_21__21_ (outArgument_outExpression, var_rightExpression_5564, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("communs.galgas", 198)) ;
    GGS_immediatExpression var_rightExpression_5704 ;
    nt_immediate_5F_term_ (var_rightExpression_5704, inCompiler) ;
    outArgument_outExpression = GGS_immediatLowerOrEqualTest::init_21__21_ (outArgument_outExpression, var_rightExpression_5704, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("communs.galgas", 202)) ;
    GGS_immediatExpression var_rightExpression_5841 ;
    nt_immediate_5F_term_ (var_rightExpression_5841, inCompiler) ;
    outArgument_outExpression = GGS_immediatGreaterTest::init_21__21_ (outArgument_outExpression, var_rightExpression_5841, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("communs.galgas", 206)) ;
    GGS_immediatExpression var_rightExpression_5973 ;
    nt_immediate_5F_term_ (var_rightExpression_5973, inCompiler) ;
    outArgument_outExpression = GGS_immediatLowerTest::init_21__21_ (outArgument_outExpression, var_rightExpression_5973, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_term_parse (inCompiler) ;
  switch (select_communs_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("communs.galgas", 186)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("communs.galgas", 190)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("communs.galgas", 194)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("communs.galgas", 198)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("communs.galgas", 202)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("communs.galgas", 206)) ;
    nt_immediate_5F_term_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_term_indexing (inCompiler) ;
  switch (select_communs_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("communs.galgas", 186)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("communs.galgas", 190)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("communs.galgas", 194)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("communs.galgas", 198)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("communs.galgas", 202)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("communs.galgas", 206)) ;
    nt_immediate_5F_term_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_term_i7_ (GGS_immediatExpression & outArgument_outExpression,
                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("communs.galgas", 218)) ;
      GGS_immediatExpression var_rightExpression_6277 ;
      nt_immediate_5F_factor_ (var_rightExpression_6277, inCompiler) ;
      outArgument_outExpression = GGS_immediatAdd::init_21__21_ (outArgument_outExpression, var_rightExpression_6277, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 222)) ;
      GGS_immediatExpression var_rightExpression_6405 ;
      nt_immediate_5F_factor_ (var_rightExpression_6405, inCompiler) ;
      outArgument_outExpression = GGS_immediatSub::init_21__21_ (outArgument_outExpression, var_rightExpression_6405, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("communs.galgas", 226)) ;
      GGS_immediatExpression var_rightExpression_6534 ;
      nt_immediate_5F_factor_ (var_rightExpression_6534, inCompiler) ;
      outArgument_outExpression = GGS_immediatLeftShift::init_21__21_ (outArgument_outExpression, var_rightExpression_6534, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("communs.galgas", 230)) ;
      GGS_immediatExpression var_rightExpression_6669 ;
      nt_immediate_5F_factor_ (var_rightExpression_6669, inCompiler) ;
      outArgument_outExpression = GGS_immediatRightShift::init_21__21_ (outArgument_outExpression, var_rightExpression_6669, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_term_i7_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("communs.galgas", 218)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 222)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("communs.galgas", 226)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("communs.galgas", 230)) ;
      nt_immediate_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_term_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2B_ COMMA_SOURCE_FILE ("communs.galgas", 218)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 222)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3C__3C_ COMMA_SOURCE_FILE ("communs.galgas", 226)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3E__3E_ COMMA_SOURCE_FILE ("communs.galgas", 230)) ;
      nt_immediate_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_factor_i8_ (GGS_immediatExpression & outArgument_outExpression,
                                                            Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_immediate_5F_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("communs.galgas", 242)) ;
      GGS_immediatExpression var_rightExpression_6978 ;
      nt_immediate_5F_primary_ (var_rightExpression_6978, inCompiler) ;
      outArgument_outExpression = GGS_immediatMul::init_21__21_ (outArgument_outExpression, var_rightExpression_6978, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("communs.galgas", 246)) ;
      GGS_immediatExpression var_rightExpression_7107 ;
      nt_immediate_5F_primary_ (var_rightExpression_7107, inCompiler) ;
      outArgument_outExpression = GGS_immediatMod::init_21__21_ (outArgument_outExpression, var_rightExpression_7107, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("communs.galgas", 250)) ;
      GGS_immediatExpression var_rightExpression_7236 ;
      nt_immediate_5F_primary_ (var_rightExpression_7236, inCompiler) ;
      outArgument_outExpression = GGS_immediatDiv::init_21__21_ (outArgument_outExpression, var_rightExpression_7236, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("communs.galgas", 242)) ;
      nt_immediate_5F_primary_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("communs.galgas", 246)) ;
      nt_immediate_5F_primary_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("communs.galgas", 250)) ;
      nt_immediate_5F_primary_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_immediate_5F_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_communs_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("communs.galgas", 242)) ;
      nt_immediate_5F_primary_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__25_ COMMA_SOURCE_FILE ("communs.galgas", 246)) ;
      nt_immediate_5F_primary_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("communs.galgas", 250)) ;
      nt_immediate_5F_primary_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_primary_i9_ (GGS_immediatExpression & outArgument_outExpression,
                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  switch (select_communs_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 261)) ;
    GGS_immediatExpression var_expression_7495 ;
    nt_immediate_5F_primary_ (var_expression_7495, inCompiler) ;
    outArgument_outExpression = GGS_immediatNegate::init_21_ (var_expression_7495, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("communs.galgas", 265)) ;
    GGS_immediatExpression var_expression_7599 ;
    nt_immediate_5F_primary_ (var_expression_7599, inCompiler) ;
    outArgument_outExpression = GGS_immediatComplement::init_21_ (var_expression_7599, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_luint var_constant_7696 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 269)) ;
    outArgument_outExpression = GGS_immediatInteger::init_21_ (var_constant_7696, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lchar var_literalCharValue_7791 = inCompiler->synthetizedAttribute_charValue () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_char COMMA_SOURCE_FILE ("communs.galgas", 272)) ;
    outArgument_outExpression = GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (var_literalCharValue_7791.readProperty_char ().getter_uint (SOURCE_FILE ("communs.galgas", 273)), var_literalCharValue_7791.readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_lstring var_registerName_7952 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 275)) ;
    GGS_immediatExpression var_offset_8014 ;
    GGS_location var_endOfOffsetExpression_8039 ;
    switch (select_communs_16 (inCompiler)) {
    case 1: {
      var_offset_8014 = GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 279)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      var_endOfOffsetExpression_8039 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 280)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 282)) ;
      nt_immediate_5F_expression_ (var_offset_8014, inCompiler) ;
      var_endOfOffsetExpression_8039 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 284)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 285)) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_8273 = GGS_registerExpression::init_21__21__21_ (var_registerName_7952, var_offset_8014, var_endOfOffsetExpression_8039, inCompiler COMMA_HERE) ;
    outArgument_outExpression = GGS_immediatRegister::init_21_ (var_registerExpression_8273, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 294)) ;
    nt_immediate_5F_expression_ (outArgument_outExpression, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 296)) ;
  } break ;
  case 7: {
    GGS_lstring var_registerName_8545 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 298)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 299)) ;
    GGS_immediatSliceExpressionList var_sliceExpressionList_8574 = GGS_immediatSliceExpressionList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_sliceName_8671 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 302)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("communs.galgas", 303)) ;
      GGS_immediatExpression var_expression_8725 ;
      nt_immediate_5F_expression_ (var_expression_8725, inCompiler) ;
      var_sliceExpressionList_8574.addAssignOperation (var_sliceName_8671, var_expression_8725  COMMA_SOURCE_FILE ("communs.galgas", 305)) ;
      if (select_communs_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 307)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 309)) ;
    outArgument_outExpression = GGS_immediatSlice::init_21__21_ (var_registerName_8545, var_sliceExpressionList_8574, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_primary_i9_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 261)) ;
    nt_immediate_5F_primary_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("communs.galgas", 265)) ;
    nt_immediate_5F_primary_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 269)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_char COMMA_SOURCE_FILE ("communs.galgas", 272)) ;
  } break ;
  case 5: {
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 275)) ;
    switch (select_communs_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 282)) ;
      nt_immediate_5F_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 285)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 294)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 296)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 298)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 299)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 302)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("communs.galgas", 303)) ;
      nt_immediate_5F_expression_parse (inCompiler) ;
      if (select_communs_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 307)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 309)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_immediate_5F_primary_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("communs.galgas", 261)) ;
    nt_immediate_5F_primary_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("communs.galgas", 265)) ;
    nt_immediate_5F_primary_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 269)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_char COMMA_SOURCE_FILE ("communs.galgas", 272)) ;
  } break ;
  case 5: {
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 275)) ;
    switch (select_communs_16 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 282)) ;
      nt_immediate_5F_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 285)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 294)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 296)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 298)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 299)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 302)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("communs.galgas", 303)) ;
      nt_immediate_5F_expression_indexing (inCompiler) ;
      if (select_communs_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 307)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 309)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_register_5F_parsing_i10_ (GGS_registerExpression & outArgument_outRegisterExpression,
                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outRegisterExpression.drop () ; // Release 'out' argument
  GGS_lstring var_registerName_9060 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 317)) ;
  GGS_immediatExpression var_offset_9120 ;
  GGS_location var_endOfOffsetExpression_9143 ;
  switch (select_communs_18 (inCompiler)) {
  case 1: {
    var_offset_9120 = GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 321)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    var_endOfOffsetExpression_9143 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 322)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 324)) ;
    nt_immediate_5F_expression_ (var_offset_9120, inCompiler) ;
    var_endOfOffsetExpression_9143 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 326)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outRegisterExpression = GGS_registerExpression::init_21__21__21_ (var_registerName_9060, var_offset_9120, var_endOfOffsetExpression_9143, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_register_5F_parsing_i10_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 317)) ;
  switch (select_communs_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 324)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_register_5F_parsing_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_variableUse, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 317)) ;
  switch (select_communs_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 324)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i11_ (GGS_bitNumberExpression & outArgument_outBitNumber,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBitNumber.drop () ; // Release 'out' argument
  GGS_lstring var_bitNumberLabel_9612 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 339)) ;
  GGS_luint var_bitIndex_9640 ;
  switch (select_communs_19 (inCompiler)) {
  case 1: {
    var_bitIndex_9640 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 342)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 344)) ;
    var_bitIndex_9640 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 345)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 346)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outBitNumber = GGS_bitNumberLabelValue::init_21__21_ (var_bitNumberLabel_9612, var_bitIndex_9640, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i11_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 339)) ;
  switch (select_communs_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 344)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 345)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 346)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i11_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("communs.galgas", 339)) ;
  switch (select_communs_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("communs.galgas", 344)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 345)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("communs.galgas", 346)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i12_ (GGS_bitNumberExpression & outArgument_outBitNumber,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBitNumber.drop () ; // Release 'out' argument
  GGS_luint var_bitIndex_9960 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 354)) ;
  outArgument_outBitNumber = GGS_bitNumberLiteralValue::init_21_ (var_bitIndex_9960, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i12_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 354)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i12_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("communs.galgas", 354)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i13_ (GGS_bitNumberExpression & outArgument_outBitNumber,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBitNumber.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 361)) ;
  GGS_immediatExpression var_bitNumberExpression_10180 ;
  nt_immediate_5F_expression_ (var_bitNumberExpression_10180, inCompiler) ;
  GGS_location var_endOfExpression_10206 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("communs.galgas", 363)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 364)) ;
  outArgument_outBitNumber = GGS_bitNumberLiteralExpression::init_21__21_ (var_bitNumberExpression_10180, var_endOfExpression_10206, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i13_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 361)) ;
  nt_immediate_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 364)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_bit_5F_number_5F_parsing_i13_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("communs.galgas", 361)) ;
  nt_immediate_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("communs.galgas", 364)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GGS_bool & outArgument_out_5F_W_5F_isDestination,
                                                                     Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_out_5F_W_5F_isDestination.drop () ; // Release 'out' argument
  switch (select_communs_20 (inCompiler)) {
  case 1: {
    outArgument_out_5F_W_5F_isDestination = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 374)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("communs.galgas", 375)) ;
    outArgument_out_5F_W_5F_isDestination = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 374)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("communs.galgas", 375)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_communs::rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_communs_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("communs.galgas", 374)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("communs.galgas", 375)) ;
  } break ;
  default:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::GGS_pic_31__38__5F_dataMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::~ GGS_pic_31__38__5F_dataMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::GGS_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap & GGS_pic_31__38__5F_dataMap::operator = (const GGS_pic_31__38__5F_dataMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38__5F_dataMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38__5F_dataMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::performInsert (const GGS_pic_31__38__5F_dataMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>
GGS_pic_31__38__5F_dataMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38__5F_dataMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>>
GGS_pic_31__38__5F_dataMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38__5F_dataMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38__5F_dataMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mData = info->mProperty_mData ;
      element.mProperty_mIsData_38_ = info->mProperty_mIsData_38_ ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_uintlist inArgument0,
                                                   GGS_bool inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38__5F_dataMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_uintlist & outArgument0,
                                                   GGS_bool & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' data is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mData ;
    outArgument1 = info->mProperty_mIsData_38_ ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_pic_31__38__5F_dataMap::getter_mDataForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mData ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_mIsData_38_ForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsData_38_ ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_setMDataForKey (GGS_uintlist inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mData = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_setMIsData_38_ForKey (GGS_bool inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsData_38_ = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38__5F_dataMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mData:") ;
    inArray (i COMMA_HERE)->mProperty_mData.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsData8:") ;
    inArray (i COMMA_HERE)->mProperty_mIsData_38_.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38__5F_dataMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38__5F_dataMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38__5F_dataMap::DownEnumerator_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element DownEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsData_38_ ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38__5F_dataMap::UpEnumerator_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element UpEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsData_38_ ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18_dataMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ("pic18_dataMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  const GGS_pic_31__38__5F_dataMap * p = (const GGS_pic_31__38__5F_dataMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SequentialInstruction_2E_weak::objectCompare (const GGS_ipic_31__38_SequentialInstruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak::GGS_ipic_31__38_SequentialInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak & GGS_ipic_31__38_SequentialInstruction_2E_weak::operator = (const GGS_ipic_31__38_SequentialInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak::GGS_ipic_31__38_SequentialInstruction_2E_weak (const GGS_ipic_31__38_SequentialInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak GGS_ipic_31__38_SequentialInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_SequentialInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction_2E_weak::bang_ipic_31__38_SequentialInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SequentialInstruction) ;
      result = GGS_ipic_31__38_SequentialInstruction ((cPtr_ipic_31__38_SequentialInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ("ipic18SequentialInstruction.weak",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak GGS_ipic_31__38_SequentialInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
  const GGS_ipic_31__38_SequentialInstruction_2E_weak * p = (const GGS_ipic_31__38_SequentialInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::operator = (const GGS_ipic_31__38_AbstractBlockTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (const GGS_ipic_31__38_AbstractBlockTerminator & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_AbstractBlockTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::bang_ipic_31__38_AbstractBlockTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
      result = GGS_ipic_31__38_AbstractBlockTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractBlockTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ("ipic18AbstractBlockTerminator.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
  const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak * p = (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::operator = (const GGS_ipic_31__38_SingleInstructionTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (const GGS_ipic_31__38_SingleInstructionTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_SingleInstructionTerminator * p = (cPtr_ipic_31__38_SingleInstructionTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_SingleInstructionTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::bang_ipic_31__38_SingleInstructionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
      result = GGS_ipic_31__38_SingleInstructionTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18SingleInstructionTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ("ipic18SingleInstructionTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
  const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak * p = (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ReturnTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ReturnTerminator::objectCompare (const GGS_ipic_31__38_ReturnTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator::GGS_ipic_31__38_ReturnTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ReturnTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ReturnTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ReturnTerminator_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_ipic_31__38_ReturnTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::
ipic_31__38_ReturnTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator::GGS_ipic_31__38_ReturnTerminator (const cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ReturnTerminator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ReturnTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ReturnTerminator::cPtr_ipic_31__38_ReturnTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ReturnTerminator::cPtr_ipic_31__38_ReturnTerminator (const GGS_location & in_mInstructionLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ReturnTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

void cPtr_ipic_31__38_ReturnTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ReturnTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ReturnTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ReturnTerminator (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ReturnTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ReturnTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ("ipic18ReturnTerminator",
                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ReturnTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ReturnTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ReturnTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator result ;
  const GGS_ipic_31__38_ReturnTerminator * p = (const GGS_ipic_31__38_ReturnTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ReturnTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ReturnTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ReturnTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak::GGS_ipic_31__38_ReturnTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak & GGS_ipic_31__38_ReturnTerminator_2E_weak::operator = (const GGS_ipic_31__38_ReturnTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak::GGS_ipic_31__38_ReturnTerminator_2E_weak (const GGS_ipic_31__38_ReturnTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak GGS_ipic_31__38_ReturnTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ReturnTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ReturnTerminator * p = (cPtr_ipic_31__38_ReturnTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ReturnTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator_2E_weak::bang_ipic_31__38_ReturnTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ReturnTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ReturnTerminator) ;
      result = GGS_ipic_31__38_ReturnTerminator ((cPtr_ipic_31__38_ReturnTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ReturnTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ("ipic18ReturnTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ReturnTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ReturnTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ReturnTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak GGS_ipic_31__38_ReturnTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
  const GGS_ipic_31__38_ReturnTerminator_2E_weak * p = (const GGS_ipic_31__38_ReturnTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ReturnTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_RetlwTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetlwTerminator::objectCompare (const GGS_ipic_31__38_RetlwTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator::GGS_ipic_31__38_RetlwTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mLiteralValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_RetlwTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_RetlwTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_RetlwTerminator_init_21__21_ (in_mInstructionLocation, in_mLiteralValue, inCompiler) ;
  const GGS_ipic_31__38_RetlwTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::
ipic_31__38_RetlwTerminator_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_uint & in_mLiteralValue,
                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator::GGS_ipic_31__38_RetlwTerminator (const cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetlwTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38_RetlwTerminator::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetlwTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetlwTerminator::cPtr_ipic_31__38_RetlwTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetlwTerminator::cPtr_ipic_31__38_RetlwTerminator (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_uint & in_mLiteralValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_RetlwTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

void cPtr_ipic_31__38_RetlwTerminator::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18RetlwTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetlwTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetlwTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_RetlwTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18RetlwTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ("ipic18RetlwTerminator",
                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetlwTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetlwTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetlwTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator result ;
  const GGS_ipic_31__38_RetlwTerminator * p = (const GGS_ipic_31__38_RetlwTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetlwTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetlwTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_RetlwTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak::GGS_ipic_31__38_RetlwTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak & GGS_ipic_31__38_RetlwTerminator_2E_weak::operator = (const GGS_ipic_31__38_RetlwTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak::GGS_ipic_31__38_RetlwTerminator_2E_weak (const GGS_ipic_31__38_RetlwTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak GGS_ipic_31__38_RetlwTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_RetlwTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_RetlwTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator_2E_weak::bang_ipic_31__38_RetlwTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_RetlwTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetlwTerminator) ;
      result = GGS_ipic_31__38_RetlwTerminator ((cPtr_ipic_31__38_RetlwTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RetlwTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ("ipic18RetlwTerminator.weak",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetlwTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetlwTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetlwTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak GGS_ipic_31__38_RetlwTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
  const GGS_ipic_31__38_RetlwTerminator_2E_weak * p = (const GGS_ipic_31__38_RetlwTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetlwTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_RetfieTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetfieTerminator::objectCompare (const GGS_ipic_31__38_RetfieTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator::GGS_ipic_31__38_RetfieTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_bool & in_mFastReturn,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_RetfieTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_RetfieTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_RetfieTerminator_init_21__21_ (in_mInstructionLocation, in_mFastReturn, inCompiler) ;
  const GGS_ipic_31__38_RetfieTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::
ipic_31__38_RetfieTerminator_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_bool & in_mFastReturn,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFastReturn = in_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator::GGS_ipic_31__38_RetfieTerminator (const cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetfieTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RetfieTerminator::readProperty_mFastReturn (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
    return p->mProperty_mFastReturn ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetfieTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetfieTerminator::cPtr_ipic_31__38_RetfieTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE),
mProperty_mFastReturn () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetfieTerminator::cPtr_ipic_31__38_RetfieTerminator (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_bool & in_mFastReturn,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFastReturn () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFastReturn = in_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_RetfieTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

void cPtr_ipic_31__38_RetfieTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18RetfieTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFastReturn.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetfieTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetfieTerminator (mProperty_mInstructionLocation, mProperty_mFastReturn, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_RetfieTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mFastReturn.printNonNullClassInstanceProperties ("mFastReturn") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18RetfieTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ("ipic18RetfieTerminator",
                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetfieTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetfieTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetfieTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator result ;
  const GGS_ipic_31__38_RetfieTerminator * p = (const GGS_ipic_31__38_RetfieTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetfieTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetfieTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_RetfieTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak::GGS_ipic_31__38_RetfieTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak & GGS_ipic_31__38_RetfieTerminator_2E_weak::operator = (const GGS_ipic_31__38_RetfieTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak::GGS_ipic_31__38_RetfieTerminator_2E_weak (const GGS_ipic_31__38_RetfieTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak GGS_ipic_31__38_RetfieTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_RetfieTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_RetfieTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator_2E_weak::bang_ipic_31__38_RetfieTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_RetfieTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetfieTerminator) ;
      result = GGS_ipic_31__38_RetfieTerminator ((cPtr_ipic_31__38_RetfieTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RetfieTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ("ipic18RetfieTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetfieTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetfieTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetfieTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak GGS_ipic_31__38_RetfieTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
  const GGS_ipic_31__38_RetfieTerminator_2E_weak * p = (const GGS_ipic_31__38_RetfieTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetfieTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum jumpInstructionKind
//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind::GGS_jumpInstructionKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::class_func_ipicRelative (UNUSED_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  result.mEnum = Enumeration::enum_ipicRelative ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::class_func_relative (UNUSED_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  result.mEnum = Enumeration::enum_relative ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::class_func_absolute (UNUSED_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  result.mEnum = Enumeration::enum_absolute ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_jumpInstructionKind [4] = {
  "(not built)",
  "ipicRelative",
  "relative",
  "absolute"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jumpInstructionKind::getter_isIpicRelative (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ipicRelative == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jumpInstructionKind::getter_isRelative (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_relative == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_jumpInstructionKind::getter_isAbsolute (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_absolute == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_jumpInstructionKind::description (String & ioString,
                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @jumpInstructionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_jumpInstructionKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_jumpInstructionKind::objectCompare (const GGS_jumpInstructionKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @jumpInstructionKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jumpInstructionKind ("jumpInstructionKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_jumpInstructionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_jumpInstructionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_jumpInstructionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_jumpInstructionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_jumpInstructionKind::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_jumpInstructionKind result ;
  const GGS_jumpInstructionKind * p = (const GGS_jumpInstructionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_jumpInstructionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("jumpInstructionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_JumpTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_JumpTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak::GGS_ipic_31__38_JumpTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak & GGS_ipic_31__38_JumpTerminator_2E_weak::operator = (const GGS_ipic_31__38_JumpTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak::GGS_ipic_31__38_JumpTerminator_2E_weak (const GGS_ipic_31__38_JumpTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak GGS_ipic_31__38_JumpTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_JumpTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_JumpTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator_2E_weak::bang_ipic_31__38_JumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_JumpTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_JumpTerminator) ;
      result = GGS_ipic_31__38_JumpTerminator ((cPtr_ipic_31__38_JumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18JumpTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ("ipic18JumpTerminator.weak",
                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_JumpTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_JumpTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_JumpTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak GGS_ipic_31__38_JumpTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator_2E_weak result ;
  const GGS_ipic_31__38_JumpTerminator_2E_weak * p = (const GGS_ipic_31__38_JumpTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_JumpTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18JumpTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedGotoTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (const GGS_ipic_31__38_ComputedGotoTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedGotoTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::bang_ipic_31__38_ComputedGotoTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
      result = GGS_ipic_31__38_ComputedGotoTerminator ((cPtr_ipic_31__38_ComputedGotoTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedGotoTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ("ipic18ComputedGotoTerminator.weak",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedRETLWTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedRETLWTerminator::objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator::GGS_ipic_31__38_ComputedRETLWTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_uintlist & in_mLiteralValues,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ComputedRETLWTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ComputedRETLWTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (in_mInstructionLocation, in_mLiteralValues, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38_ComputedRETLWTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::
ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_uintlist & in_mLiteralValues,
                                                      const GGS_bool & in_mUsesRCALL,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValues = in_mLiteralValues ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator::GGS_ipic_31__38_ComputedRETLWTerminator (const cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_ipic_31__38_ComputedRETLWTerminator::readProperty_mLiteralValues (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uintlist () ;
  }else{
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    return p->mProperty_mLiteralValues ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_ComputedRETLWTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedRETLWTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedRETLWTerminator::cPtr_ipic_31__38_ComputedRETLWTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mLiteralValues (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedRETLWTerminator::cPtr_ipic_31__38_ComputedRETLWTerminator (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_uintlist & in_mLiteralValues,
                                                                                    const GGS_bool & in_mUsesRCALL,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralValues (),
mProperty_mUsesRCALL () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValues = in_mLiteralValues ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ComputedRETLWTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

void cPtr_ipic_31__38_ComputedRETLWTerminator::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ComputedRETLWTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValues.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedRETLWTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedRETLWTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValues, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedRETLWTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralValues.printNonNullClassInstanceProperties ("mLiteralValues") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedRETLWTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ("ipic18ComputedRETLWTerminator",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedRETLWTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedRETLWTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedRETLWTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  const GGS_ipic_31__38_ComputedRETLWTerminator * p = (const GGS_ipic_31__38_ComputedRETLWTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedRETLWTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedRETLWTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (const GGS_ipic_31__38_ComputedRETLWTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedRETLWTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::bang_ipic_31__38_ComputedRETLWTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
      result = GGS_ipic_31__38_ComputedRETLWTerminator ((cPtr_ipic_31__38_ComputedRETLWTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedRETLWTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ("ipic18ComputedRETLWTerminator.weak",
                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum conditionalBranchMode
//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode::GGS_conditionalBranchMode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::class_func_native (UNUSED_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  result.mEnum = Enumeration::enum_native ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::class_func_ipicBRA (UNUSED_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  result.mEnum = Enumeration::enum_ipicBRA ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::class_func_ipicGOTO (UNUSED_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  result.mEnum = Enumeration::enum_ipicGOTO ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_conditionalBranchMode [4] = {
  "(not built)",
  "native",
  "ipicBRA",
  "ipicGOTO"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditionalBranchMode::getter_isNative (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_native == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditionalBranchMode::getter_isIpicBRA (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ipicBRA == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditionalBranchMode::getter_isIpicGOTO (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ipicGOTO == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_conditionalBranchMode::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @conditionalBranchMode: ") ;
  ioString.appendCString (gEnumNameArrayFor_conditionalBranchMode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_conditionalBranchMode::objectCompare (const GGS_conditionalBranchMode & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @conditionalBranchMode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditionalBranchMode ("conditionalBranchMode",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_conditionalBranchMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditionalBranchMode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_conditionalBranchMode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_conditionalBranchMode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  const GGS_conditionalBranchMode * p = (const GGS_conditionalBranchMode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_conditionalBranchMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditionalBranchMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum conditional_branch
//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch::GGS_conditional_5F_branch (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bz (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bz ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnz (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnz ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bn (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnn (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bc (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bc ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnc (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnc ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bov (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bov ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnov (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnov ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_conditional_5F_branch [9] = {
  "(not built)",
  "bz",
  "bnz",
  "bn",
  "bnn",
  "bc",
  "bnc",
  "bov",
  "bnov"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBz (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bz == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnz (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnz == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBn (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnn (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBov (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bov == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnov (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnov == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_conditional_5F_branch::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @conditional_branch: ") ;
  ioString.appendCString (gEnumNameArrayFor_conditional_5F_branch [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_conditional_5F_branch::objectCompare (const GGS_conditional_5F_branch & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @conditional_branch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditional_5F_branch ("conditional_branch",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_conditional_5F_branch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditional_5F_branch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_conditional_5F_branch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_conditional_5F_branch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  const GGS_conditional_5F_branch * p = (const GGS_conditional_5F_branch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_conditional_5F_branch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditional_branch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::operator = (const GGS_ipic_31__38_ConditionalJumpTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (const GGS_ipic_31__38_ConditionalJumpTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ConditionalJumpTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ConditionalJumpTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::bang_ipic_31__38_ConditionalJumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ConditionalJumpTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
      result = GGS_ipic_31__38_ConditionalJumpTerminator ((cPtr_ipic_31__38_ConditionalJumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ConditionalJumpTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ("ipic18ConditionalJumpTerminator.weak",
                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak result ;
  const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak * p = (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ConditionalJumpTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedBraTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedBraTerminator::objectCompare (const GGS_ipic_31__38_ComputedBraTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator::GGS_ipic_31__38_ComputedBraTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstringlist & in_mTargetLabels,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ComputedBraTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ComputedBraTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ComputedBraTerminator_init_21__21__21_ (in_mInstructionLocation, in_mTargetLabels, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38_ComputedBraTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::
ipic_31__38_ComputedBraTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_lstringlist & in_mTargetLabels,
                                                    const GGS_bool & in_mUsesRCALL,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator::GGS_ipic_31__38_ComputedBraTerminator (const cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_ipic_31__38_ComputedBraTerminator::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_ComputedBraTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedBraTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedBraTerminator::cPtr_ipic_31__38_ComputedBraTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mTargetLabels (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedBraTerminator::cPtr_ipic_31__38_ComputedBraTerminator (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_lstringlist & in_mTargetLabels,
                                                                                const GGS_bool & in_mUsesRCALL,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabels (),
mProperty_mUsesRCALL () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ComputedBraTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

void cPtr_ipic_31__38_ComputedBraTerminator::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ComputedBraTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedBraTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedBraTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedBraTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedBraTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ("ipic18ComputedBraTerminator",
                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedBraTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedBraTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedBraTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  const GGS_ipic_31__38_ComputedBraTerminator * p = (const GGS_ipic_31__38_ComputedBraTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedBraTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedBraTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak::GGS_ipic_31__38_ComputedBraTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak & GGS_ipic_31__38_ComputedBraTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedBraTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak::GGS_ipic_31__38_ComputedBraTerminator_2E_weak (const GGS_ipic_31__38_ComputedBraTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak GGS_ipic_31__38_ComputedBraTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedBraTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator_2E_weak::bang_ipic_31__38_ComputedBraTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
      result = GGS_ipic_31__38_ComputedBraTerminator ((cPtr_ipic_31__38_ComputedBraTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedBraTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ("ipic18ComputedBraTerminator.weak",
                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedBraTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedBraTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedBraTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak GGS_ipic_31__38_ComputedBraTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedBraTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedBraTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ipic18RegisterComparison
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison::GGS_ipic_31__38_RegisterComparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_registerEqualsToW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_registerGreaterThanW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_registerLowerThanW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38_RegisterComparison [4] = {
  "(not built)",
  "registerEqualsToW",
  "registerGreaterThanW",
  "registerLowerThanW"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RegisterComparison::getter_isRegisterEqualsToW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerEqualsToW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RegisterComparison::getter_isRegisterGreaterThanW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerGreaterThanW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RegisterComparison::getter_isRegisterLowerThanW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerLowerThanW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_RegisterComparison::description (String & ioString,
                                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @ipic18RegisterComparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_ipic_31__38_RegisterComparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RegisterComparison::objectCompare (const GGS_ipic_31__38_RegisterComparison & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RegisterComparison generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ("ipic18RegisterComparison",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  const GGS_ipic_31__38_RegisterComparison * p = (const GGS_ipic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RegisterComparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RegisterComparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::operator = (const GGS_ipic_31__38_AbstractConditionTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (const GGS_ipic_31__38_AbstractConditionTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractConditionTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_AbstractConditionTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_AbstractConditionTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::bang_ipic_31__38_AbstractConditionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_AbstractConditionTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
      result = GGS_ipic_31__38_AbstractConditionTerminator ((cPtr_ipic_31__38_AbstractConditionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractConditionTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ("ipic18AbstractConditionTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractConditionTerminator_2E_weak result ;
  const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak * p = (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression::GGS_ipic_31__38__5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress (),
mProperty_mNeedsBSR () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression::GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) :
mProperty_mAssemblyString (inSource.mProperty_mAssemblyString),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress),
mProperty_mNeedsBSR (inSource.mProperty_mNeedsBSR) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression & GGS_ipic_31__38__5F_intermediate_5F_registerExpression::operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) {
  mProperty_mAssemblyString = inSource.mProperty_mAssemblyString ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  mProperty_mNeedsBSR = inSource.mProperty_mNeedsBSR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_registerExpression::init_21__21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                                 const GGS_uint & in_mRegisterAddress,
                                                                                                                                 const GGS_bool & in_mNeedsBSR,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mNeedsBSR = in_mNeedsBSR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression::GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_string & inOperand0,
                                                                                                                const GGS_uint & inOperand1,
                                                                                                                const GGS_bool & inOperand2) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mNeedsBSR (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38__5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mNeedsBSR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mNeedsBSR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18_intermediate_registerExpression:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsBSR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_registerExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ("ipic18_intermediate_registerExpression",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_registerExpression::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression * p = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::operator = (const GGS_pic_31__38_RegisterComparisonTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (const GGS_pic_31__38_RegisterComparisonTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_RegisterComparisonTerminator result ;
  if (isValid ()) {
    const cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_RegisterComparisonTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::bang_pic_31__38_RegisterComparisonTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RegisterComparisonTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
      result = GGS_pic_31__38_RegisterComparisonTerminator ((cPtr_pic_31__38_RegisterComparisonTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18RegisterComparisonTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ("pic18RegisterComparisonTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonTerminator_2E_weak result ;
  const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak * p = (const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_IncDecRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_IncDecRegisterTerminator::objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator::GGS_ipic_31__38_IncDecRegisterTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                              const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                              const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                              const GGS_bool & in_mIncrement,
                              const GGS_bool & in_m_5F_W_5F_isDestination,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_IncDecRegisterTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_IncDecRegisterTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::
ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_bool & in_mIncrement,
                                                                   const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator::GGS_ipic_31__38_IncDecRegisterTerminator (const cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38_IncDecRegisterTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_IncDecRegisterTerminator::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_IncDecRegisterTerminator::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18IncDecRegisterTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_IncDecRegisterTerminator::cPtr_ipic_31__38_IncDecRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_IncDecRegisterTerminator::cPtr_ipic_31__38_IncDecRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                      const GGS_bool & in_mIncrement,
                                                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_IncDecRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

void cPtr_ipic_31__38_IncDecRegisterTerminator::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18IncDecRegisterTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_IncDecRegisterTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_IncDecRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_IncDecRegisterTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18IncDecRegisterTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ("ipic18IncDecRegisterTerminator",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_IncDecRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_IncDecRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_IncDecRegisterTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  const GGS_ipic_31__38_IncDecRegisterTerminator * p = (const GGS_ipic_31__38_IncDecRegisterTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_IncDecRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::operator = (const GGS_ipic_31__38_IncDecRegisterTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (const GGS_ipic_31__38_IncDecRegisterTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_IncDecRegisterTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::bang_ipic_31__38_IncDecRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
      result = GGS_ipic_31__38_IncDecRegisterTerminator ((cPtr_ipic_31__38_IncDecRegisterTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18IncDecRegisterTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ("ipic18IncDecRegisterTerminator.weak",
                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak result ;
  const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak * p = (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_TestRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_TestRegisterTerminator::objectCompare (const GGS_pic_31__38_TestRegisterTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator::GGS_pic_31__38_TestRegisterTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_TestRegisterTerminator * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_TestRegisterTerminator (inCompiler COMMA_THERE)) ;
  object->pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, inCompiler) ;
  const GGS_pic_31__38_TestRegisterTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::
pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator::GGS_pic_31__38_TestRegisterTerminator (const cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_TestRegisterTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_pic_31__38_TestRegisterTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18TestRegisterTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_TestRegisterTerminator::cPtr_pic_31__38_TestRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_TestRegisterTerminator::cPtr_pic_31__38_TestRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_TestRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

void cPtr_pic_31__38_TestRegisterTerminator::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18TestRegisterTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_TestRegisterTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_TestRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_TestRegisterTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18TestRegisterTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ("pic18TestRegisterTerminator",
                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_TestRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_TestRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_TestRegisterTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator result ;
  const GGS_pic_31__38_TestRegisterTerminator * p = (const GGS_pic_31__38_TestRegisterTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_TestRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_TestRegisterTerminator_2E_weak::objectCompare (const GGS_pic_31__38_TestRegisterTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak::GGS_pic_31__38_TestRegisterTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak & GGS_pic_31__38_TestRegisterTerminator_2E_weak::operator = (const GGS_pic_31__38_TestRegisterTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak::GGS_pic_31__38_TestRegisterTerminator_2E_weak (const GGS_pic_31__38_TestRegisterTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak GGS_pic_31__38_TestRegisterTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_TestRegisterTerminator result ;
  if (isValid ()) {
    const cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_TestRegisterTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator_2E_weak::bang_pic_31__38_TestRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_TestRegisterTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_TestRegisterTerminator) ;
      result = GGS_pic_31__38_TestRegisterTerminator ((cPtr_pic_31__38_TestRegisterTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18TestRegisterTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ("pic18TestRegisterTerminator.weak",
                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_TestRegisterTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_TestRegisterTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_TestRegisterTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak GGS_pic_31__38_TestRegisterTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator_2E_weak result ;
  const GGS_pic_31__38_TestRegisterTerminator_2E_weak * p = (const GGS_pic_31__38_TestRegisterTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_TestRegisterTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_BitTestTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BitTestTerminator::objectCompare (const GGS_pic_31__38_BitTestTerminator & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator::GGS_pic_31__38_BitTestTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_uint & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_BitTestTerminator * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_BitTestTerminator (inCompiler COMMA_THERE)) ;
  object->pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_pic_31__38_BitTestTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::
pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                       const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                       const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                       const GGS_uint & in_mBitNumber,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator::GGS_pic_31__38_BitTestTerminator (const cPtr_pic_31__38_BitTestTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_pic_31__38_BitTestTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_BitTestTerminator::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18BitTestTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestTerminator::cPtr_pic_31__38_BitTestTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestTerminator::cPtr_pic_31__38_BitTestTerminator (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_uint & in_mBitNumber,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_BitTestTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

void cPtr_pic_31__38_BitTestTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18BitTestTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BitTestTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_BitTestTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18BitTestTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ("pic18BitTestTerminator",
                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BitTestTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BitTestTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BitTestTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator result ;
  const GGS_pic_31__38_BitTestTerminator * p = (const GGS_pic_31__38_BitTestTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BitTestTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BitTestTerminator_2E_weak::objectCompare (const GGS_pic_31__38_BitTestTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak::GGS_pic_31__38_BitTestTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak & GGS_pic_31__38_BitTestTerminator_2E_weak::operator = (const GGS_pic_31__38_BitTestTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak::GGS_pic_31__38_BitTestTerminator_2E_weak (const GGS_pic_31__38_BitTestTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak GGS_pic_31__38_BitTestTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_BitTestTerminator result ;
  if (isValid ()) {
    const cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_BitTestTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator_2E_weak::bang_pic_31__38_BitTestTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BitTestTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BitTestTerminator) ;
      result = GGS_pic_31__38_BitTestTerminator ((cPtr_pic_31__38_BitTestTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18BitTestTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ("pic18BitTestTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BitTestTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BitTestTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BitTestTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak GGS_pic_31__38_BitTestTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator_2E_weak result ;
  const GGS_pic_31__38_BitTestTerminator_2E_weak * p = (const GGS_pic_31__38_BitTestTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BitTestTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum pic18InstructionWithNoOperandKind
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind::GGS_pic_31__38_InstructionWithNoOperandKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_CLRWDT (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_CLRWDT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_DAW (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_DAW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_NOP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_POP (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_POP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_PUSH (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_PUSH ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_RESET (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_RESET ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_SLEEP (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_SLEEP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_pic_31__38_InstructionWithNoOperandKind [8] = {
  "(not built)",
  "CLRWDT",
  "DAW",
  "NOP",
  "POP",
  "PUSH",
  "RESET",
  "SLEEP"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRWDT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isDAW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DAW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NOP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isPOP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_POP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isPUSH (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_PUSH == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isRESET (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RESET == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SLEEP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionWithNoOperandKind::description (String & ioString,
                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18InstructionWithNoOperandKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_InstructionWithNoOperandKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18InstructionWithNoOperandKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ("pic18InstructionWithNoOperandKind",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InstructionWithNoOperandKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InstructionWithNoOperandKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InstructionWithNoOperandKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  const GGS_pic_31__38_InstructionWithNoOperandKind * p = (const GGS_pic_31__38_InstructionWithNoOperandKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InstructionWithNoOperandKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionWithNoOperandKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::operator = (const GGS_ipic_31__38_InstructionWithNoOperand & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (const GGS_ipic_31__38_InstructionWithNoOperand & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_InstructionWithNoOperand_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_InstructionWithNoOperand result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_InstructionWithNoOperand (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::bang_ipic_31__38_InstructionWithNoOperand_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_InstructionWithNoOperand result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_InstructionWithNoOperand) ;
      result = GGS_ipic_31__38_InstructionWithNoOperand ((cPtr_ipic_31__38_InstructionWithNoOperand *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18InstructionWithNoOperand.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ("ipic18InstructionWithNoOperand.weak",
                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_InstructionWithNoOperand_2E_weak result ;
  const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak * p = (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18InstructionWithNoOperand.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@ipic18_intermediate_registerExpression isEqualToRegister'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isEqualToRegister (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                            const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument_inRegister,
                                            Compiler *
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression temp_0 = inObject ;
  result_outResult = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mAssemblyString ().objectCompare (constinArgument_inRegister.readProperty_mAssemblyString ())) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression temp_2 = inObject ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mRegisterAddress ().objectCompare (constinArgument_inRegister.readProperty_mRegisterAddress ())) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression temp_4 = inObject ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mNeedsBSR ().objectCompare (constinArgument_inRegister.readProperty_mNeedsBSR ())) ;
    }
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Enum pic18Instruction_FDA_base_code_AST
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_ADDWFC ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RLCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RLNCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RRCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RRNCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SUBFWB ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SUBWFB ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_XORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST [18] = {
  "(not built)",
  "ADDWF",
  "ADDWFC",
  "ANDWF",
  "COMF",
  "DECF",
  "INCF",
  "IORWF",
  "MOVF",
  "RLCF",
  "RLNCF",
  "RRCF",
  "RRNCF",
  "SUBFWB",
  "SUBWF",
  "SUBWFB",
  "SWAPF",
  "XORWF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isADDWFC (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWFC == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRLCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRLNCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLNCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRRCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRRNCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRNCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBFWB (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBFWB == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBWFB (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWFB == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::description (String & ioString,
                                                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18Instruction_FDA_base_code_AST: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FDA_base_code_AST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ("pic18Instruction_FDA_base_code_AST",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST * p = (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA_base_code_AST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FDA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ("ipic18_intermediate_instruction_FDA.weak",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FDA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum FA_sequential_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MULWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_NEGF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SETF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [6] = {
  "(not built)",
  "CLRF",
  "MOVWF",
  "MULWF",
  "NEGF",
  "SETF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MULWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NEGF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SETF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @FA_sequential_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @FA_sequential_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ("FA_sequential_instruction_base_code",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code * p = (const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("FA_sequential_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::
ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                    const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                                                                                                const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                                                const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_FA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ("ipic18_intermediate_instruction_FA",
                                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ("ipic18_intermediate_instruction_FA.weak",
                                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) :
mProperty_mAssemblyString (inSource.mProperty_mAssemblyString),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) {
  mProperty_mAssemblyString = inSource.mProperty_mAssemblyString ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::init_21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                                                                     const GGS_uint & in_mRegisterAddress,
                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_string & inOperand0,
                                                                                                                                                        const GGS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::description (String & ioString,
                                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18_intermediate_registerExpressionWithoutBSRIndication:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_registerExpressionWithoutBSRIndication generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ("ipic18_intermediate_registerExpressionWithoutBSRIndication",
                                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::extractObject (const GGS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication * p = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpressionWithoutBSRIndication", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (in_mInstructionLocation, in_mSourceRegisterDescription, in_mDestinationRegisterDescription, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::
ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                       const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceRegisterDescription = in_mSourceRegisterDescription ;
  mProperty_mDestinationRegisterDescription = in_mDestinationRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::readProperty_mSourceRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    return p->mProperty_mSourceRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::readProperty_mDestinationRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    return p->mProperty_mDestinationRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mSourceRegisterDescription (),
mProperty_mDestinationRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSourceRegisterDescription (),
mProperty_mDestinationRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceRegisterDescription = in_mSourceRegisterDescription ;
  mProperty_mDestinationRegisterDescription = in_mDestinationRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_MOVFF:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterDescription, mProperty_mDestinationRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSourceRegisterDescription.printNonNullClassInstanceProperties ("mSourceRegisterDescription") ;
    mProperty_mDestinationRegisterDescription.printNonNullClassInstanceProperties ("mDestinationRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVFF generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ("ipic18_intermediate_instruction_MOVFF",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVFF.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ("ipic18_intermediate_instruction_MOVFF.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum literal_instruction_opcode
//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode::GGS_literal_5F_instruction_5F_opcode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ADDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_MULLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MULLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_SUBLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_SUBLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_literal_5F_instruction_5F_opcode [8] = {
  "(not built)",
  "ADDLW",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "MULLW",
  "SUBLW",
  "XORLW"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isADDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isMULLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MULLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isSUBLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_literal_5F_instruction_5F_opcode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literal_5F_instruction_5F_opcode::objectCompare (const GGS_literal_5F_instruction_5F_opcode & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literal_instruction_opcode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ("literal_instruction_opcode",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  const GGS_literal_5F_instruction_5F_opcode * p = (const GGS_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ("ipic18_intermediate_instruction_literalOperation.weak",
                                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mFSRindex,
                  const GGS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (in_mInstructionLocation, in_mFSRindex, in_mValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::
ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_luint & in_mFSRindex,
                                                                      const GGS_uint & in_mValue,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::readProperty_mFSRindex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    return p->mProperty_mFSRindex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_LFSR class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_luint & in_mFSRindex,
                                                                                                                    const GGS_uint & in_mValue,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_LFSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFSRindex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFSRindex.printNonNullClassInstanceProperties ("mFSRindex") ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_LFSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ("ipic18_intermediate_instruction_LFSR",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_LFSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ("ipic18_intermediate_instruction_LFSR.weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum bit_oriented_op
//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op::GGS_bit_5F_oriented_5F_op (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::class_func_BTG (UNUSED_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BTG ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_bit_5F_oriented_5F_op [4] = {
  "(not built)",
  "BCF",
  "BSF",
  "BTG"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bit_5F_oriented_5F_op::getter_isBTG (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BTG == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bit_5F_oriented_5F_op::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_bit_5F_oriented_5F_op [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @bit_oriented_op generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ("bit_oriented_op",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  const GGS_bit_5F_oriented_5F_op * p = (const GGS_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FBA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ("ipic18_intermediate_instruction_FBA.weak",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FBA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::bang_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_JSR ((cPtr_ipic_31__38__5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ("ipic18_intermediate_JSR.weak",
                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mBankIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (in_mInstructionLocation, in_mBankIndex, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::
ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_luint & in_mBankIndex,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVLB class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBankIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_luint & in_mBankIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_MOVLB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (mProperty_mInstructionLocation, mProperty_mBankIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVLB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ("ipic18_intermediate_instruction_MOVLB",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVLB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ("ipic18_intermediate_instruction_MOVLB.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBlankValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (in_mInstructionLocation, in_mBlankValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::
ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_uint & in_mBlankValue,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::readProperty_mBlankValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
    return p->mProperty_mBlankValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FNOP class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBlankValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_uint & in_mBlankValue,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBlankValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_FNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (mProperty_mInstructionLocation, mProperty_mBlankValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBlankValue.printNonNullClassInstanceProperties ("mBlankValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ("ipic18_intermediate_instruction_FNOP",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ("ipic18_intermediate_instruction_FNOP.weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBlankValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (in_mInstructionLocation, in_mBlankValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::
ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_uint & in_mBlankValue,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::readProperty_mBlankValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
    return p->mProperty_mBlankValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_BLANK class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBlankValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_uint & in_mBlankValue,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBlankValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_BLANK:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (mProperty_mInstructionLocation, mProperty_mBlankValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBlankValue.printNonNullClassInstanceProperties ("mBlankValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_BLANK generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ("ipic18_intermediate_instruction_BLANK",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_BLANK.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ("ipic18_intermediate_instruction_BLANK.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum tableAccessOption
//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption::GGS_tableAccessOption (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_simpleAccess (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_simpleAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_postIncrement (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_postIncrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_postDecrement (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_postDecrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_preIncrement (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_preIncrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableAccessOption [5] = {
  "(not built)",
  "simpleAccess",
  "postIncrement",
  "postDecrement",
  "preIncrement"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isSimpleAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_simpleAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isPostIncrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_postIncrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isPostDecrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_postDecrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isPreIncrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_preIncrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableAccessOption::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @tableAccessOption: ") ;
  ioString.appendCString (gEnumNameArrayFor_tableAccessOption [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @tableAccessOption generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableAccessOption ("tableAccessOption",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableAccessOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableAccessOption ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableAccessOption::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableAccessOption (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  const GGS_tableAccessOption * p = (const GGS_tableAccessOption *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableAccessOption *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableAccessOption", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLRD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ("ipic18_intermediate_instruction_TBLRD.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLRD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_tableAccessOption & in_mOption,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (in_mInstructionLocation, in_mOption, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::
ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_tableAccessOption & in_mOption,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableAccessOption () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOption () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_tableAccessOption & in_mOption,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOption () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_TBLWT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (mProperty_mInstructionLocation, mProperty_mOption, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLWT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ("ipic18_intermediate_instruction_TBLWT",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLWT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ("ipic18_intermediate_instruction_TBLWT.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::
ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_luint & in_mOccurrenceFactor,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_luint & in_mOccurrenceFactor,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ("ipic18_intermediate_instruction_MNOP",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ("ipic18_intermediate_instruction_MNOP.weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::
ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_luint & in_mOccurrenceFactor,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                                                                                        const GGS_luint & in_mOccurrenceFactor,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_NOPBRA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_NOPBRA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ("ipic18_intermediate_instruction_NOPBRA",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_NOPBRA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ("ipic18_intermediate_instruction_NOPBRA.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ((cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_MOV_LABEL_W.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ("ipic18_intermediate_MOV_LABEL_W.weak",
                                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_MOV_LABEL_W.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (in_mInstructionLocation, in_mTargetInstructions, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::
ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                   const GGS_bool & in_mUsesRCALL,
                                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetInstructions = in_mTargetInstructions ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::readProperty_mTargetInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SequentialInstructionList () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mTargetInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mTargetInstructions (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                                                                                                              const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                                                                              const GGS_bool & in_mUsesRCALL,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetInstructions (),
mProperty_mUsesRCALL () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetInstructions = in_mTargetInstructions ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::description (String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_computed_rcall:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (mProperty_mInstructionLocation, mProperty_mTargetInstructions, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetInstructions.printNonNullClassInstanceProperties ("mTargetInstructions") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_computed_rcall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ("ipic18_intermediate_instruction_computed_rcall",
                                                                                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::extractObject (const GGS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_computed_rcall.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ("ipic18_intermediate_instruction_computed_rcall.weak",
                                                                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_condition_5F_skip_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) :
GGS_ipic_31__38_SequentialInstruction () {
}


void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::
ipic_31__38__5F_condition_5F_skip_5F_instruction_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::readProperty_mEmbeddedInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SequentialInstruction () ;
  }else{
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
    return p->mProperty_mEmbeddedInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_condition_skip_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mEmbeddedInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                                                                              const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mEmbeddedInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mEmbeddedInstruction.printNonNullClassInstanceProperties ("mEmbeddedInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_condition_skip_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ("ipic18_condition_skip_instruction",
                                                                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::operator = (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::bang_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
      result = GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction ((cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_condition_skip_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ("ipic18_condition_skip_instruction.weak",
                                                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak result ;
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak * p = (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                          const GGS_bool & in_mSkipIfSet,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_uint & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::
ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                             const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                             const GGS_bool & in_mSkipIfSet,
                                                                             const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                             const GGS_uint & in_mBitNumber,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                  const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                  const GGS_bool & in_mSkipIfSet,
                                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GGS_uint & in_mBitNumber,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_skip_instruction_BitTestSkip:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ("ipic18_skip_instruction_BitTestSkip",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_BitTestSkip.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ("ipic18_skip_instruction_BitTestSkip.weak",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ipic18_compare_register_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_TSTFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [5] = {
  "(not built)",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @ipic18_compare_register_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ipic18_compare_register_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ("ipic18_compare_register_instruction_base_code",
                                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code * p = (const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_compare_register_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                      const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mCompareInstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::
ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                 const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                 const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mCompareInstruction = in_mCompareInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::readProperty_mCompareInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    return p->mProperty_mCompareInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_compare_register class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (inCompiler COMMA_THERE),
mProperty_mCompareInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GGS_location & in_mInstructionLocation,
                                                                                                                                  const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                                  const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mCompareInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mCompareInstruction = in_mCompareInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_skip_instruction_compare_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCompareInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mCompareInstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mCompareInstruction.printNonNullClassInstanceProperties ("mCompareInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_compare_register generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ("ipic18_skip_instruction_compare_register",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_compare_register.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ("ipic18_skip_instruction_compare_register.weak",
                                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum skip_instruction_FDA_base_code
//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DCFSNZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INFSNZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [5] = {
  "(not built)",
  "DECFSZ",
  "DCFSNZ",
  "INCFSZ",
  "INFSNZ"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDCFSNZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DCFSNZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINFSNZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INFSNZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::description (String & ioString,
                                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @skip_instruction_FDA_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @skip_instruction_FDA_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ("skip_instruction_FDA_base_code",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code * p = (const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("skip_instruction_FDA_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                          const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_skip_5F_instruction_5F_FDA_init_21__21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::
ipic_31__38__5F_skip_5F_instruction_5F_FDA_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                     const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                  const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                  const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_skip_instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FDA_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FDA_base_code") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_FDA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ("ipic18_skip_instruction_FDA",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_FDA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ("ipic18_skip_instruction_FDA.weak",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForBlockOptimization
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::GGS_symbolTableForBlockOptimization (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::~ GGS_symbolTableForBlockOptimization (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::GGS_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization & GGS_symbolTableForBlockOptimization::operator = (const GGS_symbolTableForBlockOptimization & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForBlockOptimization::getter_hasKey (const GGS_string & inKey
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForBlockOptimization::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                    const GGS_uint & inLevel
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForBlockOptimization::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForBlockOptimization::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForBlockOptimization::getter_locationForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_symbolTableForBlockOptimization::getter_keyList (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::performInsert (const GGS_symbolTableForBlockOptimization_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForBlockOptimization_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>
GGS_symbolTableForBlockOptimization::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForBlockOptimization::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>>
GGS_symbolTableForBlockOptimization::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForBlockOptimization::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForBlockOptimization_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForBlockOptimization_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDefinitionBlockIndex = info->mProperty_mDefinitionBlockIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::class_func_mapWithMapToOverride (const GGS_symbolTableForBlockOptimization & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::setter_insertKey (GGS_lstring inLKey,
                                                            GGS_uint inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForBlockOptimization_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::method_searchKey (GGS_lstring inLKey,
                                                            GGS_uint & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mDefinitionBlockIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForBlockOptimization::getter_mDefinitionBlockIndexForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDefinitionBlockIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::setter_setMDefinitionBlockIndexForKey (GGS_uint inValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForBlockOptimization_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDefinitionBlockIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForBlockOptimization_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDefinitionBlockIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mDefinitionBlockIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForBlockOptimization_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForBlockOptimization_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForBlockOptimization
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForBlockOptimization::DownEnumerator_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element DownEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionBlockIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForBlockOptimization
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForBlockOptimization::UpEnumerator_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element UpEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionBlockIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForBlockOptimization generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ("symbolTableForBlockOptimization",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForBlockOptimization::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForBlockOptimization::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForBlockOptimization (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  const GGS_symbolTableForBlockOptimization * p = (const GGS_symbolTableForBlockOptimization *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForBlockOptimization *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForClusterOrdering
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::GGS_symbolTableForClusterOrdering (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::~ GGS_symbolTableForClusterOrdering (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::GGS_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering & GGS_symbolTableForClusterOrdering::operator = (const GGS_symbolTableForClusterOrdering & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForClusterOrdering::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForClusterOrdering::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForClusterOrdering::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_symbolTableForClusterOrdering::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::performInsert (const GGS_symbolTableForClusterOrdering_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForClusterOrdering_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>
GGS_symbolTableForClusterOrdering::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForClusterOrdering::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>>
GGS_symbolTableForClusterOrdering::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForClusterOrdering::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForClusterOrdering_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForClusterOrdering_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mCluster = info->mProperty_mCluster ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::class_func_mapWithMapToOverride (const GGS_symbolTableForClusterOrdering & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForClusterOrdering_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::method_searchKey (GGS_lstring inLKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mCluster ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_mClusterForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCluster ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::setter_setMClusterForKey (GGS_uint inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForClusterOrdering_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCluster = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForClusterOrdering_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mCluster:") ;
    inArray (i COMMA_HERE)->mProperty_mCluster.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForClusterOrdering_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForClusterOrdering_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForClusterOrdering
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForClusterOrdering::DownEnumerator_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element DownEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCluster ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForClusterOrdering
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForClusterOrdering::UpEnumerator_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element UpEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCluster ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForClusterOrdering generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ("symbolTableForClusterOrdering",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForClusterOrdering::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForClusterOrdering::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForClusterOrdering (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  const GGS_symbolTableForClusterOrdering * p = (const GGS_symbolTableForClusterOrdering *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForClusterOrdering *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::builtDictionary (LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_branchOverflowMapDictionary::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_branchOverflowMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_ GGS_branchOverflowMapDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_branchOverflowMapDictionary_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_branchOverflowMapDictionary_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_branchOverflowMapDictionary_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::plusPlusAssignOperation (const GGS_branchOverflowMapDictionary_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::addAssignOperation (const GGS_string & inKey,
                                                          const GGS_stringlist & inArgument0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_insert (const GGS_string inKey,
                                                     const GGS_stringlist inArgument0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_branchOverflowMapDictionary::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::method_searchKey (GGS_string inKey,
                                                        GGS_stringlist & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_removeKey (GGS_string inKey,
                                                        GGS_stringlist & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_branchOverflowMapDictionary::getter_mListForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get mList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_mList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_setMListForKey (GGS_stringlist inPropertyValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_branchOverflowMapDictionary_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setMListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_mList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @branchOverflowMapDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_branchOverflowMapDictionary::UpEnumerator_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_branchOverflowMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_branchOverflowMapDictionary::current_mList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mList ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element UpEnumerator_branchOverflowMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @branchOverflowMapDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_branchOverflowMapDictionary::DownEnumerator_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_branchOverflowMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_branchOverflowMapDictionary::current_mList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mList ;
}


//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element DownEnumerator_branchOverflowMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @branchOverflowMapDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary ("branchOverflowMapDictionary",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchOverflowMapDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMapDictionary ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchOverflowMapDictionary::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchOverflowMapDictionary (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary result ;
  const GGS_branchOverflowMapDictionary * p = (const GGS_branchOverflowMapDictionary *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchOverflowMapDictionary *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMapDictionary", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap::GGS_branchOverflowMap (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap::GGS_branchOverflowMap (const GGS_branchOverflowMap & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap & GGS_branchOverflowMap::operator = (const GGS_branchOverflowMap & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_branchOverflowMap GGS_branchOverflowMap::init (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchOverflowMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_branchOverflowMapDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap::GGS_branchOverflowMap (const GGS_branchOverflowMapDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchOverflowMap::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMap::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMap::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchOverflowMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @branchOverflowMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchOverflowMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchOverflowMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchOverflowMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap GGS_branchOverflowMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMap result ;
  const GGS_branchOverflowMap * p = (const GGS_branchOverflowMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchOverflowMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@branchOverflowMap listForKey'
//--------------------------------------------------------------------------------------------------

GGS_stringlist extensionGetter_listForKey (const GGS_branchOverflowMap & inObject,
                                           const GGS_string & constinArgument_inKey,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_branchOverflowMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_branchOverflowMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 411)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_instructionRelativeBranchOverflow (const GGS_uint /* constinArgument_inAddress */,
                                                                                       const GGS_string /* constinArgument_inBlockLabel */,
                                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                       GGS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const GGS_uint constin_inAddress,
                                                            const GGS_string constin_inBlockLabel,
                                                            const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            GGS_branchOverflowMap & io_ioOverflowMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_instructionRelativeBranchOverflow (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint /* constinArgument_inAddress */,
                                                                                        const GGS_string /* constinArgument_inBlockLabel */,
                                                                                        const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                        const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GGS_branchOverflowMap & /* ioArgument_ioOverflowMap */,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GGS_uint constin_inAddress,
                                                           const GGS_string constin_inBlockLabel,
                                                           const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const GGS_string constin_inNextBlockLabel,
                                                           GGS_branchOverflowMap & io_ioOverflowMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_terminatorRelativeBranchOverflow (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioOverflowMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractBlockTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint /* constinArgument_inAddress */,
                                                                                                 const GGS_string /* constinArgument_inBlockLabel */,
                                                                                                 const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                 const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GGS_uint & /* ioArgument_ioConversionCount */,
                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractBlockTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const GGS_uint constin_inAddress,
                                                                    const GGS_string constin_inBlockLabel,
                                                                    const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const GGS_string constin_inNextBlockLabel,
                                                                    GGS_uint & io_ioConversionCount,
                                                                    GGS_string & io_ioListFileContents,
                                                                    GGS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  out_outModifiedTerminator.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_performTerminatorRelativeBranchResolution (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, constin_inNextBlockLabel, io_ioConversionCount, io_ioListFileContents, out_outModifiedTerminator, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForRelativesResolution
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::GGS_symbolTableForRelativesResolution (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::~ GGS_symbolTableForRelativesResolution (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::GGS_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution & GGS_symbolTableForRelativesResolution::operator = (const GGS_symbolTableForRelativesResolution & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForRelativesResolution::getter_hasKey (const GGS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForRelativesResolution::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                      const GGS_uint & inLevel
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForRelativesResolution::getter_locationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_symbolTableForRelativesResolution::getter_keyList (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::performInsert (const GGS_symbolTableForRelativesResolution_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForRelativesResolution_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>
GGS_symbolTableForRelativesResolution::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForRelativesResolution::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>>
GGS_symbolTableForRelativesResolution::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForRelativesResolution::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForRelativesResolution_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForRelativesResolution_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLabelAddress = info->mProperty_mLabelAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::class_func_mapWithMapToOverride (const GGS_symbolTableForRelativesResolution & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::setter_insertKey (GGS_lstring inLKey,
                                                              GGS_uint inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::method_searchKey (GGS_lstring inLKey,
                                                              GGS_uint & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mLabelAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_mLabelAddressForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLabelAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::setter_setMLabelAddressForKey (GGS_uint inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForRelativesResolution_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLabelAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForRelativesResolution_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mLabelAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mLabelAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForRelativesResolution_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForRelativesResolution_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForRelativesResolution
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForRelativesResolution::DownEnumerator_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element DownEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForRelativesResolution
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForRelativesResolution::UpEnumerator_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element UpEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForRelativesResolution generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ("symbolTableForRelativesResolution",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForRelativesResolution::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForRelativesResolution::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForRelativesResolution (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  const GGS_symbolTableForRelativesResolution * p = (const GGS_symbolTableForRelativesResolution *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForRelativesResolution *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@codeList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_codeList : public cCollectionElement {
  public: GGS_codeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_codeList (const GGS_string & in_mAssemblyCode,
                                       const GGS_uintlist & in_mBinaryCode
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GGS_string & in_mAssemblyCode,
                                                          const GGS_uintlist & in_mBinaryCode
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAssemblyCode, in_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_codeList::cCollectionElement_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAssemblyCode, inElement.mProperty_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_codeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_codeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_codeList (mObject.mProperty_mAssemblyCode, mObject.mProperty_mBinaryCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @codeList
//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_codeList * p = (cCollectionElement_codeList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_codeList) ;
    const GGS_codeList_2E_element element (p->mObject.mProperty_mAssemblyCode, p->mObject.mProperty_mBinaryCode) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_string & in_mAssemblyCode,
                                              const GGS_uintlist & in_mBinaryCode
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_codeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_codeList (in_mAssemblyCode, in_mBinaryCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_codeList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_codeList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAssemblyCode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAssemblyCode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBinaryCode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBinaryCode.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::plusPlusAssignOperation (const GGS_codeList_2E_element & inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::class_func_listWithValue (const GGS_string & inOperand0,
                                                     const GGS_uintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element element (inOperand0, inOperand1) ;
  GGS_codeList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::addAssignOperation (const GGS_string & inOperand0,
                                       const GGS_uintlist & inOperand1
                                       COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_append (const GGS_string inOperand0,
                                  const GGS_uintlist inOperand1,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_insertAtIndex (const GGS_string inOperand0,
                                         const GGS_uintlist inOperand1,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_removeAtIndex (GGS_string & outOperand0,
                                         GGS_uintlist & outOperand1,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBinaryCode ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_popFirst (GGS_string & outOperand0,
                                    GGS_uintlist & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBinaryCode ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_popLast (GGS_string & outOperand0,
                                   GGS_uintlist & outOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBinaryCode ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::method_first (GGS_string & outOperand0,
                                 GGS_uintlist & outOperand1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBinaryCode ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::method_last (GGS_string & outOperand0,
                                GGS_uintlist & outOperand1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBinaryCode ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::add_operation (const GGS_codeList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::subList (const int32_t inStart,
                                    const int32_t inLength,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::plusAssignOperation (const GGS_codeList inList,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_setMAssemblyCodeAtIndex (GGS_string inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAssemblyCode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_codeList::getter_mAssemblyCodeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAssemblyCode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_setMBinaryCodeAtIndex (GGS_uintlist inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBinaryCode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uintlist GGS_codeList::getter_mBinaryCodeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBinaryCode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @codeList
//--------------------------------------------------------------------------------------------------

DownEnumerator_codeList::DownEnumerator_codeList (const GGS_codeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element DownEnumerator_codeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssemblyCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBinaryCode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @codeList
//--------------------------------------------------------------------------------------------------

UpEnumerator_codeList::UpEnumerator_codeList (const GGS_codeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element UpEnumerator_codeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssemblyCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBinaryCode ;
}




//--------------------------------------------------------------------------------------------------
//     @codeList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList ("codeList",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_codeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_codeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_codeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_codeList result ;
  const GGS_codeList * p = (const GGS_codeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_codeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::~ GGS_pic_31__38__5F_dataAddressMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap & GGS_pic_31__38__5F_dataAddressMap::operator = (const GGS_pic_31__38__5F_dataAddressMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataAddressMap::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataAddressMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38__5F_dataAddressMap::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38__5F_dataAddressMap::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::performInsert (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataAddressMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>
GGS_pic_31__38__5F_dataAddressMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38__5F_dataAddressMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>>
GGS_pic_31__38__5F_dataAddressMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38__5F_dataAddressMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataAddressMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDataAddress = info->mProperty_mDataAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataAddressMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38__5F_dataAddressMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::method_searchKey (GGS_lstring inLKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' data is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mDataAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_mDataAddressForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDataAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_setMDataAddressForKey (GGS_uint inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataAddressMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDataAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38__5F_dataAddressMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDataAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mDataAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38__5F_dataAddressMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38__5F_dataAddressMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38__5F_dataAddressMap::DownEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element DownEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDataAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38__5F_dataAddressMap::UpEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element UpEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDataAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18_dataAddressMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ("pic18_dataAddressMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  const GGS_pic_31__38__5F_dataAddressMap * p = (const GGS_pic_31__38__5F_dataAddressMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

