#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"



//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                        Lexique_piccoloDevice_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  GGS_lstring var_deviceName_338 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  GGS_processorType var_processorType_390 ;
  GGS_lstring var_processorName_429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_processorType_390 = GGS_processorType::class_func_pic_31__38__5F__36__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 18)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_80"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_processorType_390 = GGS_processorType::class_func_pic_31__38__5F__38__30_ (SOURCE_FILE ("piccoloDevice_syntax.galgas", 20)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_processorType_390 = GGS_processorType::class_func_midrange (SOURCE_FILE ("piccoloDevice_syntax.galgas", 22)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("baseline"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_processorType_390 = GGS_processorType::class_func_baseline (SOURCE_FILE ("piccoloDevice_syntax.galgas", 24)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), GGS_string ("The '").add_operation (var_processorName_429.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)).add_operation (GGS_string ("' processor is not handled"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)), fixItArray4  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 26)) ;
          var_processorType_390.drop () ; // Release error dropped variable
        }
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  GGS_luint var_romSize_966 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  GGS_uint var_eepromSize_992 ;
  GGS_uint var_eepromAddress_1015 ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
    var_eepromSize_992 = GGS_uint (uint32_t (0U)) ;
    var_eepromAddress_1015 = GGS_uint (uint32_t (0U)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    GGS_luint var_l_5F_eepromSize_1127 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    var_eepromSize_992 = var_l_5F_eepromSize_1127.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    GGS_luint var_l_5F_eepromAddress_1210 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    var_eepromAddress_1015 = var_l_5F_eepromAddress_1210.readProperty_uint () ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  GGS_luint var_bankCount_1314 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_5 = false ;
    }
  }
  GGS_ramBankTable var_ramBankTable_1525 = GGS_ramBankTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_6 = true ;
  while (repeatFlag_6) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      GGS_lstring var_ramName_1614 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      GGS_luint var_ramStart_1656 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      GGS_luint var_ramEnd_1700 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      GGS_uintlist var_mirrorOffsetList_1715 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_7 = true ;
        while (repeatFlag_7) {
          GGS_luint var_mirrorStartAddress_1824 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          var_mirrorOffsetList_1715.addAssignOperation (var_mirrorStartAddress_1824.readProperty_uint ().substract_operation (var_ramStart_1656.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75))  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 75)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_7 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
      {
      var_ramBankTable_1525.setter_insertKey (var_ramName_1614, var_ramStart_1656.readProperty_uint (), var_ramStart_1656.readProperty_uint (), var_ramEnd_1700.readProperty_uint ().add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 85)), var_mirrorOffsetList_1715, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 81)) ;
      }
    }else{
      repeatFlag_6 = false ;
    }
  }
  GGS_registerTable var_registerTable_2155 = GGS_registerTable::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      GGS_lstring var_registerName_2251 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      GGS_uintlist var_registerAddressList_2281 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GGS_luint var_registerAddress_2354 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        var_registerAddressList_2281.addAssignOperation (var_registerAddress_2354.readProperty_uint ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 98)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      GGS_uint var_sliceIndex_2471 = GGS_uint (uint32_t (8U)) ;
      GGS_bitSliceTable var_bitSliceTable_2494 = GGS_bitSliceTable::init (inCompiler COMMA_HERE) ;
      GGS_string var_bitDefinitionString_2543 = GGS_string (" <") ;
      bool repeatFlag_10 = true ;
      while (repeatFlag_10) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          GGS_uint var_sliceWidth_2612 = GGS_uint (uint32_t (0U)) ;
          bool repeatFlag_11 = true ;
          while (repeatFlag_11) {
            GGS_uint var_sliceBase_2681 = var_sliceIndex_2471 ;
            GGS_lstring var_sliceName_2741 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2612.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2612.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (var_sliceName_2741.readProperty_location (), GGS_string ("a slice of 1 bit is expected for '").add_operation (var_sliceName_2741.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)), fixItArray13  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 114)) ;
                }
              }
              var_sliceWidth_2612 = GGS_uint (uint32_t (1U)) ;
              var_bitDefinitionString_2543.plusAssignOperation(var_sliceName_2741.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 117)) ;
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              GGS_luint var_sliceSize_3071 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2612.objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_sliceWidth_2612.objectCompare (var_sliceSize_3071.readProperty_uint ())) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 121)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (var_sliceName_2741.readProperty_location (), GGS_string ("a slice of ").add_operation (var_sliceWidth_2612.getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GGS_string (" bits is expected for '"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (var_sliceName_2741.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)), fixItArray15  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 122)) ;
                }
              }
              var_sliceWidth_2612 = var_sliceSize_3071.readProperty_uint () ;
              var_sliceBase_2681 = var_sliceBase_2681.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)).substract_operation (var_sliceSize_3071.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 125)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
              var_bitDefinitionString_2543.plusAssignOperation(var_sliceName_2741.readProperty_string ().add_operation (GGS_string ("["), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (var_sliceSize_3071.readProperty_uint ().getter_string (SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 127)) ;
            } break ;
            default:
              break ;
            }
            {
            var_bitSliceTable_2494.setter_insertKey (var_sliceName_2741, var_sliceIndex_2471.substract_operation (var_sliceWidth_2612, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)), var_sliceWidth_2612, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 129)) ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
              var_bitDefinitionString_2543.plusAssignOperation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 132)) ;
            }else{
              repeatFlag_11 = false ;
            }
          }
          var_sliceIndex_2471 = var_sliceIndex_2471.substract_operation (var_sliceWidth_2612, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 134)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
          var_bitDefinitionString_2543.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 137)) ;
          var_sliceIndex_2471.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 138)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
          var_bitDefinitionString_2543.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 142)) ;
        }else{
          repeatFlag_10 = false ;
        }
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, var_sliceIndex_2471.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (var_registerName_2251.readProperty_location (), GGS_string ("Incorrect bit definition for register '").add_operation (var_registerName_2251.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)), fixItArray17  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 145)) ;
        }
      }
      var_bitDefinitionString_2543.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 147)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      {
      var_registerTable_2155.setter_insertKey (var_registerName_2251, var_registerAddressList_2281, GGS_uint (uint32_t (1U)), var_bitSliceTable_2494, var_bitDefinitionString_2543, GGS_registerProtection::class_func_publicRegister (SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 149)) ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_8 = false ;
    }
  }
  GGS_configRegisterMap var_configRegisterMap_4162 = GGS_configRegisterMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_18 = true ;
  while (repeatFlag_18) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      GGS_lstring var_configRegisterName_4271 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      GGS_luint var_configRegisterAddress_4325 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      GGS_luint var_configRegisterWidth_4385 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      GGS_illegalMaskList var_illegalMaskList_4413 = GGS_illegalMaskList::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_19 = true ;
      while (repeatFlag_19) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          GGS_luint var_illegalValue_4515 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          GGS_luint var_illegalMask_4569 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          GGS_lstring var_illegalDescriptionString_4626 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
          var_illegalMaskList_4413.addAssignOperation (var_illegalValue_4515, var_illegalMask_4569, var_illegalDescriptionString_4626  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 170)) ;
        }else{
          repeatFlag_19 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      GGS_configRegisterMaskMap var_configRegisterMaskMap_4753 = GGS_configRegisterMaskMap::init (inCompiler COMMA_HERE) ;
      GGS_stringset var_settingNameSet_4810 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_20 = true ;
      while (repeatFlag_20) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          GGS_lstring var_maskName_4894 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          GalgasBool test_21 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_21) {
            test_21 = var_settingNameSet_4810.getter_hasKey (var_maskName_4894.readProperty_string () COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 178)).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              GenericArray <FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (var_maskName_4894.readProperty_location (), GGS_string ("The '").add_operation (var_maskName_4894.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)).add_operation (GGS_string ("' setting is already defined"), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)), fixItArray22  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 179)) ;
            }
          }
          var_settingNameSet_4810.plusPlusAssignOperation (var_maskName_4894.readProperty_string ()  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 181)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          GGS_luint var_maskValue_5125 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          GGS_lstring var_maskDescriptionString_5184 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          GGS_fieldSettingMap var_fieldSettingMap_5216 = GGS_fieldSettingMap::init (inCompiler COMMA_HERE) ;
          bool repeatFlag_23 = true ;
          while (repeatFlag_23) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            GGS_luint var_value_5314 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            GGS_luint var_mask_5365 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            GGS_lstring var_descriptionString_5423 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            {
            var_fieldSettingMap_5216.setter_insertKey (var_descriptionString_5423, var_value_5314.readProperty_uint (), var_mask_5365.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 194)) ;
            }
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_23 = false ;
            }
          }
          {
          var_configRegisterMaskMap_4753.setter_insertKey (var_maskName_4894, var_maskValue_5125, var_maskDescriptionString_5184, var_fieldSettingMap_5216, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 197)) ;
          }
        }else{
          repeatFlag_20 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
      {
      var_configRegisterMap_4162.setter_insertKey (var_configRegisterName_4271, var_configRegisterAddress_4325, var_configRegisterWidth_4385, var_configRegisterMaskMap_4753, var_illegalMaskList_4413, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 200)) ;
      }
    }else{
      repeatFlag_18 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_60"))).operator_or (GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("pic18_80"))) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 210)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      GGS_uintlist joker_6046_5 ; // Joker input parameter
      GGS_uint joker_6046_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6046_3 ; // Joker input parameter
      GGS_string joker_6046_2 ; // Joker input parameter
      GGS_registerProtection joker_6046_1 ; // Joker input parameter
      var_registerTable_2155.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)), inCompiler COMMA_HERE), joker_6046_5, joker_6046_4, joker_6046_3, joker_6046_2, joker_6046_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 211)) ;
      GGS_uintlist joker_6117_5 ; // Joker input parameter
      GGS_uint joker_6117_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6117_3 ; // Joker input parameter
      GGS_string joker_6117_2 ; // Joker input parameter
      GGS_registerProtection joker_6117_1 ; // Joker input parameter
      var_registerTable_2155.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)), inCompiler COMMA_HERE), joker_6117_5, joker_6117_4, joker_6117_3, joker_6117_2, joker_6117_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 212)) ;
      GGS_uintlist joker_6188_5 ; // Joker input parameter
      GGS_uint joker_6188_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6188_3 ; // Joker input parameter
      GGS_string joker_6188_2 ; // Joker input parameter
      GGS_registerProtection joker_6188_1 ; // Joker input parameter
      var_registerTable_2155.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)), inCompiler COMMA_HERE), joker_6188_5, joker_6188_4, joker_6188_3, joker_6188_2, joker_6188_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 213)) ;
      GGS_uintlist joker_6259_5 ; // Joker input parameter
      GGS_uint joker_6259_4 ; // Joker input parameter
      GGS_bitSliceTable joker_6259_3 ; // Joker input parameter
      GGS_string joker_6259_2 ; // Joker input parameter
      GGS_registerProtection joker_6259_1 ; // Joker input parameter
      var_registerTable_2155.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)), inCompiler COMMA_HERE), joker_6259_5, joker_6259_4, joker_6259_3, joker_6259_2, joker_6259_1, inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 214)) ;
    }
  }
  GGS_string var_sharedBankName_6328 = GGS_string::makeEmptyString () ;
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, var_processorName_429.readProperty_string ().objectCompare (GGS_string ("mid-range"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      UpEnumerator_ramBankTable enumerator_6459 (var_ramBankTable_1525) ;
      bool bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6328.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
      if (enumerator_6459.hasCurrentObject () && bool_26) {
        while (enumerator_6459.hasCurrentObject () && bool_26) {
          GGS_uint var_bankAccessibility_6542 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).left_shift_operation (enumerator_6459.current_mFirstFreeAddress (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 220)) ;
          UpEnumerator_uintlist enumerator_6603 (enumerator_6459.current_mMirrorOffsetList (HERE)) ;
          while (enumerator_6603.hasCurrentObject ()) {
            var_bankAccessibility_6542 = var_bankAccessibility_6542.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).left_shift_operation (enumerator_6459.current_mFirstFreeAddress (HERE).add_operation (enumerator_6603.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)).getter_uint (inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 222)) ;
            enumerator_6603.gotoNextObject () ;
          }
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).left_shift_operation (var_bankCount_1314.readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).objectCompare (var_bankAccessibility_6542.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)).getter_bigint (SOURCE_FILE ("piccoloDevice_syntax.galgas", 224)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              var_sharedBankName_6328 = enumerator_6459.current_lkey (HERE).readProperty_string () ;
            }
          }
          enumerator_6459.gotoNextObject () ;
          if (enumerator_6459.hasCurrentObject ()) {
            bool_26 = GGS_bool (ComparisonKind::equal, var_sharedBankName_6328.objectCompare (GGS_string::makeEmptyString ())).isValidAndTrue () ;
          }
        }
      }
    }
  }
  outArgument_outPiccoloDeviceModel = GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (var_deviceName_338, var_processorType_390, var_romSize_966, var_bankCount_1314, var_registerTable_2155, var_ramBankTable_1525, var_eepromSize_992, var_eepromAddress_1015, var_configRegisterMap_4162, var_sharedBankName_6328, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_piccoloDevice_5F_syntax::rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccoloDevice_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_controller COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 11)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 12)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 13)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_processor COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 14)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_romsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 29)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 30)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 31)) ;
  switch (select_piccoloDevice_5F_syntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 38)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 39)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 41)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 42)) ;
    inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 46)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 47)) ;
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_piccoloDevice_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 52)) ;
      switch (select_piccoloDevice_5F_syntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 55)) ;
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 56)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_piccoloDevice_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 66)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_to COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 68)) ;
      switch (select_piccoloDevice_5F_syntax_4 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 72)) ;
        bool repeatFlag_2 = true ;
        while (repeatFlag_2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 74)) ;
          if (select_piccoloDevice_5F_syntax_5 (inCompiler) == 2) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 77)) ;
          }else{
            repeatFlag_2 = false ;
          }
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 80)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    if (select_piccoloDevice_5F_syntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_register COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 92)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 94)) ;
      bool repeatFlag_4 = true ;
      while (repeatFlag_4) {
        inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 97)) ;
        if (select_piccoloDevice_5F_syntax_7 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 100)) ;
        }else{
          repeatFlag_4 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 102)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        switch (select_piccoloDevice_5F_syntax_9 (inCompiler)) {
        case 1: {
          bool repeatFlag_6 = true ;
          while (repeatFlag_6) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 111)) ;
            switch (select_piccoloDevice_5F_syntax_11 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 119)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 120)) ;
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 126)) ;
            } break ;
            default:
              break ;
            }
            if (select_piccoloDevice_5F_syntax_10 (inCompiler) == 2) {
              inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2F_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 131)) ;
            }else{
              repeatFlag_6 = false ;
            }
          }
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 136)) ;
        } break ;
        default:
          break ;
        }
        if (select_piccoloDevice_5F_syntax_8 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 141)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 148)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 150)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  bool repeatFlag_7 = true ;
  while (repeatFlag_7) {
    if (select_piccoloDevice_5F_syntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_configuration COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 155)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 156)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_at COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 157)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 158)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_width COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 159)) ;
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 160)) ;
      bool repeatFlag_8 = true ;
      while (repeatFlag_8) {
        if (select_piccoloDevice_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_illegal COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 164)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 165)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 166)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 167)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_message COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 168)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 169)) ;
        }else{
          repeatFlag_8 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 172)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        if (select_piccoloDevice_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 177)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 182)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 183)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 184)) ;
          inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 185)) ;
          bool repeatFlag_10 = true ;
          while (repeatFlag_10) {
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_setting COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 188)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 189)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_mask COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 190)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 191)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_description COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 192)) ;
            inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken_string COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 193)) ;
            if (select_piccoloDevice_5F_syntax_15 (inCompiler) == 2) {
            }else{
              repeatFlag_10 = false ;
            }
          }
        }else{
          repeatFlag_9 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 199)) ;
    }else{
      repeatFlag_7 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccoloDevice_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("piccoloDevice_syntax.galgas", 208)) ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression analyzeRegisterExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_analyzeRegisterExpression (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                const GGS_uint constinArgument_inCurrentBank,
                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                const GGS_bool constinArgument_inWriteAccess,
                                                                GGS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                GGS_bitSliceTable & outArgument_outBitSliceTable,
                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_offset_616 ;
  const GGS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_616, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 17)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 18)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_732 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_616.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_732.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_616.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 22)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 22)) ;
    }
  }
  GGS_uint var_registerAddress_877 = GGS_uint (uint32_t (0U)) ;
  GGS_uintlist var_registerAddressList_959 ;
  GGS_uint var_size_994 ;
  GGS_registerProtection var_protection_1037 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_string joker_1025 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_959, var_size_994, outArgument_outBitSliceTable, joker_1025, var_protection_1037, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 26)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_1037, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 34)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, var_offset_616.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("offset (").add_operation (var_offset_616.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 37)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 37)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 37)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_616.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 38)).objectCompare (var_size_994)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_registerExpression temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_994.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)) ;
      }
    }
  }
  GGS_bool var_found_1415 = GGS_bool (false) ;
  UpEnumerator_uintlist enumerator_1436 (var_registerAddressList_959) ;
  bool bool_12 = var_found_1415.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)).isValidAndTrue () ;
  if (enumerator_1436.hasCurrentObject () && bool_12) {
    while (enumerator_1436.hasCurrentObject () && bool_12) {
      var_found_1415 = GGS_bool (ComparisonKind::lowerThan, enumerator_1436.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, enumerator_1436.current_mValue (HERE).objectCompare (GGS_uint (uint32_t (3840U)).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 44)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 44)) ;
      var_registerAddress_877 = enumerator_1436.current_mValue (HERE) ;
      enumerator_1436.gotoNextObject () ;
      if (enumerator_1436.hasCurrentObject ()) {
        bool_12 = var_found_1415.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 43)).isValidAndTrue () ;
      }
    }
  }
  GGS_bool var_needsBSRaccess_1630 = GGS_bool (false) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_found_1415.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 48)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      var_needsBSRaccess_1630 = GGS_bool (true) ;
      var_registerAddressList_959.method_first (var_registerAddress_877, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 50)) ;
      GGS_uint var_neededBank_1762 = var_registerAddress_877.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 51)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_neededBank_1762.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_registerExpression temp_15 = this ;
          GGS_string var_errorMessage_1856 = GGS_string ("Accessing the '").add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)).add_operation (GGS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)).add_operation (var_neededBank_1762.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)) ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 54)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              var_errorMessage_1856.plusAssignOperation(GGS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_errorMessage_1856.plusAssignOperation(GGS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)) ;
          }
          const GGS_registerExpression temp_17 = this ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), var_errorMessage_1856, fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)) ;
        }
      }
    }
  }
  outArgument_outIPICregisterDescription = GGS_ipic_31__38__5F_intermediate_5F_registerExpression::init_21__21__21_ (var_assemblyString_732, var_registerAddress_877.add_operation (var_offset_616.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 65)), var_needsBSRaccess_1630, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (cPtr_registerExpression * inObject,
                                                    const GGS_uint constin_inAccessBankSplitOffset,
                                                    const GGS_uint constin_inCurrentBank,
                                                    const GGS_registerTable constin_inRegisterTable,
                                                    const GGS_constantMap constin_inConstantMap,
                                                    const GGS_bool constin_inWriteAccess,
                                                    GGS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GGS_bitSliceTable & out_outBitSliceTable,
                                                    GGS_stringset & io_ioUsedRegisters,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_analyzeRegisterExpression (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_analyzeRegisterExpressionWithoutCheckingBank (const GGS_registerTable constinArgument_inRegisterTable,
                                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                                   const GGS_bool constinArgument_inWriteAccess,
                                                                                   GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument_outIPICregisterDescription,
                                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerExpression temp_0 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 79)) ;
  const GGS_registerExpression temp_1 = this ;
  GGS_string var_assemblyString_2895 = temp_1.readProperty_mRegisterName ().readProperty_string () ;
  GGS_sint_36__34_ var_offset_3004 ;
  const GGS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_3004, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 82)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_3004.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_2895.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_3004.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)) ;
    }
  }
  GGS_uintlist var_registerAddressList_3184 ;
  GGS_uint var_size_3215 ;
  GGS_registerProtection var_protection_3229 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_bitSliceTable joker_3220_2 ; // Joker input parameter
  GGS_string joker_3220_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_3184, var_size_3215, joker_3220_2, joker_3220_1, var_protection_3229, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 87)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_3229, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 88)) ;
  GGS_uint var_registerAddress_3373 ;
  var_registerAddressList_3184.method_first (var_registerAddress_3373, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_3004.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 91)).objectCompare (var_size_3215)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_3215.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 92)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 92)) ;
    }
  }
  outArgument_outIPICregisterDescription = GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::init_21__21_ (var_assemblyString_2895, var_registerAddress_3373.add_operation (var_offset_3004.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 97)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (cPtr_registerExpression * inObject,
                                                                       const GGS_registerTable constin_inRegisterTable,
                                                                       const GGS_constantMap constin_inConstantMap,
                                                                       const GGS_bool constin_inWriteAccess,
                                                                       GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GGS_stringset & io_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_analyzeRegisterExpressionWithoutCheckingBank (constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression getRegisterAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_getRegisterAddress (const GGS_registerTable constinArgument_inRegisterTable,
                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                         const GGS_bool constinArgument_inWriteAccess,
                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                         GGS_uint & outArgument_outRegisterAddress,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_registerAddressList_4065 ;
  GGS_uint var_size_4096 ;
  GGS_registerProtection var_protection_4110 ;
  const GGS_registerExpression temp_0 = this ;
  GGS_bitSliceTable joker_4101_2 ; // Joker input parameter
  GGS_string joker_4101_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_0.readProperty_mRegisterName (), var_registerAddressList_4065, var_size_4096, joker_4101_2, joker_4101_1, var_protection_4110, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 110)) ;
  const GGS_registerExpression temp_1 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_1.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_4110, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 111)) ;
  GGS_sint_36__34_ var_offset_4286 ;
  const GGS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4286, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 113)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::lowerThan, var_offset_4286.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_registerExpression temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfOffsetExpression (), GGS_string ("offset (").add_operation (var_offset_4286.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_4286.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 116)).objectCompare (var_size_4096)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_registerExpression temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_4096.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)) ;
        outArgument_outRegisterAddress.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      var_registerAddressList_4065.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_4286.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 120)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (cPtr_registerExpression * inObject,
                                             const GGS_registerTable constin_inRegisterTable,
                                             const GGS_constantMap constin_inConstantMap,
                                             const GGS_bool constin_inWriteAccess,
                                             GGS_stringset & io_ioUsedRegisters,
                                             GGS_uint & out_outRegisterAddress,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outRegisterAddress.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_getRegisterAddress (constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, io_ioUsedRegisters, out_outRegisterAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element::GGS_neededConversionForClusterOrder_2E_element (void) :
mProperty_lkey (),
mProperty_mConversions () {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element::GGS_neededConversionForClusterOrder_2E_element (const GGS_neededConversionForClusterOrder_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConversions (inSource.mProperty_mConversions) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element & GGS_neededConversionForClusterOrder_2E_element::operator = (const GGS_neededConversionForClusterOrder_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConversions = inSource.mProperty_mConversions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element GGS_neededConversionForClusterOrder_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_uint & in_mConversions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConversions = in_mConversions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element::GGS_neededConversionForClusterOrder_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConversions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConversions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConversions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @neededConversionForClusterOrder.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConversions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @neededConversionForClusterOrder.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element ("neededConversionForClusterOrder.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_neededConversionForClusterOrder_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_neededConversionForClusterOrder_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_neededConversionForClusterOrder_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element GGS_neededConversionForClusterOrder_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element result ;
  const GGS_neededConversionForClusterOrder_2E_element * p = (const GGS_neededConversionForClusterOrder_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_neededConversionForClusterOrder_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @neededConversionForClusterOrder_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_::GGS_neededConversionForClusterOrder_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_::GGS_neededConversionForClusterOrder_2E_element_3F_ (const GGS_neededConversionForClusterOrder_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_ GGS_neededConversionForClusterOrder_2E_element_3F_::init_nil (void) {
  GGS_neededConversionForClusterOrder_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_neededConversionForClusterOrder_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @neededConversionForClusterOrder.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ("neededConversionForClusterOrder.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_neededConversionForClusterOrder_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_neededConversionForClusterOrder_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_neededConversionForClusterOrder_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_ GGS_neededConversionForClusterOrder_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element_3F_ result ;
  const GGS_neededConversionForClusterOrder_2E_element_3F_ * p = (const GGS_neededConversionForClusterOrder_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_neededConversionForClusterOrder_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element::GGS_blockDurationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mMinDuration (),
mProperty_mMaxDuration () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element::GGS_blockDurationMap_2E_element (const GGS_blockDurationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mMinDuration (inSource.mProperty_mMinDuration),
mProperty_mMaxDuration (inSource.mProperty_mMaxDuration) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element & GGS_blockDurationMap_2E_element::operator = (const GGS_blockDurationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mMinDuration = inSource.mProperty_mMinDuration ;
  mProperty_mMaxDuration = inSource.mProperty_mMaxDuration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockDurationMap_2E_element GGS_blockDurationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mMinDuration,
                                                                                   const GGS_uint & in_mMaxDuration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMinDuration = in_mMinDuration ;
  result.mProperty_mMaxDuration = in_mMaxDuration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element::GGS_blockDurationMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mMinDuration (inOperand1),
mProperty_mMaxDuration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMinDuration.isValid () && mProperty_mMaxDuration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMinDuration.drop () ;
  mProperty_mMaxDuration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockDurationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMinDuration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaxDuration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockDurationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element ("blockDurationMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockDurationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockDurationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockDurationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element GGS_blockDurationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element result ;
  const GGS_blockDurationMap_2E_element * p = (const GGS_blockDurationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockDurationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockDurationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_::GGS_blockDurationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_::GGS_blockDurationMap_2E_element_3F_ (const GGS_blockDurationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_ GGS_blockDurationMap_2E_element_3F_::init_nil (void) {
  GGS_blockDurationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockDurationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockDurationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ("blockDurationMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockDurationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockDurationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockDurationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_ GGS_blockDurationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element_3F_ result ;
  const GGS_blockDurationMap_2E_element_3F_ * p = (const GGS_blockDurationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockDurationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element::GGS_configFieldMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterName (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element::GGS_configFieldMap_2E_element (const GGS_configFieldMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterName (inSource.mProperty_mRegisterName),
mProperty_mMaskValue (inSource.mProperty_mMaskValue),
mProperty_mDescription (inSource.mProperty_mDescription),
mProperty_mFieldSettingMap (inSource.mProperty_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element & GGS_configFieldMap_2E_element::operator = (const GGS_configFieldMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterName = inSource.mProperty_mRegisterName ;
  mProperty_mMaskValue = inSource.mProperty_mMaskValue ;
  mProperty_mDescription = inSource.mProperty_mDescription ;
  mProperty_mFieldSettingMap = inSource.mProperty_mFieldSettingMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configFieldMap_2E_element GGS_configFieldMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_lstring & in_mRegisterName,
                                                                                       const GGS_luint & in_mMaskValue,
                                                                                       const GGS_lstring & in_mDescription,
                                                                                       const GGS_fieldSettingMap & in_mFieldSettingMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element::GGS_configFieldMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_lstring & inOperand1,
                                                              const GGS_luint & inOperand2,
                                                              const GGS_lstring & inOperand3,
                                                              const GGS_fieldSettingMap & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mRegisterName (inOperand1),
mProperty_mMaskValue (inOperand2),
mProperty_mDescription (inOperand3),
mProperty_mFieldSettingMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterName.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configFieldMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaskValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configFieldMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element ("configFieldMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configFieldMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element GGS_configFieldMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element result ;
  const GGS_configFieldMap_2E_element * p = (const GGS_configFieldMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @configFieldMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_::GGS_configFieldMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_::GGS_configFieldMap_2E_element_3F_ (const GGS_configFieldMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap_2E_element_3F_::init_nil (void) {
  GGS_configFieldMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_configFieldMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configFieldMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element_3F_ ("configFieldMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configFieldMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element_3F_ result ;
  const GGS_configFieldMap_2E_element_3F_ * p = (const GGS_configFieldMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element::GGS_bitSliceTable_2E_element (void) :
mProperty_lkey (),
mProperty_mSliceIndex (),
mProperty_mSliceSize () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element::GGS_bitSliceTable_2E_element (const GGS_bitSliceTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSliceIndex (inSource.mProperty_mSliceIndex),
mProperty_mSliceSize (inSource.mProperty_mSliceSize) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element & GGS_bitSliceTable_2E_element::operator = (const GGS_bitSliceTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSliceIndex = inSource.mProperty_mSliceIndex ;
  mProperty_mSliceSize = inSource.mProperty_mSliceSize ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bitSliceTable_2E_element GGS_bitSliceTable_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mSliceIndex,
                                                                             const GGS_uint & in_mSliceSize,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSliceIndex = in_mSliceIndex ;
  result.mProperty_mSliceSize = in_mSliceSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element::GGS_bitSliceTable_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uint & inOperand1,
                                                            const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSliceIndex (inOperand1),
mProperty_mSliceSize (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSliceIndex.isValid () && mProperty_mSliceSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSliceIndex.drop () ;
  mProperty_mSliceSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bitSliceTable.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSliceIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSliceSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bitSliceTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element ("bitSliceTable.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitSliceTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitSliceTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitSliceTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element GGS_bitSliceTable_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element result ;
  const GGS_bitSliceTable_2E_element * p = (const GGS_bitSliceTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitSliceTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @bitSliceTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_::GGS_bitSliceTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_::GGS_bitSliceTable_2E_element_3F_ (const GGS_bitSliceTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_ GGS_bitSliceTable_2E_element_3F_::init_nil (void) {
  GGS_bitSliceTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bitSliceTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bitSliceTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element_3F_ ("bitSliceTable.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitSliceTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitSliceTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitSliceTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_ GGS_bitSliceTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element_3F_ result ;
  const GGS_bitSliceTable_2E_element_3F_ * p = (const GGS_bitSliceTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitSliceTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element::GGS_ramDefinitionList_2E_element (void) :
mProperty_mBankName (),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element::GGS_ramDefinitionList_2E_element (const GGS_ramDefinitionList_2E_element & inSource) :
mProperty_mBankName (inSource.mProperty_mBankName),
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element & GGS_ramDefinitionList_2E_element::operator = (const GGS_ramDefinitionList_2E_element & inSource) {
  mProperty_mBankName = inSource.mProperty_mBankName ;
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ramDefinitionList_2E_element GGS_ramDefinitionList_2E_element::init_21__21_ (const GGS_lstring & in_mBankName,
                                                                                 const GGS_declarationInRamList & in_mDeclaration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBankName = in_mBankName ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element::GGS_ramDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_declarationInRamList & inOperand1) :
mProperty_mBankName (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramDefinitionList_2E_element::isValid (void) const {
  return mProperty_mBankName.isValid () && mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList_2E_element::drop (void) {
  mProperty_mBankName.drop () ;
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ramDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBankName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ramDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ("ramDefinitionList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element GGS_ramDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ramDefinitionList_2E_element result ;
  const GGS_ramDefinitionList_2E_element * p = (const GGS_ramDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element::GGS_configSettingList_2E_element (void) :
mProperty_mSettingName (),
mProperty_mSettingValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element::GGS_configSettingList_2E_element (const GGS_configSettingList_2E_element & inSource) :
mProperty_mSettingName (inSource.mProperty_mSettingName),
mProperty_mSettingValue (inSource.mProperty_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element & GGS_configSettingList_2E_element::operator = (const GGS_configSettingList_2E_element & inSource) {
  mProperty_mSettingName = inSource.mProperty_mSettingName ;
  mProperty_mSettingValue = inSource.mProperty_mSettingValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configSettingList_2E_element GGS_configSettingList_2E_element::init_21__21_ (const GGS_lstring & in_mSettingName,
                                                                                 const GGS_lstring & in_mSettingValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configSettingList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSettingName = in_mSettingName ;
  result.mProperty_mSettingValue = in_mSettingValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element::GGS_configSettingList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lstring & inOperand1) :
mProperty_mSettingName (inOperand0),
mProperty_mSettingValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_configSettingList_2E_element::isValid (void) const {
  return mProperty_mSettingName.isValid () && mProperty_mSettingValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList_2E_element::drop (void) {
  mProperty_mSettingName.drop () ;
  mProperty_mSettingValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configSettingList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSettingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSettingValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configSettingList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList_2E_element ("configSettingList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configSettingList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configSettingList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configSettingList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element GGS_configSettingList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_configSettingList_2E_element result ;
  const GGS_configSettingList_2E_element * p = (const GGS_configSettingList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configSettingList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element::GGS_immediatSliceExpressionList_2E_element (void) :
mProperty_mSliceName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element::GGS_immediatSliceExpressionList_2E_element (const GGS_immediatSliceExpressionList_2E_element & inSource) :
mProperty_mSliceName (inSource.mProperty_mSliceName),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element & GGS_immediatSliceExpressionList_2E_element::operator = (const GGS_immediatSliceExpressionList_2E_element & inSource) {
  mProperty_mSliceName = inSource.mProperty_mSliceName ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element GGS_immediatSliceExpressionList_2E_element::init_21__21_ (const GGS_lstring & in_mSliceName,
                                                                                                     const GGS_immediatExpression & in_mExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceName = in_mSliceName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element::GGS_immediatSliceExpressionList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_immediatExpression & inOperand1) :
mProperty_mSliceName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_immediatSliceExpressionList_2E_element::isValid (void) const {
  return mProperty_mSliceName.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList_2E_element::drop (void) {
  mProperty_mSliceName.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @immediatSliceExpressionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSliceName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatSliceExpressionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ("immediatSliceExpressionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSliceExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSliceExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSliceExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element GGS_immediatSliceExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList_2E_element result ;
  const GGS_immediatSliceExpressionList_2E_element * p = (const GGS_immediatSliceExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSliceExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element::GGS_constantDefinitionList_2E_element (void) :
mProperty_mConstantName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element::GGS_constantDefinitionList_2E_element (const GGS_constantDefinitionList_2E_element & inSource) :
mProperty_mConstantName (inSource.mProperty_mConstantName),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element & GGS_constantDefinitionList_2E_element::operator = (const GGS_constantDefinitionList_2E_element & inSource) {
  mProperty_mConstantName = inSource.mProperty_mConstantName ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantDefinitionList_2E_element GGS_constantDefinitionList_2E_element::init_21__21_ (const GGS_lstring & in_mConstantName,
                                                                                           const GGS_immediatExpression & in_mExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element::GGS_constantDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_immediatExpression & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantDefinitionList_2E_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList_2E_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ("constantDefinitionList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element GGS_constantDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_constantDefinitionList_2E_element result ;
  const GGS_constantDefinitionList_2E_element * p = (const GGS_constantDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element::GGS_actualConfigurationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element::GGS_actualConfigurationMap_2E_element (const GGS_actualConfigurationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress),
mProperty_mRegisterValue (inSource.mProperty_mRegisterValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element & GGS_actualConfigurationMap_2E_element::operator = (const GGS_actualConfigurationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  mProperty_mRegisterValue = inSource.mProperty_mRegisterValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element GGS_actualConfigurationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mRegisterAddress,
                                                                                               const GGS_uint & in_mRegisterValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterValue = in_mRegisterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element::GGS_actualConfigurationMap_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_uint & inOperand1,
                                                                              const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualConfigurationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualConfigurationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ("actualConfigurationMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualConfigurationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualConfigurationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualConfigurationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element GGS_actualConfigurationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element result ;
  const GGS_actualConfigurationMap_2E_element * p = (const GGS_actualConfigurationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualConfigurationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @actualConfigurationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_::GGS_actualConfigurationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_::GGS_actualConfigurationMap_2E_element_3F_ (const GGS_actualConfigurationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_ GGS_actualConfigurationMap_2E_element_3F_::init_nil (void) {
  GGS_actualConfigurationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_actualConfigurationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualConfigurationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ("actualConfigurationMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualConfigurationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualConfigurationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualConfigurationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_ GGS_actualConfigurationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element_3F_ result ;
  const GGS_actualConfigurationMap_2E_element_3F_ * p = (const GGS_actualConfigurationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualConfigurationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element::GGS_labelMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element::GGS_labelMap_2E_element (const GGS_labelMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element & GGS_labelMap_2E_element::operator = (const GGS_labelMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_labelMap_2E_element GGS_labelMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_labelMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element::GGS_labelMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @labelMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @labelMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element ("labelMap.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_labelMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_labelMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_labelMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element GGS_labelMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_labelMap_2E_element result ;
  const GGS_labelMap_2E_element * p = (const GGS_labelMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_labelMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @labelMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_::GGS_labelMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_::GGS_labelMap_2E_element_3F_ (const GGS_labelMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_ GGS_labelMap_2E_element_3F_::init_nil (void) {
  GGS_labelMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_labelMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @labelMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ("labelMap.element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_labelMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_labelMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_labelMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_ GGS_labelMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_labelMap_2E_element_3F_ result ;
  const GGS_labelMap_2E_element_3F_ * p = (const GGS_labelMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_labelMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element::GGS_pic_31__38__5F_dataMap_2E_element (void) :
mProperty_lkey (),
mProperty_mData (),
mProperty_mIsData_38_ () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element::GGS_pic_31__38__5F_dataMap_2E_element (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mData (inSource.mProperty_mData),
mProperty_mIsData_38_ (inSource.mProperty_mIsData_38_) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element & GGS_pic_31__38__5F_dataMap_2E_element::operator = (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mData = inSource.mProperty_mData ;
  mProperty_mIsData_38_ = inSource.mProperty_mIsData_38_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element GGS_pic_31__38__5F_dataMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_uintlist & in_mData,
                                                                                               const GGS_bool & in_mIsData_38_,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mData = in_mData ;
  result.mProperty_mIsData_38_ = in_mIsData_38_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element::GGS_pic_31__38__5F_dataMap_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_uintlist & inOperand1,
                                                                              const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mData (inOperand1),
mProperty_mIsData_38_ (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mData.isValid () && mProperty_mIsData_38_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mData.drop () ;
  mProperty_mIsData_38_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18_dataMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mData.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsData_38_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18_dataMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element ("pic18_dataMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element GGS_pic_31__38__5F_dataMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element result ;
  const GGS_pic_31__38__5F_dataMap_2E_element * p = (const GGS_pic_31__38__5F_dataMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @pic_31__38__5F_dataMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_::GGS_pic_31__38__5F_dataMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_::GGS_pic_31__38__5F_dataMap_2E_element_3F_ (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap_2E_element_3F_::init_nil (void) {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_pic_31__38__5F_dataMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18_dataMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ("pic18_dataMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  const GGS_pic_31__38__5F_dataMap_2E_element_3F_ * p = (const GGS_pic_31__38__5F_dataMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (void) :
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_BlockList_2E_element & inSource) :
mProperty_mBlock (inSource.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element & GGS_ipic_31__38_BlockList_2E_element::operator = (const GGS_ipic_31__38_BlockList_2E_element & inSource) {
  mProperty_mBlock = inSource.mProperty_mBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::init_21_ (const GGS_ipic_31__38_Block & in_mBlock,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_Block & inOperand0) :
mProperty_mBlock (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38_BlockList_2E_element::isValid (void) const {
  return mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::drop (void) {
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18BlockList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18BlockList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ("ipic18BlockList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_BlockList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_BlockList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_BlockList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  const GGS_ipic_31__38_BlockList_2E_element * p = (const GGS_ipic_31__38_BlockList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_BlockList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element::GGS_symbolTableForBlockOptimization_2E_element (void) :
mProperty_lkey (),
mProperty_mDefinitionBlockIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element::GGS_symbolTableForBlockOptimization_2E_element (const GGS_symbolTableForBlockOptimization_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDefinitionBlockIndex (inSource.mProperty_mDefinitionBlockIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element & GGS_symbolTableForBlockOptimization_2E_element::operator = (const GGS_symbolTableForBlockOptimization_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDefinitionBlockIndex = inSource.mProperty_mDefinitionBlockIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element GGS_symbolTableForBlockOptimization_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_uint & in_mDefinitionBlockIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionBlockIndex = in_mDefinitionBlockIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element::GGS_symbolTableForBlockOptimization_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionBlockIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionBlockIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionBlockIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForBlockOptimization.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefinitionBlockIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForBlockOptimization.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ("symbolTableForBlockOptimization.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForBlockOptimization_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForBlockOptimization_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForBlockOptimization_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element GGS_symbolTableForBlockOptimization_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element result ;
  const GGS_symbolTableForBlockOptimization_2E_element * p = (const GGS_symbolTableForBlockOptimization_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForBlockOptimization_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForBlockOptimization_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_::GGS_symbolTableForBlockOptimization_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_::GGS_symbolTableForBlockOptimization_2E_element_3F_ (const GGS_symbolTableForBlockOptimization_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForBlockOptimization_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForBlockOptimization.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ("symbolTableForBlockOptimization.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForBlockOptimization_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForBlockOptimization_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForBlockOptimization_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  const GGS_symbolTableForBlockOptimization_2E_element_3F_ * p = (const GGS_symbolTableForBlockOptimization_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForBlockOptimization_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element::GGS_symbolTableForClusterOrdering_2E_element (void) :
mProperty_lkey (),
mProperty_mCluster () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element::GGS_symbolTableForClusterOrdering_2E_element (const GGS_symbolTableForClusterOrdering_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mCluster (inSource.mProperty_mCluster) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element & GGS_symbolTableForClusterOrdering_2E_element::operator = (const GGS_symbolTableForClusterOrdering_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mCluster = inSource.mProperty_mCluster ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element GGS_symbolTableForClusterOrdering_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mCluster,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCluster = in_mCluster ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element::GGS_symbolTableForClusterOrdering_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mCluster (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCluster.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCluster.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForClusterOrdering.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCluster.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForClusterOrdering.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ("symbolTableForClusterOrdering.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForClusterOrdering_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForClusterOrdering_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForClusterOrdering_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element GGS_symbolTableForClusterOrdering_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element result ;
  const GGS_symbolTableForClusterOrdering_2E_element * p = (const GGS_symbolTableForClusterOrdering_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForClusterOrdering_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForClusterOrdering_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_::GGS_symbolTableForClusterOrdering_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_::GGS_symbolTableForClusterOrdering_2E_element_3F_ (const GGS_symbolTableForClusterOrdering_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForClusterOrdering_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForClusterOrdering.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ("symbolTableForClusterOrdering.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForClusterOrdering_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForClusterOrdering_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForClusterOrdering_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  const GGS_symbolTableForClusterOrdering_2E_element_3F_ * p = (const GGS_symbolTableForClusterOrdering_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForClusterOrdering_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element::GGS_symbolTableForRelativesResolution_2E_element (void) :
mProperty_lkey (),
mProperty_mLabelAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element::GGS_symbolTableForRelativesResolution_2E_element (const GGS_symbolTableForRelativesResolution_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLabelAddress (inSource.mProperty_mLabelAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element & GGS_symbolTableForRelativesResolution_2E_element::operator = (const GGS_symbolTableForRelativesResolution_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLabelAddress = inSource.mProperty_mLabelAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element GGS_symbolTableForRelativesResolution_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                 const GGS_uint & in_mLabelAddress,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelAddress = in_mLabelAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element::GGS_symbolTableForRelativesResolution_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForRelativesResolution.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForRelativesResolution.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ("symbolTableForRelativesResolution.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForRelativesResolution_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForRelativesResolution_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForRelativesResolution_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element GGS_symbolTableForRelativesResolution_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element result ;
  const GGS_symbolTableForRelativesResolution_2E_element * p = (const GGS_symbolTableForRelativesResolution_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForRelativesResolution_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForRelativesResolution_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_::GGS_symbolTableForRelativesResolution_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_::GGS_symbolTableForRelativesResolution_2E_element_3F_ (const GGS_symbolTableForRelativesResolution_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForRelativesResolution_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForRelativesResolution.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ("symbolTableForRelativesResolution.element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForRelativesResolution_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForRelativesResolution_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForRelativesResolution_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  const GGS_symbolTableForRelativesResolution_2E_element_3F_ * p = (const GGS_symbolTableForRelativesResolution_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForRelativesResolution_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element::GGS_pic_31__38__5F_dataAddressMap_2E_element (void) :
mProperty_lkey (),
mProperty_mDataAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element::GGS_pic_31__38__5F_dataAddressMap_2E_element (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDataAddress (inSource.mProperty_mDataAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element & GGS_pic_31__38__5F_dataAddressMap_2E_element::operator = (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDataAddress = inSource.mProperty_mDataAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element GGS_pic_31__38__5F_dataAddressMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mDataAddress,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDataAddress = in_mDataAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element::GGS_pic_31__38__5F_dataAddressMap_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDataAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDataAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDataAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18_dataAddressMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDataAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18_dataAddressMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element ("pic18_dataAddressMap.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element GGS_pic_31__38__5F_dataAddressMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element result ;
  const GGS_pic_31__38__5F_dataAddressMap_2E_element * p = (const GGS_pic_31__38__5F_dataAddressMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @pic_31__38__5F_dataAddressMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::init_nil (void) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_pic_31__38__5F_dataAddressMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18_dataAddressMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ("pic18_dataAddressMap.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  const GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ * p = (const GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element::GGS_declaredRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element::GGS_declaredRoutineMap_2E_element (const GGS_declaredRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element & GGS_declaredRoutineMap_2E_element::operator = (const GGS_declaredRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element GGS_declaredRoutineMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_luint & in_mRequiredBank,
                                                                                                   const GGS_luint & in_mReturnedBank,
                                                                                                   const GGS_bool & in_mPreservesBank,
                                                                                                   const GGS_bool & in_mIsNoReturn,
                                                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element::GGS_declaredRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_luint & inOperand1,
                                                                      const GGS_luint & inOperand2,
                                                                      const GGS_bool & inOperand3,
                                                                      const GGS_bool & inOperand4,
                                                                      const GGS_pic_31__38_InstructionList & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4),
mProperty_mInstructionList (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declaredRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element ("declaredRoutineMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element GGS_declaredRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element result ;
  const GGS_declaredRoutineMap_2E_element * p = (const GGS_declaredRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @declaredRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_::GGS_declaredRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_::GGS_declaredRoutineMap_2E_element_3F_ (const GGS_declaredRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_declaredRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element_3F_ ("declaredRoutineMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  const GGS_declaredRoutineMap_2E_element_3F_ * p = (const GGS_declaredRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element::GGS_midrange_5F_symbolTable_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element::GGS_midrange_5F_symbolTable_2E_element (const GGS_midrange_5F_symbolTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineAddress (inSource.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element & GGS_midrange_5F_symbolTable_2E_element::operator = (const GGS_midrange_5F_symbolTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineAddress = inSource.mProperty_mRoutineAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element GGS_midrange_5F_symbolTable_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_uint & in_mRoutineAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element::GGS_midrange_5F_symbolTable_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_symbolTable.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ("midrange_symbolTable.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element GGS_midrange_5F_symbolTable_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element result ;
  const GGS_midrange_5F_symbolTable_2E_element * p = (const GGS_midrange_5F_symbolTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @midrange_5F_symbolTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_::GGS_midrange_5F_symbolTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_::GGS_midrange_5F_symbolTable_2E_element_3F_ (const GGS_midrange_5F_symbolTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_ GGS_midrange_5F_symbolTable_2E_element_3F_::init_nil (void) {
  GGS_midrange_5F_symbolTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_midrange_5F_symbolTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ("midrange_symbolTable.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_ GGS_midrange_5F_symbolTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element_3F_ result ;
  const GGS_midrange_5F_symbolTable_2E_element_3F_ * p = (const GGS_midrange_5F_symbolTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element::GGS_midrange_5F_interruptDefinitionList_2E_element (void) :
mProperty_mInterruptLocation (),
mProperty_mInstructionList (),
mProperty_mFirstSaveRegister (),
mProperty_mSecondSaveRegister (),
mProperty_mEndOfInterruptLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element::GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) :
mProperty_mInterruptLocation (inSource.mProperty_mInterruptLocation),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mFirstSaveRegister (inSource.mProperty_mFirstSaveRegister),
mProperty_mSecondSaveRegister (inSource.mProperty_mSecondSaveRegister),
mProperty_mEndOfInterruptLocation (inSource.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element & GGS_midrange_5F_interruptDefinitionList_2E_element::operator = (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) {
  mProperty_mInterruptLocation = inSource.mProperty_mInterruptLocation ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mFirstSaveRegister = inSource.mProperty_mFirstSaveRegister ;
  mProperty_mSecondSaveRegister = inSource.mProperty_mSecondSaveRegister ;
  mProperty_mEndOfInterruptLocation = inSource.mProperty_mEndOfInterruptLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element GGS_midrange_5F_interruptDefinitionList_2E_element::init_21__21__21__21__21_ (const GGS_location & in_mInterruptLocation,
                                                                                                                                 const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                                 const GGS_lstring & in_mFirstSaveRegister,
                                                                                                                                 const GGS_lstring & in_mSecondSaveRegister,
                                                                                                                                 const GGS_location & in_mEndOfInterruptLocation,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptLocation = in_mInterruptLocation ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mFirstSaveRegister = in_mFirstSaveRegister ;
  result.mProperty_mSecondSaveRegister = in_mSecondSaveRegister ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element::GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_location & inOperand0,
                                                                                                        const GGS_midrange_5F_instructionList & inOperand1,
                                                                                                        const GGS_lstring & inOperand2,
                                                                                                        const GGS_lstring & inOperand3,
                                                                                                        const GGS_location & inOperand4) :
mProperty_mInterruptLocation (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mFirstSaveRegister (inOperand2),
mProperty_mSecondSaveRegister (inOperand3),
mProperty_mEndOfInterruptLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_interruptDefinitionList_2E_element::isValid (void) const {
  return mProperty_mInterruptLocation.isValid () && mProperty_mInstructionList.isValid () && mProperty_mFirstSaveRegister.isValid () && mProperty_mSecondSaveRegister.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList_2E_element::drop (void) {
  mProperty_mInterruptLocation.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mFirstSaveRegister.drop () ;
  mProperty_mSecondSaveRegister.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_interruptDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInterruptLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstSaveRegister.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSecondSaveRegister.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_interruptDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ("midrange_interruptDefinitionList.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_interruptDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_interruptDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_interruptDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element GGS_midrange_5F_interruptDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList_2E_element result ;
  const GGS_midrange_5F_interruptDefinitionList_2E_element * p = (const GGS_midrange_5F_interruptDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_interruptDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element::GGS_midrange_5F_routineDefinitionList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mPage (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element::GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mPage (inSource.mProperty_mPage),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineLocation (inSource.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element & GGS_midrange_5F_routineDefinitionList_2E_element::operator = (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mPage = inSource.mProperty_mPage ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineLocation = inSource.mProperty_mEndOfRoutineLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element GGS_midrange_5F_routineDefinitionList_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                                                         const GGS_luint & in_mPage,
                                                                                                                                         const GGS_luint & in_mRequiredBank,
                                                                                                                                         const GGS_luint & in_mReturnedBank,
                                                                                                                                         const GGS_bool & in_mPreservesBank,
                                                                                                                                         const GGS_bool & in_mIsNoReturn,
                                                                                                                                         const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                                         const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element::GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_luint & inOperand1,
                                                                                                    const GGS_luint & inOperand2,
                                                                                                    const GGS_luint & inOperand3,
                                                                                                    const GGS_bool & inOperand4,
                                                                                                    const GGS_bool & inOperand5,
                                                                                                    const GGS_midrange_5F_instructionList & inOperand6,
                                                                                                    const GGS_location & inOperand7) :
mProperty_mRoutineName (inOperand0),
mProperty_mPage (inOperand1),
mProperty_mRequiredBank (inOperand2),
mProperty_mReturnedBank (inOperand3),
mProperty_mPreservesBank (inOperand4),
mProperty_mIsNoReturn (inOperand5),
mProperty_mInstructionList (inOperand6),
mProperty_mEndOfRoutineLocation (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_routineDefinitionList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mPage.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_routineDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_routineDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ("midrange_routineDefinitionList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_routineDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_routineDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_routineDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element GGS_midrange_5F_routineDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList_2E_element result ;
  const GGS_midrange_5F_routineDefinitionList_2E_element * p = (const GGS_midrange_5F_routineDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_routineDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element::GGS_declaredByteMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element::GGS_declaredByteMap_2E_element (const GGS_declaredByteMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element & GGS_declaredByteMap_2E_element::operator = (const GGS_declaredByteMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declaredByteMap_2E_element GGS_declaredByteMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element::GGS_declaredByteMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declaredByteMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredByteMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element ("declaredByteMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredByteMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredByteMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredByteMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element GGS_declaredByteMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element result ;
  const GGS_declaredByteMap_2E_element * p = (const GGS_declaredByteMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredByteMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @declaredByteMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_::GGS_declaredByteMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_::GGS_declaredByteMap_2E_element_3F_ (const GGS_declaredByteMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap_2E_element_3F_::init_nil (void) {
  GGS_declaredByteMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_declaredByteMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredByteMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ("declaredByteMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredByteMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredByteMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredByteMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element_3F_ result ;
  const GGS_declaredByteMap_2E_element_3F_ * p = (const GGS_declaredByteMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredByteMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element::GGS_registerTable_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddressList (),
mProperty_mSize (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element::GGS_registerTable_2E_element (const GGS_registerTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterAddressList (inSource.mProperty_mRegisterAddressList),
mProperty_mSize (inSource.mProperty_mSize),
mProperty_mBitSliceTable (inSource.mProperty_mBitSliceTable),
mProperty_mBitDefinitionString (inSource.mProperty_mBitDefinitionString),
mProperty_mProtection (inSource.mProperty_mProtection) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element & GGS_registerTable_2E_element::operator = (const GGS_registerTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterAddressList = inSource.mProperty_mRegisterAddressList ;
  mProperty_mSize = inSource.mProperty_mSize ;
  mProperty_mBitSliceTable = inSource.mProperty_mBitSliceTable ;
  mProperty_mBitDefinitionString = inSource.mProperty_mBitDefinitionString ;
  mProperty_mProtection = inSource.mProperty_mProtection ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerTable_2E_element GGS_registerTable_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_uintlist & in_mRegisterAddressList,
                                                                                         const GGS_uint & in_mSize,
                                                                                         const GGS_bitSliceTable & in_mBitSliceTable,
                                                                                         const GGS_string & in_mBitDefinitionString,
                                                                                         const GGS_registerProtection & in_mProtection,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddressList = in_mRegisterAddressList ;
  result.mProperty_mSize = in_mSize ;
  result.mProperty_mBitSliceTable = in_mBitSliceTable ;
  result.mProperty_mBitDefinitionString = in_mBitDefinitionString ;
  result.mProperty_mProtection = in_mProtection ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element::GGS_registerTable_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uintlist & inOperand1,
                                                            const GGS_uint & inOperand2,
                                                            const GGS_bitSliceTable & inOperand3,
                                                            const GGS_string & inOperand4,
                                                            const GGS_registerProtection & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddressList (inOperand1),
mProperty_mSize (inOperand2),
mProperty_mBitSliceTable (inOperand3),
mProperty_mBitDefinitionString (inOperand4),
mProperty_mProtection (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddressList.isValid () && mProperty_mSize.isValid () && mProperty_mBitSliceTable.isValid () && mProperty_mBitDefinitionString.isValid () && mProperty_mProtection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddressList.drop () ;
  mProperty_mSize.drop () ;
  mProperty_mBitSliceTable.drop () ;
  mProperty_mBitDefinitionString.drop () ;
  mProperty_mProtection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerTable.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddressList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSize.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitSliceTable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitDefinitionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProtection.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @registerTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element ("registerTable.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element GGS_registerTable_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_registerTable_2E_element result ;
  const GGS_registerTable_2E_element * p = (const GGS_registerTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @registerTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_::GGS_registerTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_::GGS_registerTable_2E_element_3F_ (const GGS_registerTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable_2E_element_3F_::init_nil (void) {
  GGS_registerTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @registerTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ("registerTable.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_registerTable_2E_element_3F_ result ;
  const GGS_registerTable_2E_element_3F_ * p = (const GGS_registerTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element::GGS_ramBankTable_2E_element (void) :
mProperty_lkey (),
mProperty_mFirstAddress (),
mProperty_mFirstFreeAddress (),
mProperty_mLastAddressPlusOne (),
mProperty_mMirrorOffsetList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element::GGS_ramBankTable_2E_element (const GGS_ramBankTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFirstAddress (inSource.mProperty_mFirstAddress),
mProperty_mFirstFreeAddress (inSource.mProperty_mFirstFreeAddress),
mProperty_mLastAddressPlusOne (inSource.mProperty_mLastAddressPlusOne),
mProperty_mMirrorOffsetList (inSource.mProperty_mMirrorOffsetList) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element & GGS_ramBankTable_2E_element::operator = (const GGS_ramBankTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFirstAddress = inSource.mProperty_mFirstAddress ;
  mProperty_mFirstFreeAddress = inSource.mProperty_mFirstFreeAddress ;
  mProperty_mLastAddressPlusOne = inSource.mProperty_mLastAddressPlusOne ;
  mProperty_mMirrorOffsetList = inSource.mProperty_mMirrorOffsetList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ramBankTable_2E_element GGS_ramBankTable_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mFirstAddress,
                                                                                   const GGS_uint & in_mFirstFreeAddress,
                                                                                   const GGS_uint & in_mLastAddressPlusOne,
                                                                                   const GGS_uintlist & in_mMirrorOffsetList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFirstAddress = in_mFirstAddress ;
  result.mProperty_mFirstFreeAddress = in_mFirstFreeAddress ;
  result.mProperty_mLastAddressPlusOne = in_mLastAddressPlusOne ;
  result.mProperty_mMirrorOffsetList = in_mMirrorOffsetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element::GGS_ramBankTable_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_uint & inOperand1,
                                                          const GGS_uint & inOperand2,
                                                          const GGS_uint & inOperand3,
                                                          const GGS_uintlist & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mFirstAddress (inOperand1),
mProperty_mFirstFreeAddress (inOperand2),
mProperty_mLastAddressPlusOne (inOperand3),
mProperty_mMirrorOffsetList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFirstAddress.isValid () && mProperty_mFirstFreeAddress.isValid () && mProperty_mLastAddressPlusOne.isValid () && mProperty_mMirrorOffsetList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFirstAddress.drop () ;
  mProperty_mFirstFreeAddress.drop () ;
  mProperty_mLastAddressPlusOne.drop () ;
  mProperty_mMirrorOffsetList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ramBankTable.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFirstFreeAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLastAddressPlusOne.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMirrorOffsetList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ramBankTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element ("ramBankTable.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramBankTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramBankTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramBankTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element GGS_ramBankTable_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element result ;
  const GGS_ramBankTable_2E_element * p = (const GGS_ramBankTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramBankTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ramBankTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_::GGS_ramBankTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_::GGS_ramBankTable_2E_element_3F_ (const GGS_ramBankTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable_2E_element_3F_::init_nil (void) {
  GGS_ramBankTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ramBankTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ramBankTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ("ramBankTable.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramBankTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramBankTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramBankTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element_3F_ result ;
  const GGS_ramBankTable_2E_element_3F_ * p = (const GGS_ramBankTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramBankTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element::GGS_illegalMaskList_2E_element (void) :
mProperty_mIllegalValue (),
mProperty_mIllegalMask (),
mProperty_mDescription () {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element::GGS_illegalMaskList_2E_element (const GGS_illegalMaskList_2E_element & inSource) :
mProperty_mIllegalValue (inSource.mProperty_mIllegalValue),
mProperty_mIllegalMask (inSource.mProperty_mIllegalMask),
mProperty_mDescription (inSource.mProperty_mDescription) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element & GGS_illegalMaskList_2E_element::operator = (const GGS_illegalMaskList_2E_element & inSource) {
  mProperty_mIllegalValue = inSource.mProperty_mIllegalValue ;
  mProperty_mIllegalMask = inSource.mProperty_mIllegalMask ;
  mProperty_mDescription = inSource.mProperty_mDescription ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_illegalMaskList_2E_element GGS_illegalMaskList_2E_element::init_21__21__21_ (const GGS_luint & in_mIllegalValue,
                                                                                 const GGS_luint & in_mIllegalMask,
                                                                                 const GGS_lstring & in_mDescription,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_illegalMaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIllegalValue = in_mIllegalValue ;
  result.mProperty_mIllegalMask = in_mIllegalMask ;
  result.mProperty_mDescription = in_mDescription ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element::GGS_illegalMaskList_2E_element (const GGS_luint & inOperand0,
                                                                const GGS_luint & inOperand1,
                                                                const GGS_lstring & inOperand2) :
mProperty_mIllegalValue (inOperand0),
mProperty_mIllegalMask (inOperand1),
mProperty_mDescription (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_illegalMaskList_2E_element::isValid (void) const {
  return mProperty_mIllegalValue.isValid () && mProperty_mIllegalMask.isValid () && mProperty_mDescription.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList_2E_element::drop (void) {
  mProperty_mIllegalValue.drop () ;
  mProperty_mIllegalMask.drop () ;
  mProperty_mDescription.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @illegalMaskList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIllegalValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIllegalMask.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @illegalMaskList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList_2E_element ("illegalMaskList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_illegalMaskList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_illegalMaskList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_illegalMaskList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element GGS_illegalMaskList_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_illegalMaskList_2E_element result ;
  const GGS_illegalMaskList_2E_element * p = (const GGS_illegalMaskList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_illegalMaskList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element::GGS_fieldSettingMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue (),
mProperty_mMask () {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element::GGS_fieldSettingMap_2E_element (const GGS_fieldSettingMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue),
mProperty_mMask (inSource.mProperty_mMask) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element & GGS_fieldSettingMap_2E_element::operator = (const GGS_fieldSettingMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  mProperty_mMask = inSource.mProperty_mMask ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fieldSettingMap_2E_element GGS_fieldSettingMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_uint & in_mValue,
                                                                                 const GGS_uint & in_mMask,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  result.mProperty_mMask = in_mMask ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element::GGS_fieldSettingMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1,
                                                                const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1),
mProperty_mMask (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () && mProperty_mMask.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
  mProperty_mMask.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fieldSettingMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMask.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fieldSettingMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ("fieldSettingMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fieldSettingMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fieldSettingMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fieldSettingMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element GGS_fieldSettingMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element result ;
  const GGS_fieldSettingMap_2E_element * p = (const GGS_fieldSettingMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fieldSettingMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fieldSettingMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_::GGS_fieldSettingMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_::GGS_fieldSettingMap_2E_element_3F_ (const GGS_fieldSettingMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_ GGS_fieldSettingMap_2E_element_3F_::init_nil (void) {
  GGS_fieldSettingMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fieldSettingMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fieldSettingMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ("fieldSettingMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fieldSettingMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fieldSettingMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fieldSettingMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_ GGS_fieldSettingMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element_3F_ result ;
  const GGS_fieldSettingMap_2E_element_3F_ * p = (const GGS_fieldSettingMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fieldSettingMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element::GGS_configRegisterMaskMap_2E_element (void) :
mProperty_lkey (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element::GGS_configRegisterMaskMap_2E_element (const GGS_configRegisterMaskMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mMaskValue (inSource.mProperty_mMaskValue),
mProperty_mDescription (inSource.mProperty_mDescription),
mProperty_mFieldSettingMap (inSource.mProperty_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element & GGS_configRegisterMaskMap_2E_element::operator = (const GGS_configRegisterMaskMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mMaskValue = inSource.mProperty_mMaskValue ;
  mProperty_mDescription = inSource.mProperty_mDescription ;
  mProperty_mFieldSettingMap = inSource.mProperty_mFieldSettingMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element GGS_configRegisterMaskMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_luint & in_mMaskValue,
                                                                                                 const GGS_lstring & in_mDescription,
                                                                                                 const GGS_fieldSettingMap & in_mFieldSettingMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element::GGS_configRegisterMaskMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_luint & inOperand1,
                                                                            const GGS_lstring & inOperand2,
                                                                            const GGS_fieldSettingMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mMaskValue (inOperand1),
mProperty_mDescription (inOperand2),
mProperty_mFieldSettingMap (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configRegisterMaskMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMaskValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDescription.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldSettingMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configRegisterMaskMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ("configRegisterMaskMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMaskMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMaskMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMaskMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element GGS_configRegisterMaskMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element result ;
  const GGS_configRegisterMaskMap_2E_element * p = (const GGS_configRegisterMaskMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMaskMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @configRegisterMaskMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_::GGS_configRegisterMaskMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_::GGS_configRegisterMaskMap_2E_element_3F_ (const GGS_configRegisterMaskMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap_2E_element_3F_::init_nil (void) {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_configRegisterMaskMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configRegisterMaskMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ("configRegisterMaskMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMaskMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMaskMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMaskMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  const GGS_configRegisterMaskMap_2E_element_3F_ * p = (const GGS_configRegisterMaskMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMaskMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element::GGS_configRegisterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterWidth (),
mProperty_mConfigRegisterMaskMap (),
mProperty_mIllegalMaskList () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element::GGS_configRegisterMap_2E_element (const GGS_configRegisterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress),
mProperty_mRegisterWidth (inSource.mProperty_mRegisterWidth),
mProperty_mConfigRegisterMaskMap (inSource.mProperty_mConfigRegisterMaskMap),
mProperty_mIllegalMaskList (inSource.mProperty_mIllegalMaskList) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element & GGS_configRegisterMap_2E_element::operator = (const GGS_configRegisterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  mProperty_mRegisterWidth = inSource.mProperty_mRegisterWidth ;
  mProperty_mConfigRegisterMaskMap = inSource.mProperty_mConfigRegisterMaskMap ;
  mProperty_mIllegalMaskList = inSource.mProperty_mIllegalMaskList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configRegisterMap_2E_element GGS_configRegisterMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_luint & in_mRegisterAddress,
                                                                                             const GGS_luint & in_mRegisterWidth,
                                                                                             const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                                                             const GGS_illegalMaskList & in_mIllegalMaskList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterWidth = in_mRegisterWidth ;
  result.mProperty_mConfigRegisterMaskMap = in_mConfigRegisterMaskMap ;
  result.mProperty_mIllegalMaskList = in_mIllegalMaskList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element::GGS_configRegisterMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_luint & inOperand1,
                                                                    const GGS_luint & inOperand2,
                                                                    const GGS_configRegisterMaskMap & inOperand3,
                                                                    const GGS_illegalMaskList & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterWidth (inOperand2),
mProperty_mConfigRegisterMaskMap (inOperand3),
mProperty_mIllegalMaskList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterWidth.isValid () && mProperty_mConfigRegisterMaskMap.isValid () && mProperty_mIllegalMaskList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterWidth.drop () ;
  mProperty_mConfigRegisterMaskMap.drop () ;
  mProperty_mIllegalMaskList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configRegisterMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterWidth.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigRegisterMaskMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIllegalMaskList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configRegisterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element ("configRegisterMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element GGS_configRegisterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element result ;
  const GGS_configRegisterMap_2E_element * p = (const GGS_configRegisterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @configRegisterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_::GGS_configRegisterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_::GGS_configRegisterMap_2E_element_3F_ (const GGS_configRegisterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap_2E_element_3F_::init_nil (void) {
  GGS_configRegisterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_configRegisterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configRegisterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ("configRegisterMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element_3F_ result ;
  const GGS_configRegisterMap_2E_element_3F_ * p = (const GGS_configRegisterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineAddress (inSource.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineAddress = inSource.mProperty_mRoutineAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                         const GGS_uint & in_mRoutineAddress,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_lstring & inOperand0,
                                                                                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_symbolTableForConvertingRelatives.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTableForConvertingRelatives.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ("midrange_symbolTableForConvertingRelatives.element",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element result ;
  const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element * p = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::init_nil (void) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTableForConvertingRelatives.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ("midrange_symbolTableForConvertingRelatives.element?",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ result ;
  const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ * p = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (void) :
mProperty_lkey (),
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (const GGS_blockMapForStackComputation_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mBlock (inSource.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element & GGS_blockMapForStackComputation_2E_element::operator = (const GGS_blockMapForStackComputation_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mBlock = inSource.mProperty_mBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_ipic_31__38_Block & in_mBlock,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_ipic_31__38_Block & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mBlock (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockMapForStackComputation.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ("blockMapForStackComputation.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  const GGS_blockMapForStackComputation_2E_element * p = (const GGS_blockMapForStackComputation_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockMapForStackComputation_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_::GGS_blockMapForStackComputation_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_::GGS_blockMapForStackComputation_2E_element_3F_ (const GGS_blockMapForStackComputation_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation_2E_element_3F_::init_nil (void) {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockMapForStackComputation_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ("blockMapForStackComputation.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  const GGS_blockMapForStackComputation_2E_element_3F_ * p = (const GGS_blockMapForStackComputation_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element::GGS_routineCallMap_2E_element (void) :
mProperty_lkey (),
mProperty_mCalledRoutineSet (),
mProperty_mTerminatorStackNeeds () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element::GGS_routineCallMap_2E_element (const GGS_routineCallMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mCalledRoutineSet (inSource.mProperty_mCalledRoutineSet),
mProperty_mTerminatorStackNeeds (inSource.mProperty_mTerminatorStackNeeds) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element & GGS_routineCallMap_2E_element::operator = (const GGS_routineCallMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mCalledRoutineSet = inSource.mProperty_mCalledRoutineSet ;
  mProperty_mTerminatorStackNeeds = inSource.mProperty_mTerminatorStackNeeds ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineCallMap_2E_element GGS_routineCallMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_stringset & in_mCalledRoutineSet,
                                                                               const GGS_uint & in_mTerminatorStackNeeds,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCalledRoutineSet = in_mCalledRoutineSet ;
  result.mProperty_mTerminatorStackNeeds = in_mTerminatorStackNeeds ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element::GGS_routineCallMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_stringset & inOperand1,
                                                              const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCalledRoutineSet (inOperand1),
mProperty_mTerminatorStackNeeds (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCalledRoutineSet.isValid () && mProperty_mTerminatorStackNeeds.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCalledRoutineSet.drop () ;
  mProperty_mTerminatorStackNeeds.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineCallMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCalledRoutineSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminatorStackNeeds.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineCallMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element ("routineCallMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineCallMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineCallMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineCallMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element GGS_routineCallMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element result ;
  const GGS_routineCallMap_2E_element * p = (const GGS_routineCallMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineCallMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineCallMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_::GGS_routineCallMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_::GGS_routineCallMap_2E_element_3F_ (const GGS_routineCallMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap_2E_element_3F_::init_nil (void) {
  GGS_routineCallMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineCallMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineCallMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ("routineCallMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineCallMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineCallMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineCallMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element_3F_ result ;
  const GGS_routineCallMap_2E_element_3F_ * p = (const GGS_routineCallMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineCallMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element::GGS_routineStackRequirementMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLevels () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element::GGS_routineStackRequirementMap_2E_element (const GGS_routineStackRequirementMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLevels (inSource.mProperty_mLevels) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element & GGS_routineStackRequirementMap_2E_element::operator = (const GGS_routineStackRequirementMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLevels = inSource.mProperty_mLevels ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element GGS_routineStackRequirementMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_uint & in_mLevels,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLevels = in_mLevels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element::GGS_routineStackRequirementMap_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLevels (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLevels.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLevels.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineStackRequirementMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLevels.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineStackRequirementMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ("routineStackRequirementMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineStackRequirementMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineStackRequirementMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineStackRequirementMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element GGS_routineStackRequirementMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element result ;
  const GGS_routineStackRequirementMap_2E_element * p = (const GGS_routineStackRequirementMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineStackRequirementMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineStackRequirementMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_::GGS_routineStackRequirementMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_::GGS_routineStackRequirementMap_2E_element_3F_ (const GGS_routineStackRequirementMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap_2E_element_3F_::init_nil (void) {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineStackRequirementMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineStackRequirementMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ("routineStackRequirementMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineStackRequirementMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineStackRequirementMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineStackRequirementMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  const GGS_routineStackRequirementMap_2E_element_3F_ * p = (const GGS_routineStackRequirementMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineStackRequirementMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element::GGS_generatedCodeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mCode (),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element::GGS_generatedCodeMap_2E_element (const GGS_generatedCodeMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mCode (inSource.mProperty_mCode),
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element & GGS_generatedCodeMap_2E_element::operator = (const GGS_generatedCodeMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mCode = inSource.mProperty_mCode ;
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generatedCodeMap_2E_element GGS_generatedCodeMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_codeList & in_mCode,
                                                                                   const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCode = in_mCode ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element::GGS_generatedCodeMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_codeList & inOperand1,
                                                                  const GGS_ipic_31__38_SequentialInstruction & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCode (inOperand1),
mProperty_mInstruction (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCode.isValid () && mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCode.drop () ;
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generatedCodeMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generatedCodeMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ("generatedCodeMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generatedCodeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generatedCodeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generatedCodeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element GGS_generatedCodeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element result ;
  const GGS_generatedCodeMap_2E_element * p = (const GGS_generatedCodeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generatedCodeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @generatedCodeMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_::GGS_generatedCodeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_::GGS_generatedCodeMap_2E_element_3F_ (const GGS_generatedCodeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap_2E_element_3F_::init_nil (void) {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_generatedCodeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generatedCodeMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ("generatedCodeMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generatedCodeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generatedCodeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generatedCodeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  const GGS_generatedCodeMap_2E_element_3F_ * p = (const GGS_generatedCodeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generatedCodeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element::GGS_baselineSymbolTableForOptimizations_2E_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element::GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDefinitionLineIndex (inSource.mProperty_mDefinitionLineIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element & GGS_baselineSymbolTableForOptimizations_2E_element::operator = (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDefinitionLineIndex = inSource.mProperty_mDefinitionLineIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element GGS_baselineSymbolTableForOptimizations_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                     const GGS_uint & in_mDefinitionLineIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element::GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_lstring & inOperand0,
                                                                                                        const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baselineSymbolTableForOptimizations.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baselineSymbolTableForOptimizations.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ("baselineSymbolTableForOptimizations.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineSymbolTableForOptimizations_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineSymbolTableForOptimizations_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineSymbolTableForOptimizations_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element GGS_baselineSymbolTableForOptimizations_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element result ;
  const GGS_baselineSymbolTableForOptimizations_2E_element * p = (const GGS_baselineSymbolTableForOptimizations_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineSymbolTableForOptimizations_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baselineSymbolTableForOptimizations_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_::GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_::GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_ GGS_baselineSymbolTableForOptimizations_2E_element_3F_::init_nil (void) {
  GGS_baselineSymbolTableForOptimizations_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baselineSymbolTableForOptimizations_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baselineSymbolTableForOptimizations.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element_3F_ ("baselineSymbolTableForOptimizations.element?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineSymbolTableForOptimizations_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineSymbolTableForOptimizations_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_ GGS_baselineSymbolTableForOptimizations_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element_3F_ result ;
  const GGS_baselineSymbolTableForOptimizations_2E_element_3F_ * p = (const GGS_baselineSymbolTableForOptimizations_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineSymbolTableForOptimizations_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element::GGS_baselineRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element::GGS_baselineRoutineMap_2E_element (const GGS_baselineRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mPage (inSource.mProperty_mPage) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element & GGS_baselineRoutineMap_2E_element::operator = (const GGS_baselineRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mPage = inSource.mProperty_mPage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element GGS_baselineRoutineMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_bool & in_mIsNoReturn,
                                                                                       const GGS_luint & in_mPage,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mPage = in_mPage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element::GGS_baselineRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_luint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mPage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mPage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mPage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baselineRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baselineRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element ("baselineRoutineMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element GGS_baselineRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element result ;
  const GGS_baselineRoutineMap_2E_element * p = (const GGS_baselineRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baselineRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_::GGS_baselineRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_::GGS_baselineRoutineMap_2E_element_3F_ (const GGS_baselineRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_ GGS_baselineRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_baselineRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baselineRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baselineRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element_3F_ ("baselineRoutineMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_ GGS_baselineRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element_3F_ result ;
  const GGS_baselineRoutineMap_2E_element_3F_ * p = (const GGS_baselineRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element::GGS_baseline_5F_declaredRoutineMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element::GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element & GGS_baseline_5F_declaredRoutineMap_2E_element::operator = (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element GGS_baseline_5F_declaredRoutineMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element::GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_declaredRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_declaredRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element ("baseline_declaredRoutineMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_declaredRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_declaredRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_declaredRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element GGS_baseline_5F_declaredRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element result ;
  const GGS_baseline_5F_declaredRoutineMap_2E_element * p = (const GGS_baseline_5F_declaredRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_declaredRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baseline_5F_declaredRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baseline_5F_declaredRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_declaredRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element_3F_ ("baseline_declaredRoutineMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ result ;
  const GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ * p = (const GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element::GGS_caseConstantMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element::GGS_caseConstantMap_2E_element (const GGS_caseConstantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element & GGS_caseConstantMap_2E_element::operator = (const GGS_caseConstantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_caseConstantMap_2E_element GGS_caseConstantMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element::GGS_caseConstantMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @caseConstantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @caseConstantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element ("caseConstantMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_caseConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_caseConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_caseConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element GGS_caseConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element result ;
  const GGS_caseConstantMap_2E_element * p = (const GGS_caseConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_caseConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @caseConstantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_::GGS_caseConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_::GGS_caseConstantMap_2E_element_3F_ (const GGS_caseConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_ GGS_caseConstantMap_2E_element_3F_::init_nil (void) {
  GGS_caseConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_caseConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @caseConstantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element_3F_ ("caseConstantMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_caseConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_caseConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_caseConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_ GGS_caseConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element_3F_ result ;
  const GGS_caseConstantMap_2E_element_3F_ * p = (const GGS_caseConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_caseConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element::GGS_baseline_5F_routineDefinitionList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mPage (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element::GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mPage (inSource.mProperty_mPage),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineLocation (inSource.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element & GGS_baseline_5F_routineDefinitionList_2E_element::operator = (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mPage = inSource.mProperty_mPage ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineLocation = inSource.mProperty_mEndOfRoutineLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element GGS_baseline_5F_routineDefinitionList_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                                             const GGS_luint & in_mPage,
                                                                                                                             const GGS_bool & in_mIsNoReturn,
                                                                                                                             const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                             const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element::GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_luint & inOperand1,
                                                                                                    const GGS_bool & inOperand2,
                                                                                                    const GGS_baseline_5F_instructionList & inOperand3,
                                                                                                    const GGS_location & inOperand4) :
mProperty_mRoutineName (inOperand0),
mProperty_mPage (inOperand1),
mProperty_mIsNoReturn (inOperand2),
mProperty_mInstructionList (inOperand3),
mProperty_mEndOfRoutineLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_routineDefinitionList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mPage.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_routineDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_routineDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2E_element ("baseline_routineDefinitionList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_routineDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_routineDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_routineDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element GGS_baseline_5F_routineDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList_2E_element result ;
  const GGS_baseline_5F_routineDefinitionList_2E_element * p = (const GGS_baseline_5F_routineDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_routineDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element::GGS_bootloaderReservedRAMmap_2E_element (void) :
mProperty_lkey (),
mProperty_mReservedSize () {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element::GGS_bootloaderReservedRAMmap_2E_element (const GGS_bootloaderReservedRAMmap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mReservedSize (inSource.mProperty_mReservedSize) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element & GGS_bootloaderReservedRAMmap_2E_element::operator = (const GGS_bootloaderReservedRAMmap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mReservedSize = inSource.mProperty_mReservedSize ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element GGS_bootloaderReservedRAMmap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_luint & in_mReservedSize,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReservedSize = in_mReservedSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element::GGS_bootloaderReservedRAMmap_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_luint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mReservedSize (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReservedSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReservedSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bootloaderReservedRAMmap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReservedSize.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bootloaderReservedRAMmap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ("bootloaderReservedRAMmap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bootloaderReservedRAMmap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bootloaderReservedRAMmap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bootloaderReservedRAMmap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element GGS_bootloaderReservedRAMmap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element result ;
  const GGS_bootloaderReservedRAMmap_2E_element * p = (const GGS_bootloaderReservedRAMmap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bootloaderReservedRAMmap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @bootloaderReservedRAMmap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_::GGS_bootloaderReservedRAMmap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_::GGS_bootloaderReservedRAMmap_2E_element_3F_ (const GGS_bootloaderReservedRAMmap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_ GGS_bootloaderReservedRAMmap_2E_element_3F_::init_nil (void) {
  GGS_bootloaderReservedRAMmap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bootloaderReservedRAMmap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bootloaderReservedRAMmap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ("bootloaderReservedRAMmap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bootloaderReservedRAMmap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bootloaderReservedRAMmap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bootloaderReservedRAMmap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_ GGS_bootloaderReservedRAMmap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element_3F_ result ;
  const GGS_bootloaderReservedRAMmap_2E_element_3F_ * p = (const GGS_bootloaderReservedRAMmap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bootloaderReservedRAMmap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element::GGS_pic_31__38_BlockInstructionBlockList_2E_element (void) :
mProperty_mBlockName (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element::GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) :
mProperty_mBlockName (inSource.mProperty_mBlockName),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (inSource.mProperty_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (inSource.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element & GGS_pic_31__38_BlockInstructionBlockList_2E_element::operator = (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) {
  mProperty_mBlockName = inSource.mProperty_mBlockName ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mBlockTerminaisonForBlockInstruction = inSource.mProperty_mBlockTerminaisonForBlockInstruction ;
  mProperty_mEndOfBlock = inSource.mProperty_mEndOfBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element GGS_pic_31__38_BlockInstructionBlockList_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mBlockName,
                                                                                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                               const GGS_location & in_mEndOfBlock,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockName = in_mBlockName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element::GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                                          const GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                          const GGS_location & inOperand3) :
mProperty_mBlockName (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_BlockInstructionBlockList_2E_element::isValid (void) const {
  return mProperty_mBlockName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList_2E_element::drop (void) {
  mProperty_mBlockName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18BlockInstructionBlockList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlockName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18BlockInstructionBlockList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ("pic18BlockInstructionBlockList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BlockInstructionBlockList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BlockInstructionBlockList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BlockInstructionBlockList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element GGS_pic_31__38_BlockInstructionBlockList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList_2E_element result ;
  const GGS_pic_31__38_BlockInstructionBlockList_2E_element * p = (const GGS_pic_31__38_BlockInstructionBlockList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BlockInstructionBlockList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element::GGS_pic_31__38_InterruptDefinitionList_2E_element (void) :
mProperty_mInterruptName (),
mProperty_mFastReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfInterruptLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element::GGS_pic_31__38_InterruptDefinitionList_2E_element (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inSource) :
mProperty_mInterruptName (inSource.mProperty_mInterruptName),
mProperty_mFastReturn (inSource.mProperty_mFastReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInterruptLocation (inSource.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element & GGS_pic_31__38_InterruptDefinitionList_2E_element::operator = (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inSource) {
  mProperty_mInterruptName = inSource.mProperty_mInterruptName ;
  mProperty_mFastReturn = inSource.mProperty_mFastReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInterruptLocation = inSource.mProperty_mEndOfInterruptLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element GGS_pic_31__38_InterruptDefinitionList_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mInterruptName,
                                                                                                                           const GGS_bool & in_mFastReturn,
                                                                                                                           const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                           const GGS_location & in_mEndOfInterruptLocation,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mFastReturn = in_mFastReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element::GGS_pic_31__38_InterruptDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                      const GGS_bool & inOperand1,
                                                                                                      const GGS_pic_31__38_InstructionList & inOperand2,
                                                                                                      const GGS_location & inOperand3) :
mProperty_mInterruptName (inOperand0),
mProperty_mFastReturn (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mEndOfInterruptLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_InterruptDefinitionList_2E_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mFastReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList_2E_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mFastReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18InterruptDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFastReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInterruptLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18InterruptDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2E_element ("pic18InterruptDefinitionList.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InterruptDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InterruptDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InterruptDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element GGS_pic_31__38_InterruptDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList_2E_element result ;
  const GGS_pic_31__38_InterruptDefinitionList_2E_element * p = (const GGS_pic_31__38_InterruptDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InterruptDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element::GGS_pic_31__38_RoutineDefinitionList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element::GGS_pic_31__38_RoutineDefinitionList_2E_element (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineLocation (inSource.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element & GGS_pic_31__38_RoutineDefinitionList_2E_element::operator = (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineLocation = inSource.mProperty_mEndOfRoutineLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element GGS_pic_31__38_RoutineDefinitionList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                                                   const GGS_luint & in_mRequiredBank,
                                                                                                                                   const GGS_luint & in_mReturnedBank,
                                                                                                                                   const GGS_bool & in_mPreservesBank,
                                                                                                                                   const GGS_bool & in_mIsNoReturn,
                                                                                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                   const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element::GGS_pic_31__38_RoutineDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_luint & inOperand1,
                                                                                                  const GGS_luint & inOperand2,
                                                                                                  const GGS_bool & inOperand3,
                                                                                                  const GGS_bool & inOperand4,
                                                                                                  const GGS_pic_31__38_InstructionList & inOperand5,
                                                                                                  const GGS_location & inOperand6) :
mProperty_mRoutineName (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4),
mProperty_mInstructionList (inOperand5),
mProperty_mEndOfRoutineLocation (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_RoutineDefinitionList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18RoutineDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18RoutineDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2E_element ("pic18RoutineDefinitionList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RoutineDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RoutineDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RoutineDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element GGS_pic_31__38_RoutineDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList_2E_element result ;
  const GGS_pic_31__38_RoutineDefinitionList_2E_element * p = (const GGS_pic_31__38_RoutineDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RoutineDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element::GGS_pic_31__38_MacroDefinitionList_2E_element (void) :
mProperty_mMacroName (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element::GGS_pic_31__38_MacroDefinitionList_2E_element (const GGS_pic_31__38_MacroDefinitionList_2E_element & inSource) :
mProperty_mMacroName (inSource.mProperty_mMacroName),
mProperty_mConstantNameList (inSource.mProperty_mConstantNameList),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element & GGS_pic_31__38_MacroDefinitionList_2E_element::operator = (const GGS_pic_31__38_MacroDefinitionList_2E_element & inSource) {
  mProperty_mMacroName = inSource.mProperty_mMacroName ;
  mProperty_mConstantNameList = inSource.mProperty_mConstantNameList ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element GGS_pic_31__38_MacroDefinitionList_2E_element::init_21__21__21_ (const GGS_lstring & in_mMacroName,
                                                                                                               const GGS_lstringlist & in_mConstantNameList,
                                                                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMacroName = in_mMacroName ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element::GGS_pic_31__38_MacroDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_lstringlist & inOperand1,
                                                                                              const GGS_pic_31__38_InstructionList & inOperand2) :
mProperty_mMacroName (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroDefinitionList_2E_element::isValid (void) const {
  return mProperty_mMacroName.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList_2E_element::drop (void) {
  mProperty_mMacroName.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18MacroDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mMacroName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18MacroDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2E_element ("pic18MacroDefinitionList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element GGS_pic_31__38_MacroDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList_2E_element result ;
  const GGS_pic_31__38_MacroDefinitionList_2E_element * p = (const GGS_pic_31__38_MacroDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element::GGS_pic_31__38_MacroMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element::GGS_pic_31__38_MacroMap_2E_element (const GGS_pic_31__38_MacroMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConstantNameList (inSource.mProperty_mConstantNameList),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element & GGS_pic_31__38_MacroMap_2E_element::operator = (const GGS_pic_31__38_MacroMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConstantNameList = inSource.mProperty_mConstantNameList ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element GGS_pic_31__38_MacroMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_lstringlist & in_mConstantNameList,
                                                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element::GGS_pic_31__38_MacroMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_lstringlist & inOperand1,
                                                                        const GGS_pic_31__38_InstructionList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18MacroMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantNameList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18MacroMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element ("pic18MacroMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element GGS_pic_31__38_MacroMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element result ;
  const GGS_pic_31__38_MacroMap_2E_element * p = (const GGS_pic_31__38_MacroMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @pic_31__38_MacroMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_::GGS_pic_31__38_MacroMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_::GGS_pic_31__38_MacroMap_2E_element_3F_ (const GGS_pic_31__38_MacroMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_ GGS_pic_31__38_MacroMap_2E_element_3F_::init_nil (void) {
  GGS_pic_31__38_MacroMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_pic_31__38_MacroMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18MacroMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element_3F_ ("pic18MacroMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_ GGS_pic_31__38_MacroMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element_3F_ result ;
  const GGS_pic_31__38_MacroMap_2E_element_3F_ * p = (const GGS_pic_31__38_MacroMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element::GGS_routineDeclarationList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element::GGS_routineDeclarationList_2E_element (const GGS_routineDeclarationList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element & GGS_routineDeclarationList_2E_element::operator = (const GGS_routineDeclarationList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineDeclarationList_2E_element GGS_routineDeclarationList_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                       const GGS_luint & in_mRequiredBank,
                                                                                                       const GGS_luint & in_mReturnedBank,
                                                                                                       const GGS_bool & in_mPreservesBank,
                                                                                                       const GGS_bool & in_mIsNoReturn,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element::GGS_routineDeclarationList_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_luint & inOperand1,
                                                                              const GGS_luint & inOperand2,
                                                                              const GGS_bool & inOperand3,
                                                                              const GGS_bool & inOperand4) :
mProperty_mRoutineName (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineDeclarationList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRoutineName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineDeclarationList_2E_element ("routineDeclarationList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element GGS_routineDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineDeclarationList_2E_element result ;
  const GGS_routineDeclarationList_2E_element * p = (const GGS_routineDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element::GGS_dataList_2E_element (void) :
mProperty_mDataName (),
mProperty_mValueList (),
mProperty_mIsByteList () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element::GGS_dataList_2E_element (const GGS_dataList_2E_element & inSource) :
mProperty_mDataName (inSource.mProperty_mDataName),
mProperty_mValueList (inSource.mProperty_mValueList),
mProperty_mIsByteList (inSource.mProperty_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element & GGS_dataList_2E_element::operator = (const GGS_dataList_2E_element & inSource) {
  mProperty_mDataName = inSource.mProperty_mDataName ;
  mProperty_mValueList = inSource.mProperty_mValueList ;
  mProperty_mIsByteList = inSource.mProperty_mIsByteList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_dataList_2E_element GGS_dataList_2E_element::init_21__21__21_ (const GGS_lstring & in_mDataName,
                                                                   const GGS_immediatExpressionList & in_mValueList,
                                                                   const GGS_bool & in_mIsByteList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_dataList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDataName = in_mDataName ;
  result.mProperty_mValueList = in_mValueList ;
  result.mProperty_mIsByteList = in_mIsByteList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element::GGS_dataList_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_immediatExpressionList & inOperand1,
                                                  const GGS_bool & inOperand2) :
mProperty_mDataName (inOperand0),
mProperty_mValueList (inOperand1),
mProperty_mIsByteList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_dataList_2E_element::isValid (void) const {
  return mProperty_mDataName.isValid () && mProperty_mValueList.isValid () && mProperty_mIsByteList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList_2E_element::drop (void) {
  mProperty_mDataName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mIsByteList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @dataList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDataName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValueList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsByteList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @dataList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataList_2E_element ("dataList.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dataList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dataList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element GGS_dataList_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_dataList_2E_element result ;
  const GGS_dataList_2E_element * p = (const GGS_dataList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dataList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element::GGS_baseline_5F_symbolTable_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element::GGS_baseline_5F_symbolTable_2E_element (const GGS_baseline_5F_symbolTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineAddress (inSource.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element & GGS_baseline_5F_symbolTable_2E_element::operator = (const GGS_baseline_5F_symbolTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineAddress = inSource.mProperty_mRoutineAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element GGS_baseline_5F_symbolTable_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_uint & in_mRoutineAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element::GGS_baseline_5F_symbolTable_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_symbolTable.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_symbolTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element ("baseline_symbolTable.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_symbolTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_symbolTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_symbolTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element GGS_baseline_5F_symbolTable_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element result ;
  const GGS_baseline_5F_symbolTable_2E_element * p = (const GGS_baseline_5F_symbolTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_symbolTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baseline_5F_symbolTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_::GGS_baseline_5F_symbolTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_::GGS_baseline_5F_symbolTable_2E_element_3F_ (const GGS_baseline_5F_symbolTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_ GGS_baseline_5F_symbolTable_2E_element_3F_::init_nil (void) {
  GGS_baseline_5F_symbolTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baseline_5F_symbolTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_symbolTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element_3F_ ("baseline_symbolTable.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_symbolTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_symbolTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_symbolTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_ GGS_baseline_5F_symbolTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element_3F_ result ;
  const GGS_baseline_5F_symbolTable_2E_element_3F_ * p = (const GGS_baseline_5F_symbolTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_symbolTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element::GGS_midrange_5F_declaredRoutineMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element::GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element & GGS_midrange_5F_declaredRoutineMap_2E_element::operator = (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element GGS_midrange_5F_declaredRoutineMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element::GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_declaredRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_declaredRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ("midrange_declaredRoutineMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_declaredRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_declaredRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_declaredRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element GGS_midrange_5F_declaredRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element result ;
  const GGS_midrange_5F_declaredRoutineMap_2E_element * p = (const GGS_midrange_5F_declaredRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_declaredRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @midrange_5F_declaredRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_midrange_5F_declaredRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_declaredRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ("midrange_declaredRoutineMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ result ;
  const GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ * p = (const GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element::GGS_blockInstructionBlockMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element::GGS_blockInstructionBlockMap_2E_element (const GGS_blockInstructionBlockMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (inSource.mProperty_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (inSource.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element & GGS_blockInstructionBlockMap_2E_element::operator = (const GGS_blockInstructionBlockMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mBlockTerminaisonForBlockInstruction = inSource.mProperty_mBlockTerminaisonForBlockInstruction ;
  mProperty_mEndOfBlock = inSource.mProperty_mEndOfBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element GGS_blockInstructionBlockMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                       const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                       const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                       const GGS_location & in_mEndOfBlock,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element::GGS_blockInstructionBlockMap_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                  const GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                  const GGS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockInstructionBlockMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInstructionBlockMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ("blockInstructionBlockMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInstructionBlockMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInstructionBlockMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInstructionBlockMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element GGS_blockInstructionBlockMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element result ;
  const GGS_blockInstructionBlockMap_2E_element * p = (const GGS_blockInstructionBlockMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInstructionBlockMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockInstructionBlockMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_::GGS_blockInstructionBlockMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_::GGS_blockInstructionBlockMap_2E_element_3F_ (const GGS_blockInstructionBlockMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap_2E_element_3F_::init_nil (void) {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockInstructionBlockMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInstructionBlockMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ("blockInstructionBlockMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInstructionBlockMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInstructionBlockMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInstructionBlockMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  const GGS_blockInstructionBlockMap_2E_element_3F_ * p = (const GGS_blockInstructionBlockMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInstructionBlockMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element::GGS_blockInitialBankSelectionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInitialBankSelection (),
mProperty_mSourceBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element::GGS_blockInitialBankSelectionMap_2E_element (const GGS_blockInitialBankSelectionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInitialBankSelection (inSource.mProperty_mInitialBankSelection),
mProperty_mSourceBlock (inSource.mProperty_mSourceBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element & GGS_blockInitialBankSelectionMap_2E_element::operator = (const GGS_blockInitialBankSelectionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInitialBankSelection = inSource.mProperty_mInitialBankSelection ;
  mProperty_mSourceBlock = inSource.mProperty_mSourceBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element GGS_blockInitialBankSelectionMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                           const GGS_uint & in_mInitialBankSelection,
                                                                                                           const GGS_string & in_mSourceBlock,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialBankSelection = in_mInitialBankSelection ;
  result.mProperty_mSourceBlock = in_mSourceBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element::GGS_blockInitialBankSelectionMap_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_uint & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInitialBankSelection (inOperand1),
mProperty_mSourceBlock (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialBankSelection.isValid () && mProperty_mSourceBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialBankSelection.drop () ;
  mProperty_mSourceBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockInitialBankSelectionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInitialBankSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInitialBankSelectionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ("blockInitialBankSelectionMap.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInitialBankSelectionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInitialBankSelectionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInitialBankSelectionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element GGS_blockInitialBankSelectionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element result ;
  const GGS_blockInitialBankSelectionMap_2E_element * p = (const GGS_blockInitialBankSelectionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInitialBankSelectionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockInitialBankSelectionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_::GGS_blockInitialBankSelectionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_::GGS_blockInitialBankSelectionMap_2E_element_3F_ (const GGS_blockInitialBankSelectionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap_2E_element_3F_::init_nil (void) {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockInitialBankSelectionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element_3F_::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInitialBankSelectionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ("blockInitialBankSelectionMap.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInitialBankSelectionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInitialBankSelectionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInitialBankSelectionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  const GGS_blockInitialBankSelectionMap_2E_element_3F_ * p = (const GGS_blockInitialBankSelectionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInitialBankSelectionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_constantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element & GGS_constantMap_2E_element::operator = (const GGS_constantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                     const GGS_sint_36__34_ & in_mValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_sint_36__34_ & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element ("constantMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  const GGS_constantMap_2E_element * p = (const GGS_constantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::init_nil (void) {
  GGS_constantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ("constantMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element_3F_ result ;
  const GGS_constantMap_2E_element_3F_ * p = (const GGS_constantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (const GGS_routineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element & GGS_routineMap_2E_element::operator = (const GGS_routineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_bool & in_mIsNoReturn,
                                                                               const GGS_uint & in_mRequiredBank,
                                                                               const GGS_uint & in_mReturnedBank,
                                                                               const GGS_bool & in_mPreservesBank,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_bool & inOperand1,
                                                      const GGS_uint & inOperand2,
                                                      const GGS_uint & inOperand3,
                                                      const GGS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mRequiredBank (inOperand2),
mProperty_mReturnedBank (inOperand3),
mProperty_mPreservesBank (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsNoReturn.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRequiredBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedBank.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesBank.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element ("routineMap.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  const GGS_routineMap_2E_element * p = (const GGS_routineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_::GGS_routineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_::GGS_routineMap_2E_element_3F_ (const GGS_routineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_ GGS_routineMap_2E_element_3F_::init_nil (void) {
  GGS_routineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element_3F_::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ("routineMap.element?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_ GGS_routineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineMap_2E_element_3F_ result ;
  const GGS_routineMap_2E_element_3F_ * p = (const GGS_routineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element::GGS_symbolTableForOptimizations_2E_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex (),
mProperty_mIsDeletable () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element::GGS_symbolTableForOptimizations_2E_element (const GGS_symbolTableForOptimizations_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDefinitionLineIndex (inSource.mProperty_mDefinitionLineIndex),
mProperty_mIsDeletable (inSource.mProperty_mIsDeletable) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element & GGS_symbolTableForOptimizations_2E_element::operator = (const GGS_symbolTableForOptimizations_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDefinitionLineIndex = inSource.mProperty_mDefinitionLineIndex ;
  mProperty_mIsDeletable = inSource.mProperty_mIsDeletable ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element GGS_symbolTableForOptimizations_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mDefinitionLineIndex,
                                                                                                         const GGS_bool & in_mIsDeletable,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  result.mProperty_mIsDeletable = in_mIsDeletable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element::GGS_symbolTableForOptimizations_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_uint & inOperand1,
                                                                                        const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1),
mProperty_mIsDeletable (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () && mProperty_mIsDeletable.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
  mProperty_mIsDeletable.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForOptimizations.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefinitionLineIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsDeletable.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForOptimizations.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ("symbolTableForOptimizations.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForOptimizations_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForOptimizations_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForOptimizations_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element GGS_symbolTableForOptimizations_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element result ;
  const GGS_symbolTableForOptimizations_2E_element * p = (const GGS_symbolTableForOptimizations_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForOptimizations_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForOptimizations_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_::GGS_symbolTableForOptimizations_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_::GGS_symbolTableForOptimizations_2E_element_3F_ (const GGS_symbolTableForOptimizations_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_ GGS_symbolTableForOptimizations_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForOptimizations_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForOptimizations_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForOptimizations.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ("symbolTableForOptimizations.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForOptimizations_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForOptimizations_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForOptimizations_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_ GGS_symbolTableForOptimizations_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element_3F_ result ;
  const GGS_symbolTableForOptimizations_2E_element_3F_ * p = (const GGS_symbolTableForOptimizations_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForOptimizations_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression resolveMidrangeAccess'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_resolveMidrangeAccess (const GGS_uint constinArgument_inTotalBankCount,
                                                            const GGS_uint constinArgument_inCurrentBank,
                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                            GGS_midrange_5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                            GGS_bitSliceTable & outArgument_outBitSliceTable,
                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_offset_649 ;
  const GGS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_649, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 19)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 20)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_765 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_649.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_765.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_649.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 24)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 24)) ;
    }
  }
  GGS_uintlist var_registerAddressList_970 ;
  GGS_uint var_size_1005 ;
  GGS_registerProtection var_protection_1048 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_string joker_1036 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_970, var_size_1005, outArgument_outBitSliceTable, joker_1036, var_protection_1048, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 27)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GGS_bool (true), var_protection_1048, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 35)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_649.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)).objectCompare (var_size_1005)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_1005.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 38)) ;
    }
  }
  GGS_uintlist var_acceptableBanks_1310 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_uintlist enumerator_1347 (var_registerAddressList_970) ;
  while (enumerator_1347.hasCurrentObject ()) {
    var_acceptableBanks_1310.addAssignOperation (enumerator_1347.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 43))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 43)) ;
    enumerator_1347.gotoNextObject () ;
  }
  GGS_uint var_registerAddress_1442 = GGS_uint (uint32_t (0U)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GGS_uint var_bank_1581 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_ok_1604 = GGS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1618 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1618 = true ;
        while (loop_1618) {
          loop_1618 = GGS_bool (ComparisonKind::lowerThan, var_bank_1581.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1604 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)).isValid () ;
          if (loop_1618) {
            loop_1618 = GGS_bool (ComparisonKind::lowerThan, var_bank_1581.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1604 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)).boolValue () ;
          }
          if (loop_1618 && (0 == variant_1618)) {
            loop_1618 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 51)) ;
          }
          if (loop_1618) {
            variant_1618 -= 1 ;
            var_ok_1604 = GGS_bool (false) ;
            UpEnumerator_uintlist enumerator_1710 (var_registerAddressList_970) ;
            bool bool_10 = var_ok_1604.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValidAndTrue () ;
            if (enumerator_1710.hasCurrentObject () && bool_10) {
              while (enumerator_1710.hasCurrentObject () && bool_10) {
                var_ok_1604 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_1710.current_mValue (HERE).objectCompare (var_bank_1581.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)))).operator_and (GGS_bool (ComparisonKind::lowerThan, enumerator_1710.current_mValue (HERE).objectCompare (var_bank_1581.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)).add_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 54)) ;
                var_registerAddress_1442 = enumerator_1710.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)) ;
                enumerator_1710.gotoNextObject () ;
                if (enumerator_1710.hasCurrentObject ()) {
                  bool_10 = var_ok_1604.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1581.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
          }
        }
      }
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = var_ok_1604.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_string var_acceptableBankMessage_1939 = GGS_string::makeEmptyString () ;
          UpEnumerator_uintlist enumerator_1977 (var_registerAddressList_970) ;
          while (enumerator_1977.hasCurrentObject ()) {
            var_acceptableBankMessage_1939.plusAssignOperation(enumerator_1977.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 62)) ;
            enumerator_1977.gotoNextObject () ;
            if (enumerator_1977.hasCurrentObject ()) {
              var_acceptableBankMessage_1939.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 63)) ;
            }
          }
          const GGS_registerExpression temp_12 = this ;
          const GGS_registerExpression temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterName ().readProperty_location (), GGS_string ("as no bank is currently known, the '").add_operation (temp_13.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)).add_operation (GGS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)).add_operation (var_acceptableBankMessage_1939, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)).add_operation (GGS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_bool var_found_2361 = GGS_bool (false) ;
    UpEnumerator_uintlist enumerator_2384 (var_registerAddressList_970) ;
    bool bool_15 = var_found_2361.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 69)).isValidAndTrue () ;
    if (enumerator_2384.hasCurrentObject () && bool_15) {
      while (enumerator_2384.hasCurrentObject () && bool_15) {
        var_found_2361 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_2384.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)))).operator_and (GGS_bool (ComparisonKind::lowerThan, enumerator_2384.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)).add_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 70)) ;
        var_registerAddress_1442 = enumerator_2384.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)) ;
        enumerator_2384.gotoNextObject () ;
        if (enumerator_2384.hasCurrentObject ()) {
          bool_15 = var_found_2361.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 69)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_found_2361.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_string var_acceptableBankMessage_2610 = GGS_string::makeEmptyString () ;
        UpEnumerator_uintlist enumerator_2648 (var_registerAddressList_970) ;
        while (enumerator_2648.hasCurrentObject ()) {
          var_acceptableBankMessage_2610.plusAssignOperation(enumerator_2648.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 76)) ;
          enumerator_2648.gotoNextObject () ;
          if (enumerator_2648.hasCurrentObject ()) {
            var_acceptableBankMessage_2610.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 77)) ;
          }
        }
        const GGS_registerExpression temp_17 = this ;
        const GGS_registerExpression temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_18.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (GGS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (GGS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (var_acceptableBankMessage_2610, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GGS_midrange_5F_intermediate_5F_registerExpression::init_21__21_ (var_assemblyString_765, var_registerAddress_1442.add_operation (var_offset_649.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 85)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveMidrangeAccess (cPtr_registerExpression * inObject,
                                                const GGS_uint constin_inTotalBankCount,
                                                const GGS_uint constin_inCurrentBank,
                                                const GGS_registerTable constin_inRegisterTable,
                                                const GGS_constantMap constin_inConstantMap,
                                                GGS_midrange_5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                GGS_bitSliceTable & out_outBitSliceTable,
                                                GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_resolveMidrangeAccess (constin_inTotalBankCount, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const GGS_ipic_31__38_Block inObject,
                                      GGS_blockDurationMap & ioArgument_ioExploredBlockMap,
                                      const GGS_string constinArgument_inNextLabel,
                                      GGS_ipic_31__38_Block & outArgument_outNewBlock,
                                      GGS_bool & ioArgument_ioContinue,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNewBlock.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    const GGS_ipic_31__38_Block temp_2 = inObject ;
    test_0 = GGS_bool (ComparisonKind::lowerOrEqual, temp_1.readProperty_mTerminatorMin ().objectCompare (temp_2.readProperty_mTerminatorMax ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_Block temp_3 = inObject ;
      outArgument_outNewBlock = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_terminatorMin_22459 ;
    GGS_uint var_terminatorMax_22478 ;
    const GGS_ipic_31__38_Block temp_4 = inObject ;
    callExtensionMethod_terminatorMinMaxDuration ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_4.readProperty_mTerminator ().ptr (), ioArgument_ioExploredBlockMap, constinArgument_inNextLabel, var_terminatorMin_22459, var_terminatorMax_22478, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 593)) ;
    GGS_uint var_min_22501 = var_terminatorMin_22459 ;
    GGS_uint var_max_22529 = var_terminatorMax_22478 ;
    GGS_ipic_31__38_SequentialInstructionList var_computedInstructionList_22590 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    GGS_bool var_ok_22628 = GGS_bool (ComparisonKind::lowerOrEqual, var_min_22501.objectCompare (var_max_22529)) ;
    const GGS_ipic_31__38_Block temp_5 = inObject ;
    DownEnumerator_ipic_31__38_SequentialInstructionList enumerator_22663 (temp_5.readProperty_mInstructionList ()) ;
    while (enumerator_22663.hasCurrentObject ()) {
      GGS_uint var_instructionMin_22770 ;
      GGS_uint var_instructionMax_22804 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_22663.current_mInstruction (HERE).ptr (), ioArgument_ioExploredBlockMap, var_instructionMin_22770, var_instructionMax_22804, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 599)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_bool test_7 = var_ok_22628 ;
        if (GalgasBool::boolTrue == test_7.boolEnum ()) {
          test_7 = GGS_bool (ComparisonKind::lowerOrEqual, var_instructionMin_22770.objectCompare (var_instructionMax_22804)) ;
        }
        test_6 = test_7.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_min_22501 = var_min_22501.add_operation (var_instructionMin_22770, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 605)) ;
          var_max_22529 = var_max_22529.add_operation (var_instructionMax_22804, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 606)) ;
          {
          var_computedInstructionList_22590.setter_insertAtIndex (enumerator_22663.current_mInstruction (HERE), var_min_22501, var_max_22529, GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 607)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        var_ok_22628 = GGS_bool (false) ;
        {
        var_computedInstructionList_22590.setter_insertAtIndex (enumerator_22663.current_mInstruction (HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 610)), GGS_uint (uint32_t (0U)), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 610)) ;
        }
      }
      enumerator_22663.gotoNextObject () ;
    }
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_ok_22628.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_ipic_31__38_Block temp_9 = inObject ;
        const GGS_ipic_31__38_Block temp_10 = inObject ;
        const GGS_ipic_31__38_Block temp_11 = inObject ;
        outArgument_outNewBlock = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (temp_9.readProperty_mAddress (), temp_10.readProperty_mLabel (), var_computedInstructionList_22590, temp_11.readProperty_mTerminator (), var_terminatorMin_22459, var_terminatorMax_22478, inCompiler COMMA_HERE) ;
        ioArgument_ioContinue = GGS_bool (true) ;
        {
        const GGS_ipic_31__38_Block temp_12 = inObject ;
        ioArgument_ioExploredBlockMap.setter_insertKey (temp_12.readProperty_mLabel (), var_min_22501, var_max_22529, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 623)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_ipic_31__38_Block temp_13 = inObject ;
      outArgument_outNewBlock = temp_13 ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
  TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_controller) // $controller$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_processor) // $processor$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_romsize) // $romsize$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (1) // <select_piccoloDevice_5F_syntax_0>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_bank) // $bank$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, TOP_DOWN_NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, TOP_DOWN_NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, TOP_DOWN_NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 19 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
, TOP_DOWN_END_PRODUCTION ()
// At index 20 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_eepromsize) // $eepromsize$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
, TOP_DOWN_END_PRODUCTION ()
// At index 27 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_unusedregister) // $unusedregister$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (3) // <select_piccoloDevice_5F_syntax_2>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (2) // <select_piccoloDevice_5F_syntax_1>
, TOP_DOWN_END_PRODUCTION ()
// At index 33 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
, TOP_DOWN_END_PRODUCTION ()
// At index 34 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_END_PRODUCTION ()
// At index 37 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
, TOP_DOWN_END_PRODUCTION ()
// At index 38 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_ram) // $ram$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_to) // $to$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (5) // <select_piccoloDevice_5F_syntax_4>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (4) // <select_piccoloDevice_5F_syntax_3>
, TOP_DOWN_END_PRODUCTION ()
// At index 48 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
, TOP_DOWN_END_PRODUCTION ()
// At index 49 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mirrorat) // $mirrorat$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, TOP_DOWN_END_PRODUCTION ()
// At index 53 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
, TOP_DOWN_END_PRODUCTION ()
// At index 54 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (6) // <select_piccoloDevice_5F_syntax_5>
, TOP_DOWN_END_PRODUCTION ()
// At index 58 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
, TOP_DOWN_END_PRODUCTION ()
// At index 59 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_register) // $register$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3C_) // $<$
, TOP_DOWN_NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, TOP_DOWN_NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3E_) // $>$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__3B_) // $;$
, TOP_DOWN_NONTERMINAL (7) // <select_piccoloDevice_5F_syntax_6>
, TOP_DOWN_END_PRODUCTION ()
// At index 71 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
, TOP_DOWN_END_PRODUCTION ()
// At index 72 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (8) // <select_piccoloDevice_5F_syntax_7>
, TOP_DOWN_END_PRODUCTION ()
// At index 76 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
, TOP_DOWN_END_PRODUCTION ()
// At index 77 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2C_) // $,$
, TOP_DOWN_NONTERMINAL (10) // <select_piccoloDevice_5F_syntax_9>
, TOP_DOWN_NONTERMINAL (9) // <select_piccoloDevice_5F_syntax_8>
, TOP_DOWN_END_PRODUCTION ()
// At index 81 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, TOP_DOWN_NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, TOP_DOWN_END_PRODUCTION ()
// At index 85 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2D_) // $-$
, TOP_DOWN_END_PRODUCTION ()
// At index 87 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
, TOP_DOWN_END_PRODUCTION ()
// At index 88 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__2F_) // $/$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_NONTERMINAL (12) // <select_piccoloDevice_5F_syntax_11>
, TOP_DOWN_NONTERMINAL (11) // <select_piccoloDevice_5F_syntax_10>
, TOP_DOWN_END_PRODUCTION ()
// At index 93 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
, TOP_DOWN_END_PRODUCTION ()
// At index 94 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__5B_) // $[$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__5D_) // $]$
, TOP_DOWN_END_PRODUCTION ()
// At index 98 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
, TOP_DOWN_END_PRODUCTION ()
// At index 99 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_configuration) // $configuration$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_at) // $at$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_width) // $width$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken__7D_) // $}$
, TOP_DOWN_NONTERMINAL (13) // <select_piccoloDevice_5F_syntax_12>
, TOP_DOWN_END_PRODUCTION ()
// At index 111 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
, TOP_DOWN_END_PRODUCTION ()
// At index 112 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_illegal) // $illegal$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_message) // $message$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_NONTERMINAL (14) // <select_piccoloDevice_5F_syntax_13>
, TOP_DOWN_END_PRODUCTION ()
// At index 120 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
, TOP_DOWN_END_PRODUCTION ()
// At index 121 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, TOP_DOWN_NONTERMINAL (15) // <select_piccoloDevice_5F_syntax_14>
, TOP_DOWN_END_PRODUCTION ()
// At index 135 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
, TOP_DOWN_END_PRODUCTION ()
// At index 136 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_setting) // $setting$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_mask) // $mask$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_integer) // $integer$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_description) // $description$
, TOP_DOWN_TERMINAL (Lexique_piccoloDevice_5F_lexique::kToken_string) // $string$
, TOP_DOWN_NONTERMINAL (16) // <select_piccoloDevice_5F_syntax_15>
, TOP_DOWN_END_PRODUCTION ()
// At index 144 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (0) // <start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_piccoloDevice_grammar [34] = {
 {"<start_symbol>", "piccoloDevice_syntax", 0}, // at index 0
 {"<select_piccoloDevice_5F_syntax_0>", "piccoloDevice_syntax", 19}, // at index 1
 {"<select_piccoloDevice_5F_syntax_0>", "piccoloDevice_syntax", 20}, // at index 2
 {"<select_piccoloDevice_5F_syntax_1>", "piccoloDevice_syntax", 26}, // at index 3
 {"<select_piccoloDevice_5F_syntax_1>", "piccoloDevice_syntax", 27}, // at index 4
 {"<select_piccoloDevice_5F_syntax_2>", "piccoloDevice_syntax", 33}, // at index 5
 {"<select_piccoloDevice_5F_syntax_2>", "piccoloDevice_syntax", 34}, // at index 6
 {"<select_piccoloDevice_5F_syntax_3>", "piccoloDevice_syntax", 37}, // at index 7
 {"<select_piccoloDevice_5F_syntax_3>", "piccoloDevice_syntax", 38}, // at index 8
 {"<select_piccoloDevice_5F_syntax_4>", "piccoloDevice_syntax", 48}, // at index 9
 {"<select_piccoloDevice_5F_syntax_4>", "piccoloDevice_syntax", 49}, // at index 10
 {"<select_piccoloDevice_5F_syntax_5>", "piccoloDevice_syntax", 53}, // at index 11
 {"<select_piccoloDevice_5F_syntax_5>", "piccoloDevice_syntax", 54}, // at index 12
 {"<select_piccoloDevice_5F_syntax_6>", "piccoloDevice_syntax", 58}, // at index 13
 {"<select_piccoloDevice_5F_syntax_6>", "piccoloDevice_syntax", 59}, // at index 14
 {"<select_piccoloDevice_5F_syntax_7>", "piccoloDevice_syntax", 71}, // at index 15
 {"<select_piccoloDevice_5F_syntax_7>", "piccoloDevice_syntax", 72}, // at index 16
 {"<select_piccoloDevice_5F_syntax_8>", "piccoloDevice_syntax", 76}, // at index 17
 {"<select_piccoloDevice_5F_syntax_8>", "piccoloDevice_syntax", 77}, // at index 18
 {"<select_piccoloDevice_5F_syntax_9>", "piccoloDevice_syntax", 81}, // at index 19
 {"<select_piccoloDevice_5F_syntax_9>", "piccoloDevice_syntax", 85}, // at index 20
 {"<select_piccoloDevice_5F_syntax_10>", "piccoloDevice_syntax", 87}, // at index 21
 {"<select_piccoloDevice_5F_syntax_10>", "piccoloDevice_syntax", 88}, // at index 22
 {"<select_piccoloDevice_5F_syntax_11>", "piccoloDevice_syntax", 93}, // at index 23
 {"<select_piccoloDevice_5F_syntax_11>", "piccoloDevice_syntax", 94}, // at index 24
 {"<select_piccoloDevice_5F_syntax_12>", "piccoloDevice_syntax", 98}, // at index 25
 {"<select_piccoloDevice_5F_syntax_12>", "piccoloDevice_syntax", 99}, // at index 26
 {"<select_piccoloDevice_5F_syntax_13>", "piccoloDevice_syntax", 111}, // at index 27
 {"<select_piccoloDevice_5F_syntax_13>", "piccoloDevice_syntax", 112}, // at index 28
 {"<select_piccoloDevice_5F_syntax_14>", "piccoloDevice_syntax", 120}, // at index 29
 {"<select_piccoloDevice_5F_syntax_14>", "piccoloDevice_syntax", 121}, // at index 30
 {"<select_piccoloDevice_5F_syntax_15>", "piccoloDevice_syntax", 135}, // at index 31
 {"<select_piccoloDevice_5F_syntax_15>", "piccoloDevice_syntax", 136}, // at index 32
 {"<>", "", 144} // at index 33
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_piccoloDevice_grammar [34] = {
0, // index 0 : <start_symbol>, in file 'piccoloDevice_syntax.ggs', line 10
19, // index 1 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
20, // index 2 : <select_piccoloDevice_5F_syntax_0>, in file 'piccoloDevice_syntax.ggs', line 34
26, // index 3 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
27, // index 4 : <select_piccoloDevice_5F_syntax_1>, in file 'piccoloDevice_syntax.ggs', line 49
33, // index 5 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
34, // index 6 : <select_piccoloDevice_5F_syntax_2>, in file 'piccoloDevice_syntax.ggs', line 53
37, // index 7 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
38, // index 8 : <select_piccoloDevice_5F_syntax_3>, in file 'piccoloDevice_syntax.ggs', line 61
48, // index 9 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
49, // index 10 : <select_piccoloDevice_5F_syntax_4>, in file 'piccoloDevice_syntax.ggs', line 70
53, // index 11 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
54, // index 12 : <select_piccoloDevice_5F_syntax_5>, in file 'piccoloDevice_syntax.ggs', line 73
58, // index 13 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
59, // index 14 : <select_piccoloDevice_5F_syntax_6>, in file 'piccoloDevice_syntax.ggs', line 90
71, // index 15 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
72, // index 16 : <select_piccoloDevice_5F_syntax_7>, in file 'piccoloDevice_syntax.ggs', line 96
76, // index 17 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
77, // index 18 : <select_piccoloDevice_5F_syntax_8>, in file 'piccoloDevice_syntax.ggs', line 106
81, // index 19 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
85, // index 20 : <select_piccoloDevice_5F_syntax_9>, in file 'piccoloDevice_syntax.ggs', line 107
87, // index 21 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
88, // index 22 : <select_piccoloDevice_5F_syntax_10>, in file 'piccoloDevice_syntax.ggs', line 109
93, // index 23 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
94, // index 24 : <select_piccoloDevice_5F_syntax_11>, in file 'piccoloDevice_syntax.ggs', line 112
98, // index 25 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
99, // index 26 : <select_piccoloDevice_5F_syntax_12>, in file 'piccoloDevice_syntax.ggs', line 153
111, // index 27 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
112, // index 28 : <select_piccoloDevice_5F_syntax_13>, in file 'piccoloDevice_syntax.ggs', line 162
120, // index 29 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
121, // index 30 : <select_piccoloDevice_5F_syntax_14>, in file 'piccoloDevice_syntax.ggs', line 175
135, // index 31 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
136, // index 32 : <select_piccoloDevice_5F_syntax_15>, in file 'piccoloDevice_syntax.ggs', line 187
144 // index 33 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_piccoloDevice_grammar [19] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_piccoloDevice_5F_syntax_0>
3, // at 2 : <select_piccoloDevice_5F_syntax_1>
5, // at 3 : <select_piccoloDevice_5F_syntax_2>
7, // at 4 : <select_piccoloDevice_5F_syntax_3>
9, // at 5 : <select_piccoloDevice_5F_syntax_4>
11, // at 6 : <select_piccoloDevice_5F_syntax_5>
13, // at 7 : <select_piccoloDevice_5F_syntax_6>
15, // at 8 : <select_piccoloDevice_5F_syntax_7>
17, // at 9 : <select_piccoloDevice_5F_syntax_8>
19, // at 10 : <select_piccoloDevice_5F_syntax_9>
21, // at 11 : <select_piccoloDevice_5F_syntax_10>
23, // at 12 : <select_piccoloDevice_5F_syntax_11>
25, // at 13 : <select_piccoloDevice_5F_syntax_12>
27, // at 14 : <select_piccoloDevice_5F_syntax_13>
29, // at 15 : <select_piccoloDevice_5F_syntax_14>
31, // at 16 : <select_piccoloDevice_5F_syntax_15>
33, // at 17 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_piccoloDevice_grammar [] = {
// At index 0 : <start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <select_piccoloDevice_5F_syntax_0>
Lexique_piccoloDevice_5F_lexique::kToken_bank, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_eepromsize, -1, // Choice 2
  -1,
// At index 6 : <select_piccoloDevice_5F_syntax_1>
Lexique_piccoloDevice_5F_lexique::kToken_ram, Lexique_piccoloDevice_5F_lexique::kToken_register, Lexique_piccoloDevice_5F_lexique::kToken_configuration, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_unusedregister, -1, // Choice 2
  -1,
// At index 14 : <select_piccoloDevice_5F_syntax_2>
Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_to, -1, // Choice 2
  -1,
// At index 19 : <select_piccoloDevice_5F_syntax_3>
Lexique_piccoloDevice_5F_lexique::kToken_register, Lexique_piccoloDevice_5F_lexique::kToken_configuration, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_ram, -1, // Choice 2
  -1,
// At index 26 : <select_piccoloDevice_5F_syntax_4>
Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_mirrorat, -1, // Choice 2
  -1,
// At index 31 : <select_piccoloDevice_5F_syntax_5>
Lexique_piccoloDevice_5F_lexique::kToken__3B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 36 : <select_piccoloDevice_5F_syntax_6>
Lexique_piccoloDevice_5F_lexique::kToken_configuration, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_register, -1, // Choice 2
  -1,
// At index 42 : <select_piccoloDevice_5F_syntax_7>
Lexique_piccoloDevice_5F_lexique::kToken__3C_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 47 : <select_piccoloDevice_5F_syntax_8>
Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2C_, -1, // Choice 2
  -1,
// At index 52 : <select_piccoloDevice_5F_syntax_9>
Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2D_, -1, // Choice 2
  -1,
// At index 57 : <select_piccoloDevice_5F_syntax_10>
Lexique_piccoloDevice_5F_lexique::kToken__2C_, Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__2F_, -1, // Choice 2
  -1,
// At index 63 : <select_piccoloDevice_5F_syntax_11>
Lexique_piccoloDevice_5F_lexique::kToken__2C_, Lexique_piccoloDevice_5F_lexique::kToken__2F_, Lexique_piccoloDevice_5F_lexique::kToken__3E_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken__5B_, -1, // Choice 2
  -1,
// At index 70 : <select_piccoloDevice_5F_syntax_12>
Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_configuration, -1, // Choice 2
  -1,
// At index 75 : <select_piccoloDevice_5F_syntax_13>
Lexique_piccoloDevice_5F_lexique::kToken__7B_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_illegal, -1, // Choice 2
  -1,
// At index 80 : <select_piccoloDevice_5F_syntax_14>
Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_identifier, -1, // Choice 2
  -1,
// At index 85 : <select_piccoloDevice_5F_syntax_15>
Lexique_piccoloDevice_5F_lexique::kToken_identifier, Lexique_piccoloDevice_5F_lexique::kToken__7D_, -1, // Choice 1
Lexique_piccoloDevice_5F_lexique::kToken_setting, -1, // Choice 2
  -1,
// At index 91 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_piccoloDevice_grammar [19] = {
0, // at 0 : <start_symbol>
1, // at 1 : <select_piccoloDevice_5F_syntax_0>
6, // at 2 : <select_piccoloDevice_5F_syntax_1>
14, // at 3 : <select_piccoloDevice_5F_syntax_2>
19, // at 4 : <select_piccoloDevice_5F_syntax_3>
26, // at 5 : <select_piccoloDevice_5F_syntax_4>
31, // at 6 : <select_piccoloDevice_5F_syntax_5>
36, // at 7 : <select_piccoloDevice_5F_syntax_6>
42, // at 8 : <select_piccoloDevice_5F_syntax_7>
47, // at 9 : <select_piccoloDevice_5F_syntax_8>
52, // at 10 : <select_piccoloDevice_5F_syntax_9>
57, // at 11 : <select_piccoloDevice_5F_syntax_10>
63, // at 12 : <select_piccoloDevice_5F_syntax_11>
70, // at 13 : <select_piccoloDevice_5F_syntax_12>
75, // at 14 : <select_piccoloDevice_5F_syntax_13>
80, // at 15 : <select_piccoloDevice_5F_syntax_14>
85, // at 16 : <select_piccoloDevice_5F_syntax_15>
91, // at 17 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_parse (Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_indexing (Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_ (GGS_piccoloDeviceModel & parameter_1,
                                Lexique_piccoloDevice_5F_lexique * inLexique) {
  rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
}

void cGrammar_piccoloDevice_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
    if (ok) {
      cGrammar_piccoloDevice_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_piccoloDevice_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_piccoloDeviceModel &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                      gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_piccoloDevice_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_piccoloDeviceModel &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_piccoloDevice_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_piccoloDevice_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_piccoloDevice_grammar, gProductionNames_piccoloDevice_grammar, gProductionIndexes_piccoloDevice_grammar,
                                                    gFirstProductionIndexes_piccoloDevice_grammar, gDecision_piccoloDevice_grammar, gDecisionIndexes_piccoloDevice_grammar, 144) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_piccoloDevice_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_0' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_0 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_1' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_1 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_2' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_2 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_3' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_3 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_4' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_4 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_5' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_5 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_6' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_6 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_7' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_7 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_8' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_8 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_piccoloDevice_5F_syntax_9' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_9 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_10' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_10 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_11' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_11 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_12' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_12 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_13' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_13 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_14' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_14 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//             'select_piccoloDevice_5F_syntax_15' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_piccoloDevice_5F_grammar::select_piccoloDevice_5F_syntax_15 (Lexique_piccoloDevice_5F_lexique * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_sortKey (const GGS_clusterList & constinArgument_inClusterList,
                             Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outKey ; // Returned variable
  result_outKey = GGS_string::makeEmptyString () ;
  UpEnumerator_clusterList enumerator_605 (constinArgument_inClusterList) ;
  while (enumerator_605.hasCurrentObject ()) {
    result_outKey.plusAssignOperation(enumerator_605.current_mBlockList (HERE).getter_mBlockAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 21)).readProperty_mLabel ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 21)) ;
    enumerator_605.gotoNextObject () ;
    if (enumerator_605.hasCurrentObject ()) {
      result_outKey.plusAssignOperation(GGS_string ("."), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)) ;
    }
  }
//---
  return result_outKey ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_sortKey [2] = {
  & kTypeDescriptor_GALGAS_clusterList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_sortKey (Compiler * inCompiler,
                                                     const cObjectArray & inEffectiveParameterArray,
                                                     const GGS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_clusterList operand0 = GGS_clusterList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_sortKey (operand0,
                           inCompiler
                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_sortKey ("sortKey",
                                                         functionWithGenericHeader_sortKey,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         1,
                                                         functionArgs_sortKey) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_cluster_ordering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const GGS_clusterList constinArgument_inInitialClusterList,
                                                         GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimize_966 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (66)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 34)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 34)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 33)).operator_and (GGS_bool (gOption_piccoloOptions_doNotReorderCluster.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 35)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 34)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_optimize_966.operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Option '--").add_operation (GGS_string (gOption_piccoloOptions_doNotReorderCluster.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)).add_operation (GGS_string ("': this optimization is not performed.n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_clusterCount_1404 = constinArgument_inInitialClusterList.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 40)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 40)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CLUSTER ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)) ;
    GGS_string temp_1 ;
    const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, var_clusterCount_1404.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      temp_1 = GGS_string ("s") ;
    }else if (GalgasBool::boolFalse == test_2) {
      temp_1 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_s_1730 = GGS_string ("Cluster ordering optimization (").add_operation (var_clusterCount_1404.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (GGS_string (" cluster"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (GGS_string ("):\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)) ;
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1730.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_print_3F_ (var_s_1730, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 47)) ;
        }
      }
    }
    GGS_clusterList var_clusterList_2018 = constinArgument_inInitialClusterList ;
    GGS_neededConversionForClusterOrder var_neededConversionForClusterOrder_2061 = GGS_neededConversionForClusterOrder::init (inCompiler COMMA_HERE) ;
    GGS_bool var_continue_2144 = GGS_bool (true) ;
    GGS_uint var_pass_2174 = GGS_uint (uint32_t (0U)) ;
    if (var_clusterList_2018.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)).multiply_operation (var_clusterList_2018.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)).isValid ()) {
      uint32_t variant_2187 = var_clusterList_2018.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)).multiply_operation (var_clusterList_2018.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)).uintValue () ;
      bool loop_2187 = true ;
      while (loop_2187) {
        loop_2187 = var_continue_2144.isValid () ;
        if (loop_2187) {
          loop_2187 = var_continue_2144.boolValue () ;
        }
        if (loop_2187 && (0 == variant_2187)) {
          loop_2187 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 54)) ;
        }
        if (loop_2187) {
          variant_2187 -= 1 ;
          var_pass_2174.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_pass_2174.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 57)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 57)) ;
          GGS_ipic_31__38_BlockList var_workingBlockList_2387 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
          GGS_symbolTableForClusterOrdering var_symbolTable_2435 = GGS_symbolTableForClusterOrdering::init (inCompiler COMMA_HERE) ;
          UpEnumerator_clusterList enumerator_2493 (var_clusterList_2018) ;
          GGS_uint index_2488 (uint32_t (0)) ;
          while (enumerator_2493.hasCurrentObject ()) {
            var_workingBlockList_2387.plusAssignOperation(enumerator_2493.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 62)) ;
            UpEnumerator_ipic_31__38_BlockList enumerator_2590 (enumerator_2493.current_mBlockList (HERE)) ;
            while (enumerator_2590.hasCurrentObject ()) {
              {
              var_symbolTable_2435.setter_insertKey (enumerator_2590.current_mBlock (HERE).readProperty_mLabel (), index_2488, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 64)) ;
              }
              enumerator_2590.gotoNextObject () ;
            }
            enumerator_2493.gotoNextObject () ;
            index_2488.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 61)) ;
          }
          GGS_uint var_insertionIdx_2770 = var_workingBlockList_2387.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 68)) ;
          DownEnumerator_ipic_31__38_BlockList enumerator_2823 (ioArgument_ioBlockList) ;
          bool bool_4 = var_continue_2144.isValidAndTrue () ;
          if (enumerator_2823.hasCurrentObject () && bool_4) {
            while (enumerator_2823.hasCurrentObject () && bool_4) {
              var_continue_2144 = GGS_bool (ComparisonKind::notEqual, enumerator_2823.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 70)))) ;
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_continue_2144.boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_symbolTable_2435.setter_insertKey (enumerator_2823.current_mBlock (HERE).readProperty_mLabel (), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 72)) ;
                  }
                  {
                  var_workingBlockList_2387.setter_insertAtIndex (enumerator_2823.current_mBlock (HERE), var_insertionIdx_2770, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 73)) ;
                  }
                }
              }
              enumerator_2823.gotoNextObject () ;
              if (enumerator_2823.hasCurrentObject ()) {
                bool_4 = var_continue_2144.isValidAndTrue () ;
              }
            }
          }
          GGS_branchOverflowMap var_overflowMap_3270 ;
          {
          routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (var_workingBlockList_2387, ioArgument_ioBlockList, var_overflowMap_3270, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 77)) ;
          }
          GGS_uint var_overflowCount_3306 = GGS_uint (uint32_t (0U)) ;
          UpEnumerator_branchOverflowMapDictionary enumerator_3339 (var_overflowMap_3270.readProperty_dictionary ()) ;
          while (enumerator_3339.hasCurrentObject ()) {
            UpEnumerator_stringlist enumerator_3388 (enumerator_3339.current_mList (HERE)) ;
            while (enumerator_3388.hasCurrentObject ()) {
              var_overflowCount_3306.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 85)) ;
              GGS_uint var_sourceCluster_3497 ;
              var_symbolTable_2435.method_searchKey (enumerator_3339.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 86)), var_sourceCluster_3497, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 86)) ;
              GGS_uint var_targetCluster_3574 ;
              var_symbolTable_2435.method_searchKey (enumerator_3388.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 87)), var_targetCluster_3574, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 87)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_3339.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (GGS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (var_sourceCluster_3497.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (GGS_string (") --> "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (enumerator_3388.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (GGS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (var_targetCluster_3574.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)) ;
              enumerator_3388.gotoNextObject () ;
            }
            enumerator_3339.gotoNextObject () ;
          }
          {
          var_neededConversionForClusterOrder_2061.setter_insertKey (function_sortKey (var_clusterList_2018, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 92)).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 92)), var_overflowCount_3306, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 91)) ;
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 95)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              GGS_string var_s_3931 = GGS_string ("  Pass ").add_operation (var_pass_2174.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 96)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 96)) ;
              GalgasBool test_7 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_7) {
                test_7 = GGS_bool (ComparisonKind::equal, var_overflowCount_3306.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_7) {
                  var_s_3931.plusAssignOperation(GGS_string ("no branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)) ;
                }
              }
              if (GalgasBool::boolFalse == test_7) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_overflowCount_3306.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    var_s_3931.plusAssignOperation(GGS_string ("1 branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 100)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  var_s_3931.plusAssignOperation(var_overflowCount_3306.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)).add_operation (GGS_string (" branch overflows"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)) ;
                }
              }
              {
              routine_print_3F_ (var_s_3931, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)) ;
              }
            }
          }
          GGS_bool var_correctionLoop_4254 = GGS_bool (true) ;
          UpEnumerator_branchOverflowMapDictionary enumerator_4291 (var_overflowMap_3270.readProperty_dictionary ()) ;
          bool bool_9 = var_correctionLoop_4254.isValidAndTrue () ;
          if (enumerator_4291.hasCurrentObject () && bool_9) {
            while (enumerator_4291.hasCurrentObject () && bool_9) {
              UpEnumerator_stringlist enumerator_4361 (enumerator_4291.current_mList (HERE)) ;
              bool bool_10 = var_correctionLoop_4254.isValidAndTrue () ;
              if (enumerator_4361.hasCurrentObject () && bool_10) {
                while (enumerator_4361.hasCurrentObject () && bool_10) {
                  GGS_uint var_targetCluster_4465 ;
                  var_symbolTable_2435.method_searchKey (enumerator_4361.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 110)), var_targetCluster_4465, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 110)) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_targetCluster_4465.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 111)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      GGS_uint var_sourceCluster_4587 ;
                      var_symbolTable_2435.method_searchKey (enumerator_4291.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)), var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = GGS_bool (ComparisonKind::equal, var_sourceCluster_4587.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 113)).objectCompare (var_targetCluster_4465)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          var_correctionLoop_4254 = GGS_bool (false) ;
                          var_continue_2144 = GGS_bool (true) ;
                          GGS_ipic_31__38_BlockList var_last_4791 ;
                          {
                          var_clusterList_2018.setter_removeAtIndex (var_last_4791, var_targetCluster_4465, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 116)) ;
                          }
                          GGS_ipic_31__38_BlockList var_first_4878 ;
                          {
                          var_clusterList_2018.setter_removeAtIndex (var_first_4878, var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 117)) ;
                          }
                          {
                          var_clusterList_2018.setter_insertAtIndex (var_first_4878.add_operation (var_last_4791, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 118)), var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 118)) ;
                          }
                          GGS_string var_m_5000 = GGS_string ("merge #").add_operation (var_targetCluster_4465.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)).add_operation (GGS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)).add_operation (var_sourceCluster_4587.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)) ;
                          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_5000, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)) ;
                          GalgasBool test_13 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_13) {
                            test_13 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).boolEnum () ;
                            if (GalgasBool::boolTrue == test_13) {
                              {
                              routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_5000, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)) ;
                              }
                            }
                          }
                        }
                      }
                      if (GalgasBool::boolFalse == test_12) {
                        GalgasBool test_14 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_14) {
                          test_14 = GGS_bool (ComparisonKind::equal, var_sourceCluster_4587.objectCompare (var_targetCluster_4465.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)))).boolEnum () ;
                          if (GalgasBool::boolTrue == test_14) {
                            var_correctionLoop_4254 = GGS_bool (false) ;
                            var_continue_2144 = GGS_bool (true) ;
                            GGS_ipic_31__38_BlockList var_last_5415 ;
                            {
                            var_clusterList_2018.setter_removeAtIndex (var_last_5415, var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 127)) ;
                            }
                            GGS_ipic_31__38_BlockList var_first_5502 ;
                            {
                            var_clusterList_2018.setter_removeAtIndex (var_first_5502, var_targetCluster_4465, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 128)) ;
                            }
                            {
                            var_clusterList_2018.setter_insertAtIndex (var_first_5502.add_operation (var_last_5415, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 129)), var_targetCluster_4465, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 129)) ;
                            }
                            GGS_string var_m_5624 = GGS_string ("merge #").add_operation (var_sourceCluster_4587.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)).add_operation (GGS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)).add_operation (var_targetCluster_4465.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)) ;
                            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_5624, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)) ;
                            GalgasBool test_15 = GalgasBool::boolTrue ;
                            if (GalgasBool::boolTrue == test_15) {
                              test_15 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).boolEnum () ;
                              if (GalgasBool::boolTrue == test_15) {
                                {
                                routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_5624, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)) ;
                                }
                              }
                            }
                          }
                        }
                        if (GalgasBool::boolFalse == test_14) {
                          GalgasBool test_16 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_16) {
                            test_16 = GGS_bool (ComparisonKind::lowerThan, var_sourceCluster_4587.objectCompare (var_targetCluster_4465)).boolEnum () ;
                            if (GalgasBool::boolTrue == test_16) {
                              GGS_clusterList var_candidate_5931 = var_clusterList_2018 ;
                              GGS_ipic_31__38_BlockList var_b_6018 ;
                              {
                              var_candidate_5931.setter_removeAtIndex (var_b_6018, var_targetCluster_4465, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 137)) ;
                              }
                              {
                              var_candidate_5931.setter_insertAtIndex (var_b_6018, var_targetCluster_4465.add_operation (var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 138)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 138)) ;
                              }
                              GalgasBool test_17 = GalgasBool::boolTrue ;
                              if (GalgasBool::boolTrue == test_17) {
                                test_17 = var_neededConversionForClusterOrder_2061.getter_hasKey (function_sortKey (var_candidate_5931, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)).boolEnum () ;
                                if (GalgasBool::boolTrue == test_17) {
                                  var_clusterList_2018 = var_candidate_5931 ;
                                  var_correctionLoop_4254 = GGS_bool (false) ;
                                  var_continue_2144 = GGS_bool (true) ;
                                  GGS_string var_m_6348 = GGS_string ("roll up [#").add_operation (var_targetCluster_4465.add_operation (var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)).add_operation (GGS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)).add_operation (var_targetCluster_4465.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 143)) ;
                                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_6348, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 144)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 144)) ;
                                  GalgasBool test_18 = GalgasBool::boolTrue ;
                                  if (GalgasBool::boolTrue == test_18) {
                                    test_18 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).boolEnum () ;
                                    if (GalgasBool::boolTrue == test_18) {
                                      {
                                      routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_6348, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)) ;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if (GalgasBool::boolFalse == test_16) {
                            GalgasBool test_19 = GalgasBool::boolTrue ;
                            if (GalgasBool::boolTrue == test_19) {
                              test_19 = GGS_bool (ComparisonKind::greaterThan, var_sourceCluster_4587.objectCompare (var_targetCluster_4465)).boolEnum () ;
                              if (GalgasBool::boolTrue == test_19) {
                                GGS_clusterList var_candidate_6704 = var_clusterList_2018 ;
                                GGS_ipic_31__38_BlockList var_b_6791 ;
                                {
                                var_candidate_6704.setter_removeAtIndex (var_b_6791, var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 151)) ;
                                }
                                {
                                var_candidate_6704.setter_insertAtIndex (var_b_6791, var_targetCluster_4465.add_operation (var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 152)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 152)) ;
                                }
                                GalgasBool test_20 = GalgasBool::boolTrue ;
                                if (GalgasBool::boolTrue == test_20) {
                                  test_20 = var_neededConversionForClusterOrder_2061.getter_hasKey (function_sortKey (var_candidate_6704, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)).boolEnum () ;
                                  if (GalgasBool::boolTrue == test_20) {
                                    var_clusterList_2018 = var_candidate_6704 ;
                                    var_correctionLoop_4254 = GGS_bool (false) ;
                                    var_continue_2144 = GGS_bool (true) ;
                                    GGS_string var_m_7121 = GGS_string ("roll up [#").add_operation (var_targetCluster_4465.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)).add_operation (GGS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)).add_operation (var_targetCluster_4465.add_operation (var_sourceCluster_4587, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 157)) ;
                                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_7121, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 158)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 158)) ;
                                    GalgasBool test_21 = GalgasBool::boolTrue ;
                                    if (GalgasBool::boolTrue == test_21) {
                                      test_21 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).boolEnum () ;
                                      if (GalgasBool::boolTrue == test_21) {
                                        {
                                        routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_7121, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)) ;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  enumerator_4361.gotoNextObject () ;
                  if (enumerator_4361.hasCurrentObject ()) {
                    bool_10 = var_correctionLoop_4254.isValidAndTrue () ;
                  }
                }
              }
              enumerator_4291.gotoNextObject () ;
              if (enumerator_4291.hasCurrentObject ()) {
                bool_9 = var_correctionLoop_4254.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 167)).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              {
              routine_print_3F_ (GGS_string (".\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 168)) ;
              }
            }
          }
        }
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 171)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        {
        routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 172)) ;
        }
      }
    }
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 174)) ;
    GGS_ipic_31__38_BlockList var_newBlockList_7704 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
    var_continue_2144 = GGS_bool (true) ;
    UpEnumerator_ipic_31__38_BlockList enumerator_7811 (ioArgument_ioBlockList) ;
    bool bool_24 = var_continue_2144.isValidAndTrue () ;
    if (enumerator_7811.hasCurrentObject () && bool_24) {
      while (enumerator_7811.hasCurrentObject () && bool_24) {
        var_continue_2144 = GGS_bool (ComparisonKind::notEqual, enumerator_7811.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 180)))) ;
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_continue_2144.boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            var_newBlockList_7704.addAssignOperation (enumerator_7811.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 182)) ;
          }
        }
        enumerator_7811.gotoNextObject () ;
        if (enumerator_7811.hasCurrentObject ()) {
          bool_24 = var_continue_2144.isValidAndTrue () ;
        }
      }
    }
    UpEnumerator_clusterList enumerator_8013 (var_clusterList_2018) ;
    while (enumerator_8013.hasCurrentObject ()) {
      var_newBlockList_7704.plusAssignOperation(enumerator_8013.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 187)) ;
      enumerator_8013.gotoNextObject () ;
    }
    GGS_uint var_insertionIndex_8143 = var_newBlockList_7704.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 190)) ;
    var_continue_2144 = GGS_bool (true) ;
    DownEnumerator_ipic_31__38_BlockList enumerator_8212 (ioArgument_ioBlockList) ;
    bool bool_26 = var_continue_2144.isValidAndTrue () ;
    if (enumerator_8212.hasCurrentObject () && bool_26) {
      while (enumerator_8212.hasCurrentObject () && bool_26) {
        var_continue_2144 = GGS_bool (ComparisonKind::notEqual, enumerator_8212.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 193)))) ;
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          test_27 = var_continue_2144.boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            {
            var_newBlockList_7704.setter_insertAtIndex (enumerator_8212.current_mBlock (HERE), var_insertionIndex_8143, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 195)) ;
            }
          }
        }
        enumerator_8212.gotoNextObject () ;
        if (enumerator_8212.hasCurrentObject ()) {
          bool_26 = var_continue_2144.isValidAndTrue () ;
        }
      }
    }
    ioArgument_ioBlockList = var_newBlockList_7704 ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                                         GGS_uint & outArgument_outMin,
                                                                         GGS_uint & outArgument_outMax,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                        const GGS_string /* constinArgument_inNextLabel */,
                                                                        GGS_uint & outArgument_outMin,
                                                                        GGS_uint & outArgument_outMax,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                                         GGS_uint & outArgument_outMin,
                                                                         GGS_uint & outArgument_outMax,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                       const GGS_string constinArgument_inNextLabel,
                                                                       GGS_uint & outArgument_outMin,
                                                                       GGS_uint & outArgument_outMax,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 63)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_min_2108 ;
      GGS_uint var_max_2123 ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_2108, var_max_2123, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 64)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outMin = var_min_2108 ;
          outArgument_outMax = var_max_2123 ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outMin = GGS_uint (uint32_t (2U)).add_operation (var_min_2108, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 69)) ;
        outArgument_outMax = GGS_uint (uint32_t (2U)).add_operation (var_max_2123, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 70)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 73)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GGS_string constinArgument_inNextLabel,
                                                                              GGS_uint & outArgument_outMin,
                                                                              GGS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_2737 ;
  GGS_uint var_trueMax_2750 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_2737, var_trueMax_2750, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 86)) ;
  GGS_uint var_falseMin_2850 ;
  GGS_uint var_falseMax_2864 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, GGS_string::makeEmptyString (), var_falseMin_2850, var_falseMax_2864, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 87)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_2737.objectCompare (var_trueMax_2750)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_2850.objectCompare (var_falseMax_2864)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 89)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_3078 = var_trueMin_2737.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 90)) ;
          GGS_uint var_trueBranchMaxDuration_3124 = var_trueMax_2750.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 91)) ;
          GGS_uint var_falseBranchMinDuration_3170 = var_falseMin_2850.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 92)) ;
          GGS_uint var_falseBranchMaxDuration_3218 = var_falseMax_2864.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 93)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_3170.objectCompare (var_trueBranchMinDuration_3078)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_3170 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_3078 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_3218.objectCompare (var_trueBranchMaxDuration_3124)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_3218 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_3124 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_uint var_trueBranchMinDuration_3523 = var_trueMin_2737.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 97)) ;
        GGS_uint var_trueBranchMaxDuration_3569 = var_trueMax_2750.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 98)) ;
        GGS_uint var_falseBranchMinDuration_3615 = var_falseMin_2850.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 99)) ;
        GGS_uint var_falseBranchMaxDuration_3663 = var_falseMax_2864.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 100)) ;
        GGS_uint temp_10 ;
        const GalgasBool test_11 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_3615.objectCompare (var_trueBranchMinDuration_3523)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          temp_10 = var_falseBranchMinDuration_3615 ;
        }else if (GalgasBool::boolFalse == test_11) {
          temp_10 = var_trueBranchMinDuration_3523 ;
        }
        outArgument_outMin = temp_10 ;
        GGS_uint temp_12 ;
        const GalgasBool test_13 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_3663.objectCompare (var_trueBranchMaxDuration_3569)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          temp_12 = var_falseBranchMaxDuration_3663 ;
        }else if (GalgasBool::boolFalse == test_13) {
          temp_12 = var_trueBranchMaxDuration_3569 ;
        }
        outArgument_outMax = temp_12 ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 105)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                    const GGS_string constinArgument_inNextLabel,
                                                                                    GGS_uint & outArgument_outMin,
                                                                                    GGS_uint & outArgument_outMax,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_4428 ;
  GGS_uint var_trueMax_4441 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_4428, var_trueMax_4441, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 118)) ;
  GGS_uint var_falseMin_4550 ;
  GGS_uint var_falseMax_4564 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_4550, var_falseMax_4564, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 119)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_4428.objectCompare (var_trueMax_4441)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_4550.objectCompare (var_falseMax_4564)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 121)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_4778 = var_trueMin_4428.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 122)) ;
          GGS_uint var_trueBranchMaxDuration_4824 = var_trueMax_4441.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 123)) ;
          GGS_uint var_falseBranchMinDuration_4870 = var_falseMin_4550.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 124)) ;
          GGS_uint var_falseBranchMaxDuration_4918 = var_falseMax_4564.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 125)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_4870.objectCompare (var_trueBranchMinDuration_4778)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_4870 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_4778 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_4918.objectCompare (var_trueBranchMaxDuration_4824)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_4918 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_4824 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_uint var_trueBranchMinDuration_5223 = var_trueMin_4428.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 129)) ;
        GGS_uint var_trueBranchMaxDuration_5269 = var_trueMax_4441.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 130)) ;
        GGS_uint var_falseBranchMinDuration_5315 = var_falseMin_4550.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 131)) ;
        GGS_uint var_falseBranchMaxDuration_5363 = var_falseMax_4564.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 132)) ;
        GGS_uint temp_10 ;
        const GalgasBool test_11 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_5315.objectCompare (var_trueBranchMinDuration_5223)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          temp_10 = var_falseBranchMinDuration_5315 ;
        }else if (GalgasBool::boolFalse == test_11) {
          temp_10 = var_trueBranchMinDuration_5223 ;
        }
        outArgument_outMin = temp_10 ;
        GGS_uint temp_12 ;
        const GalgasBool test_13 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_5363.objectCompare (var_trueBranchMaxDuration_5269)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          temp_12 = var_falseBranchMaxDuration_5363 ;
        }else if (GalgasBool::boolFalse == test_13) {
          temp_12 = var_trueBranchMaxDuration_5269 ;
        }
        outArgument_outMax = temp_12 ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 137)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                         const GGS_string constinArgument_inNextLabel,
                                                                         GGS_uint & outArgument_outMin,
                                                                         GGS_uint & outArgument_outMax,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_6117 ;
  GGS_uint var_trueMax_6130 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_6117, var_trueMax_6130, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 150)) ;
  GGS_uint var_falseMin_6239 ;
  GGS_uint var_falseMax_6253 ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_6239, var_falseMax_6253, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 151)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_6117.objectCompare (var_trueMax_6130)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_6239.objectCompare (var_falseMax_6253)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 153)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_6467 = var_trueMin_6117.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 154)) ;
          GGS_uint var_trueBranchMaxDuration_6513 = var_trueMax_6130.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 155)) ;
          GGS_uint var_falseBranchMinDuration_6559 = var_falseMin_6239.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 156)) ;
          GGS_uint var_falseBranchMaxDuration_6607 = var_falseMax_6253.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 157)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_6559.objectCompare (var_trueBranchMinDuration_6467)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_6559 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_6467 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_6607.objectCompare (var_trueBranchMaxDuration_6513)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_6607 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_6513 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_pic_31__38_BitTestTerminator temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_uint var_falseBranchMinDuration_7035 = var_falseMin_6239.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 161)) ;
            GGS_uint var_falseBranchMaxDuration_7083 = var_falseMax_6253.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 162)) ;
            GGS_uint var_trueBranchMinDuration_7131 = var_trueMin_6117.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 163)) ;
            GGS_uint var_trueBranchMaxDuration_7177 = var_trueMax_6130.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 164)) ;
            GGS_uint temp_12 ;
            const GalgasBool test_13 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_7035.objectCompare (var_trueBranchMinDuration_7131)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_7035 ;
            }else if (GalgasBool::boolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_7131 ;
            }
            outArgument_outMin = temp_12 ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_7083.objectCompare (var_trueBranchMaxDuration_7177)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_7083 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_7177 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_uint var_trueBranchMinDuration_7480 = var_trueMin_6117.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 168)) ;
          GGS_uint var_trueBranchMaxDuration_7526 = var_trueMax_6130.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 169)) ;
          GGS_uint var_falseBranchMinDuration_7572 = var_falseMin_6239.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 170)) ;
          GGS_uint var_falseBranchMaxDuration_7620 = var_falseMax_6253.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 171)) ;
          GGS_uint temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_7480.objectCompare (var_falseBranchMinDuration_7572)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_7480 ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_7572 ;
          }
          outArgument_outMin = temp_16 ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_7526.objectCompare (var_falseBranchMaxDuration_7620)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_7526 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_7620 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 176)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                  const GGS_string constinArgument_inNextLabel,
                                                                                  GGS_uint & outArgument_outMin,
                                                                                  GGS_uint & outArgument_outMax,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    GGS_bool test_2 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 189)) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      test_2 = constinArgument_inExploredBlockMap.getter_hasKey (temp_3.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 189)) ;
    }
    test_0 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_trueMin_8488 ;
      GGS_uint var_trueMax_8501 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_4.readProperty_mTargetLabelWhenTrue (), var_trueMin_8488, var_trueMax_8501, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 190)) ;
      GGS_uint var_falseMin_8577 ;
      GGS_uint var_falseMax_8591 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_5.readProperty_mTargetLabelWhenFalse (), var_falseMin_8577, var_falseMax_8591, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 191)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
        test_6 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_uint var_trueBranchMinDuration_8702 = var_trueMin_8488.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 193)) ;
          GGS_uint var_trueBranchMaxDuration_8748 = var_trueMax_8501.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 194)) ;
          GGS_uint var_falseBranchMinDuration_8794 = var_falseMin_8577.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 195)) ;
          GGS_uint var_falseBranchMaxDuration_8842 = var_falseMax_8591.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 196)) ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_8702.objectCompare (var_falseBranchMinDuration_8794)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_trueBranchMinDuration_8702 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_falseBranchMinDuration_8794 ;
          }
          outArgument_outMin = temp_8 ;
          GGS_uint temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_8748.objectCompare (var_falseBranchMaxDuration_8842)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = var_trueBranchMaxDuration_8748 ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = var_falseBranchMaxDuration_8842 ;
          }
          outArgument_outMax = temp_10 ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
          test_12 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GGS_uint var_falseBranchMinDuration_9234 = var_falseMin_8577.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 200)) ;
            GGS_uint var_falseBranchMaxDuration_9282 = var_falseMax_8591.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 201)) ;
            GGS_uint var_trueBranchMinDuration_9330 = var_trueMin_8488.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 202)) ;
            GGS_uint var_trueBranchMaxDuration_9376 = var_trueMax_8501.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 203)) ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_9330.objectCompare (var_falseBranchMinDuration_9234)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_trueBranchMinDuration_9330 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_falseBranchMinDuration_9234 ;
            }
            outArgument_outMin = temp_14 ;
            GGS_uint temp_16 ;
            const GalgasBool test_17 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_9376.objectCompare (var_falseBranchMaxDuration_9282)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              temp_16 = var_trueBranchMaxDuration_9376 ;
            }else if (GalgasBool::boolFalse == test_17) {
              temp_16 = var_falseBranchMaxDuration_9282 ;
            }
            outArgument_outMax = temp_16 ;
          }
        }
        if (GalgasBool::boolFalse == test_12) {
          GGS_uint var_trueBranchMinDuration_9679 = var_trueMin_8488.add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 207)) ;
          GGS_uint var_trueBranchMaxDuration_9725 = var_trueMax_8501.add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 208)) ;
          GGS_uint var_falseBranchMinDuration_9771 = var_falseMin_8577.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 209)) ;
          GGS_uint var_falseBranchMaxDuration_9819 = var_falseMax_8591.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 210)) ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_9679.objectCompare (var_falseBranchMinDuration_9771)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMinDuration_9679 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMinDuration_9771 ;
          }
          outArgument_outMin = temp_18 ;
          GGS_uint temp_20 ;
          const GalgasBool test_21 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_9725.objectCompare (var_falseBranchMaxDuration_9819)).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            temp_20 = var_trueBranchMaxDuration_9725 ;
          }else if (GalgasBool::boolFalse == test_21) {
            temp_20 = var_falseBranchMaxDuration_9819 ;
          }
          outArgument_outMax = temp_20 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 215)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                 const GGS_string constinArgument_inNextLabel,
                                                                                 GGS_uint & outArgument_outMin,
                                                                                 GGS_uint & outArgument_outMax,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueMin_10581 ;
  GGS_uint var_trueMax_10594 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_10581, var_trueMax_10594, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 228)) ;
  GGS_uint var_falseMin_10703 ;
  GGS_uint var_falseMax_10717 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_10703, var_falseMax_10717, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 229)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_trueMin_10581.objectCompare (var_trueMax_10594)) ;
    if (GalgasBool::boolTrue == test_3.boolEnum ()) {
      test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_falseMin_10703.objectCompare (var_falseMax_10717)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 231)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_trueBranchMinDuration_10931 = var_trueMin_10581.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 232)) ;
          GGS_uint var_trueBranchMaxDuration_10977 = var_trueMax_10594.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 233)) ;
          GGS_uint var_falseBranchMinDuration_11023 = var_falseMin_10703.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 234)) ;
          GGS_uint var_falseBranchMaxDuration_11071 = var_falseMax_10717.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 235)) ;
          GGS_uint temp_6 ;
          const GalgasBool test_7 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_10931.objectCompare (var_falseBranchMinDuration_11023)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = var_trueBranchMinDuration_10931 ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = var_falseBranchMinDuration_11023 ;
          }
          outArgument_outMin = temp_6 ;
          GGS_uint temp_8 ;
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_10977.objectCompare (var_falseBranchMaxDuration_11071)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            temp_8 = var_trueBranchMaxDuration_10977 ;
          }else if (GalgasBool::boolFalse == test_9) {
            temp_8 = var_falseBranchMaxDuration_11071 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 238)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_uint var_falseBranchMinDuration_11499 = var_falseMin_10703.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 239)) ;
            GGS_uint var_falseBranchMaxDuration_11547 = var_falseMax_10717.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 240)) ;
            GGS_uint var_trueBranchMinDuration_11595 = var_trueMin_10581.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 241)) ;
            GGS_uint var_trueBranchMaxDuration_11641 = var_trueMax_10594.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 242)) ;
            GGS_uint temp_12 ;
            const GalgasBool test_13 = GGS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_11499.objectCompare (var_trueBranchMinDuration_11595)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_11499 ;
            }else if (GalgasBool::boolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_11595 ;
            }
            outArgument_outMin = temp_12 ;
            GGS_uint temp_14 ;
            const GalgasBool test_15 = GGS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_11547.objectCompare (var_trueBranchMaxDuration_11641)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_11547 ;
            }else if (GalgasBool::boolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_11641 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_uint var_trueBranchMinDuration_11944 = var_trueMin_10581.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 246)) ;
          GGS_uint var_trueBranchMaxDuration_11990 = var_trueMax_10594.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 247)) ;
          GGS_uint var_falseBranchMinDuration_12036 = var_falseMin_10703.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 248)) ;
          GGS_uint var_falseBranchMaxDuration_12084 = var_falseMax_10717.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 249)) ;
          GGS_uint temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_11944.objectCompare (var_falseBranchMinDuration_12036)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_11944 ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_12036 ;
          }
          outArgument_outMin = temp_16 ;
          GGS_uint temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_11990.objectCompare (var_falseBranchMaxDuration_12084)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_11990 ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_12084 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 254)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                               const GGS_string /* constinArgument_inNextLabel */,
                                                                               GGS_uint & outArgument_outMin,
                                                                               GGS_uint & outArgument_outMax,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 267)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_12798 = GGS_bool (true) ;
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_12819 (temp_0.readProperty_mTargetLabels ()) ;
  bool bool_1 = var_solved_12798.isValidAndTrue () ;
  if (enumerator_12819.hasCurrentObject () && bool_1) {
    while (enumerator_12819.hasCurrentObject () && bool_1) {
      var_solved_12798 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_12819.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 272)) ;
      enumerator_12819.gotoNextObject () ;
      if (enumerator_12819.hasCurrentObject ()) {
        bool_1 = var_solved_12798.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_12798.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_12959 (temp_3.readProperty_mTargetLabels ()) ;
      while (enumerator_12959.hasCurrentObject ()) {
        GGS_uint var_min_13041 ;
        GGS_uint var_max_13050 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_12959.current_mValue (HERE), var_min_13041, var_max_13050, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 277)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::lowerThan, var_min_13041.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            outArgument_outMin = var_min_13041 ;
          }
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_max_13050.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            outArgument_outMax = var_max_13050 ;
          }
        }
        enumerator_12959.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 286)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 287)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                const GGS_string /* constinArgument_inNextLabel */,
                                                                                GGS_uint & outArgument_outMin,
                                                                                GGS_uint & outArgument_outMax,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (11U)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_duration_computations.galgas", 300)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outMin.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 301)) ;
    }
  }
  outArgument_outMax = outArgument_outMin ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator terminatorMinMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorMinMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GGS_string /* constinArgument_inNextLabel */,
                                                                              GGS_uint & outArgument_outMin,
                                                                              GGS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 314)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_14114 = GGS_bool (true) ;
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_14135 (temp_0.readProperty_mTargetLabels ()) ;
  bool bool_1 = var_solved_14114.isValidAndTrue () ;
  if (enumerator_14135.hasCurrentObject () && bool_1) {
    while (enumerator_14135.hasCurrentObject () && bool_1) {
      var_solved_14114 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_14135.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 319)) ;
      enumerator_14135.gotoNextObject () ;
      if (enumerator_14135.hasCurrentObject ()) {
        bool_1 = var_solved_14114.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_14114.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_14275 (temp_3.readProperty_mTargetLabels ()) ;
      while (enumerator_14275.hasCurrentObject ()) {
        GGS_uint var_min_14357 ;
        GGS_uint var_max_14366 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_14275.current_mValue (HERE), var_min_14357, var_max_14366, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 324)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::lowerThan, var_min_14357.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            outArgument_outMin = var_min_14357 ;
          }
        }
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, var_max_14366.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            outArgument_outMax = var_max_14366 ;
          }
        }
        enumerator_14275.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 333)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 334)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                         GGS_uint & outArgument_outMin,
                                                         GGS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                        const GGS_string /* constinArgument_inNextLabel */,
                                                        GGS_uint & outArgument_outMin,
                                                        GGS_uint & outArgument_outMax,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_duration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GGS_string /* constinArgument_inNextLabel */,
                                                         GGS_uint & outArgument_outMin,
                                                         GGS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator duration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_duration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                       const GGS_string constinArgument_inNextLabel,
                                                       GGS_uint & outArgument_outMin,
                                                       GGS_uint & outArgument_outMax,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 392)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_min_16449 ;
      GGS_uint var_max_16458 ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_16449, var_max_16458, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 393)) ;
      outArgument_outMin = var_min_16449 ;
      outArgument_outMax = var_max_16458 ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 397)) ;
          outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 398)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 401)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MNOP minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                      GGS_uint & outArgument_outMin,
                                                                                      GGS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                        GGS_uint & outArgument_outMin,
                                                                                        GGS_uint & outArgument_outMax,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 459)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 460)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_LFSR minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                      GGS_uint & outArgument_outMin,
                                                                                      GGS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_minMaxDuration (const GGS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                       GGS_uint & outArgument_outMin,
                                                                                       GGS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint (uint32_t (2U)) ;
  outArgument_outMax = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                      GGS_uint & outArgument_outMin,
                                                                      GGS_uint & outArgument_outMax,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 492)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mTargetLabel (), outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 493)) ;
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 494)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 495)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 497)) ;
    outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                   GGS_uint & outArgument_outMin,
                                                                                   GGS_uint & outArgument_outMax,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inExploredBlockMap, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 509)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, outArgument_outMin.objectCompare (outArgument_outMax)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 511)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 512)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall minMaxDuration'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_minMaxDuration (const GGS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                                   GGS_uint & outArgument_outMin,
                                                                                                   GGS_uint & outArgument_outMax,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 523)) ;
  outArgument_outMax = GGS_uint (uint32_t (0U)) ;
  GGS_bool var_solved_20251 = GGS_bool (true) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_20280 (temp_0.readProperty_mTargetInstructions ()) ;
  bool bool_1 = var_solved_20251.isValidAndTrue () ;
  if (enumerator_20280.hasCurrentObject () && bool_1) {
    while (enumerator_20280.hasCurrentObject () && bool_1) {
      GGS_uint var_min_20378 ;
      GGS_uint var_max_20387 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_20280.current_mInstruction (HERE).ptr (), constinArgument_inExploredBlockMap, var_min_20378, var_max_20387, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 527)) ;
      var_solved_20251 = GGS_bool (ComparisonKind::lowerOrEqual, var_min_20378.objectCompare (var_max_20387)) ;
      enumerator_20280.gotoNextObject () ;
      if (enumerator_20280.hasCurrentObject ()) {
        bool_1 = var_solved_20251.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_solved_20251.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
      UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_20456 (temp_3.readProperty_mTargetInstructions ()) ;
      GGS_uint index_20443 (uint32_t (0)) ;
      while (enumerator_20456.hasCurrentObject ()) {
        GGS_uint var_min_20551 ;
        GGS_uint var_max_20562 ;
        callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_20456.current_mInstruction (HERE).ptr (), constinArgument_inExploredBlockMap, var_min_20551, var_max_20562, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 532)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
          test_4 = GGS_bool (ComparisonKind::lowerThan, index_20443.objectCompare (temp_5.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas", 534)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 534)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_min_20551 = var_min_20551.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 535)) ;
            var_max_20562 = var_max_20562.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 536)) ;
          }
        }
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::lowerThan, var_min_20551.objectCompare (outArgument_outMin)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            outArgument_outMin = var_min_20551 ;
          }
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::greaterThan, var_max_20562.objectCompare (outArgument_outMax)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            outArgument_outMax = var_max_20562 ;
          }
        }
        enumerator_20456.gotoNextObject () ;
        index_20443.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 531)) ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 546)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GGS_uint (uint32_t (10U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 547)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18DurationComputations&!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_DurationComputations_26__21_ (GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                       GGS_blockDurationMap & outArgument_outBlockDurationMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBlockDurationMap.drop () ; // Release 'out' argument
  GGS_stringlist var_nextLabelList_21434 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_21461 (ioArgument_ioBlockList) ;
  while (enumerator_21461.hasCurrentObject ()) {
    var_nextLabelList_21434.addAssignOperation (enumerator_21461.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 564)) ;
    enumerator_21461.gotoNextObject () ;
  }
  var_nextLabelList_21434.addAssignOperation (GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 566)) ;
  {
  GGS_string joker_21587 ; // Joker input parameter
  var_nextLabelList_21434.setter_popFirst (joker_21587, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 567)) ;
  }
  outArgument_outBlockDurationMap = GGS_blockDurationMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continue_21649 = GGS_bool (true) ;
  if (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).isValid ()) {
    uint32_t variant_21667 = ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 571)).uintValue () ;
    bool loop_21667 = true ;
    while (loop_21667) {
      loop_21667 = var_continue_21649.isValid () ;
      if (loop_21667) {
        loop_21667 = var_continue_21649.boolValue () ;
      }
      if (loop_21667 && (0 == variant_21667)) {
        loop_21667 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_duration_computations.galgas", 571)) ;
      }
      if (loop_21667) {
        variant_21667 -= 1 ;
        var_continue_21649 = GGS_bool (false) ;
        GGS_ipic_31__38_BlockList var_tempBlockList_21745 = ioArgument_ioBlockList ;
        ioArgument_ioBlockList = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_21804 (var_tempBlockList_21745) ;
        UpEnumerator_stringlist enumerator_21831 (var_nextLabelList_21434) ;
        while (enumerator_21804.hasCurrentObject () && enumerator_21831.hasCurrentObject ()) {
          GGS_ipic_31__38_Block var_newBlock_21930 ;
          extensionMethod_computeDuration (enumerator_21804.current_mBlock (HERE), outArgument_outBlockDurationMap, enumerator_21831.current_mValue (HERE), var_newBlock_21930, var_continue_21649, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 576)) ;
          ioArgument_ioBlockList.addAssignOperation (var_newBlock_21930  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 577)) ;
          enumerator_21804.gotoNextObject () ;
          enumerator_21831.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18PrintDurations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_PrintDurations_26__3F_ (GGS_string & ioArgument_ioListFileContents,
                                                 const GGS_blockDurationMap constinArgument_inBlockDurationMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 636)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 636)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("TIMINGS").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 637)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 638)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 638)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 638)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Label").getter_stringByLeftPadding (GGS_uint (uint32_t (100U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 639)).add_operation (GGS_string (": min ... max\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 639)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 639)) ;
  UpEnumerator_blockDurationMap enumerator_24077 (constinArgument_inBlockDurationMap) ;
  while (enumerator_24077.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssignOperation(enumerator_24077.current_lkey (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (100U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (enumerator_24077.current_mMinDuration (HERE).getter_string (SOURCE_FILE ("ipic18_duration_computations.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (GGS_string (" ... "), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (enumerator_24077.current_mMaxDuration (HERE).getter_string (SOURCE_FILE ("ipic18_duration_computations.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 641)) ;
    enumerator_24077.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 643)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                        const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                        const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                        const GGS_string /* constinArgument_inBlockLabel */,
                                                                        GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GGS_string /* constinArgument_inBlockLabel */,
                                                                         GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

