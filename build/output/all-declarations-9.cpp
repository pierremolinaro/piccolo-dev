#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@pic18RegisterComparison mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_pic_31__38_RegisterComparison & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparison temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_pic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_notEqual:
    {
      result_outResult = GGS_string ("!=") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_equal:
    {
      result_outResult = GGS_string ("==") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greaterOrEqual:
    {
      result_outResult = GGS_string (">=") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greater:
    {
      result_outResult = GGS_string (">") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lowerOrEqual:
    {
      result_outResult = GGS_string ("<=") ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lower:
    {
      result_outResult = GGS_string ("<") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@FA_instruction_base_code mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_FA_5F_instruction_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_FA_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      result_outResult = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      result_outResult = GGS_string ("CPFSEQ") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      result_outResult = GGS_string ("CPFSGT") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      result_outResult = GGS_string ("CPFSLT") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      result_outResult = GGS_string ("MOVWF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      result_outResult = GGS_string ("MULWF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      result_outResult = GGS_string ("NEGF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      result_outResult = GGS_string ("SETF") ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      result_outResult = GGS_string ("TSTFSZ") ;
    }
    break ;
  }
//---
  return result_outResult ;
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
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_649, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 19)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 20)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_765 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_649.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_765.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_649.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 24)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 24)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 24)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 24)) ;
    }
  }
  GGS_uintlist var_registerAddressList_966 ;
  GGS_uint var_size_1001 ;
  GGS_registerProtection var_protection_1044 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_string joker_1032 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_966, var_size_1001, outArgument_outBitSliceTable, joker_1032, var_protection_1044, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 27)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GGS_bool (true), var_protection_1044, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 35)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_649.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 37)).objectCompare (var_size_1001)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_1001.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 38)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 38)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 38)) ;
    }
  }
  GGS_uintlist var_acceptableBanks_1306 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_uintlist enumerator_1343 (var_registerAddressList_966) ;
  while (enumerator_1343.hasCurrentObject ()) {
    var_acceptableBanks_1306.addAssignOperation (enumerator_1343.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 43)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 43))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 43)) ;
    enumerator_1343.gotoNextObject () ;
  }
  GGS_uint var_registerAddress_1438 = GGS_uint (uint32_t (0U)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GGS_uint var_bank_1577 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_ok_1600 = GGS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1614 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1614 = true ;
        while (loop_1614) {
          loop_1614 = GGS_bool (ComparisonKind::lowerThan, var_bank_1577.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1600 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 51)).isValid () ;
          if (loop_1614) {
            loop_1614 = GGS_bool (ComparisonKind::lowerThan, var_bank_1577.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1600 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 51)).boolValue () ;
          }
          if (loop_1614 && (0 == variant_1614)) {
            loop_1614 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 51)) ;
          }
          if (loop_1614) {
            variant_1614 -= 1 ;
            var_ok_1600 = GGS_bool (false) ;
            UpEnumerator_uintlist enumerator_1706 (var_registerAddressList_966) ;
            bool bool_10 = var_ok_1600.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 53)).isValidAndTrue () ;
            if (enumerator_1706.hasCurrentObject () && bool_10) {
              while (enumerator_1706.hasCurrentObject () && bool_10) {
                var_ok_1600 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_1706.current_mValue (HERE).objectCompare (var_bank_1577.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 54)))).operator_and (GGS_bool (ComparisonKind::lowerThan, enumerator_1706.current_mValue (HERE).objectCompare (var_bank_1577.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 54)).add_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 54)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 54)) ;
                var_registerAddress_1438 = enumerator_1706.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 55)) ;
                enumerator_1706.gotoNextObject () ;
                if (enumerator_1706.hasCurrentObject ()) {
                  bool_10 = var_ok_1600.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 53)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1577.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 57)) ;
          }
        }
      }
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = var_ok_1600.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 59)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_string var_acceptableBankMessage_1935 = GGS_string::makeEmptyString () ;
          UpEnumerator_uintlist enumerator_1973 (var_registerAddressList_966) ;
          while (enumerator_1973.hasCurrentObject ()) {
            var_acceptableBankMessage_1935.plusAssignOperation(enumerator_1973.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 62)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 62)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 62)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 62)) ;
            enumerator_1973.gotoNextObject () ;
            if (enumerator_1973.hasCurrentObject ()) {
              var_acceptableBankMessage_1935.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 63)) ;
            }
          }
          const GGS_registerExpression temp_12 = this ;
          const GGS_registerExpression temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterName ().readProperty_location (), GGS_string ("as no bank is currently known, the '").add_operation (temp_13.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 65)).add_operation (GGS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 65)).add_operation (var_acceptableBankMessage_1935, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 65)).add_operation (GGS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 65)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 65)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_bool var_found_2359 = GGS_bool (false) ;
    UpEnumerator_uintlist enumerator_2382 (var_registerAddressList_966) ;
    bool bool_15 = var_found_2359.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 69)).isValidAndTrue () ;
    if (enumerator_2382.hasCurrentObject () && bool_15) {
      while (enumerator_2382.hasCurrentObject () && bool_15) {
        var_found_2359 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_2382.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 70)))).operator_and (GGS_bool (ComparisonKind::lowerThan, enumerator_2382.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 70)).add_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 70)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 70)) ;
        var_registerAddress_1438 = enumerator_2382.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 71)) ;
        enumerator_2382.gotoNextObject () ;
        if (enumerator_2382.hasCurrentObject ()) {
          bool_15 = var_found_2359.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 69)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_found_2359.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 73)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_string var_acceptableBankMessage_2608 = GGS_string::makeEmptyString () ;
        UpEnumerator_uintlist enumerator_2646 (var_registerAddressList_966) ;
        while (enumerator_2646.hasCurrentObject ()) {
          var_acceptableBankMessage_2608.plusAssignOperation(enumerator_2646.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 76)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 76)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 76)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 76)) ;
          enumerator_2646.gotoNextObject () ;
          if (enumerator_2646.hasCurrentObject ()) {
            var_acceptableBankMessage_2608.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 77)) ;
          }
        }
        const GGS_registerExpression temp_17 = this ;
        const GGS_registerExpression temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_18.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)).add_operation (GGS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)).add_operation (GGS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)).add_operation (var_acceptableBankMessage_2608, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 79)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GGS_midrange_5F_intermediate_5F_registerExpression::init_21__21_ (var_assemblyString_765, var_registerAddress_1438.add_operation (var_offset_649.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 85)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas3", 85)), inCompiler COMMA_HERE) ;
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
// @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GGS_midrange_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::
init_21__21_ (const GGS_lstring & in_mLabel,
              const GGS_bool & in_mIsDeletable,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (in_mLabel, in_mIsDeletable, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::
midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (const GGS_lstring & in_mLabel,
                                                          const GGS_bool & in_mIsDeletable,
                                                          Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
  mProperty_mIsDeletable = in_mIsDeletable ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mIsDeletable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mIsDeletable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mIsDeletable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                                                                    const GGS_bool & in_mIsDeletable,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mIsDeletable () {
  mProperty_mLabel = in_mLabel ;
  mProperty_mIsDeletable = in_mIsDeletable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsDeletable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel, mProperty_mIsDeletable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
    mProperty_mIsDeletable.printNonNullClassInstanceProperties ("mIsDeletable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_pseudo_LABEL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ("midrange_intermediate_pseudo_LABEL",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_JUMP::objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_JUMP::GGS_midrange_5F_intermediate_5F_JUMP (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP GGS_midrange_5F_intermediate_5F_JUMP::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                      const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::
midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mTargetLabel,
                                                       const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                       const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mBit_31__31_ = in_mBit_31__31_ ;
  mProperty_mBit_31__32_ = in_mBit_31__32_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP::GGS_midrange_5F_intermediate_5F_JUMP (const cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_intermediate_5F_JUMP::readProperty_mBit_31__31_ (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mBit_31__31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_intermediate_5F_JUMP::readProperty_mBit_31__32_ (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JUMP * p = (cPtr_midrange_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mBit_31__32_ ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mBit_31__31_ (),
mProperty_mBit_31__32_ () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JUMP::cPtr_midrange_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                              const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mBit_31__31_ (),
mProperty_mBit_31__32_ () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mBit_31__31_ = in_mBit_31__31_ ;
  mProperty_mBit_31__32_ = in_mBit_31__32_ ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

void cPtr_midrange_5F_intermediate_5F_JUMP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mBit_31__31_, mProperty_mBit_31__32_, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mBit_31__31_.printNonNullClassInstanceProperties ("mBit11") ;
    mProperty_mBit_31__32_.printNonNullClassInstanceProperties ("mBit12") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ("midrange_intermediate_JUMP",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JUMP GGS_midrange_5F_intermediate_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JUMP result ;
  const GGS_midrange_5F_intermediate_5F_JUMP * p = (const GGS_midrange_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_GOTO::objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_GOTO::GGS_midrange_5F_intermediate_5F_GOTO (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO GGS_midrange_5F_intermediate_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::
midrange_5F_intermediate_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO::GGS_midrange_5F_intermediate_5F_GOTO (const cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_GOTO * p = (cPtr_midrange_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_GOTO::cPtr_midrange_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

void cPtr_midrange_5F_intermediate_5F_GOTO::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ("midrange_intermediate_GOTO",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_GOTO GGS_midrange_5F_intermediate_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_GOTO result ;
  const GGS_midrange_5F_intermediate_5F_GOTO * p = (const GGS_midrange_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_CALL::objectCompare (const GGS_midrange_5F_intermediate_5F_CALL & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_CALL::GGS_midrange_5F_intermediate_5F_CALL (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL GGS_midrange_5F_intermediate_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_CALL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::
midrange_5F_intermediate_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL::GGS_midrange_5F_intermediate_5F_CALL (const cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_CALL * p = (cPtr_midrange_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_CALL::cPtr_midrange_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

void cPtr_midrange_5F_intermediate_5F_CALL::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ("midrange_intermediate_CALL",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_CALL GGS_midrange_5F_intermediate_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_CALL result ;
  const GGS_midrange_5F_intermediate_5F_CALL * p = (const GGS_midrange_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_JSR::objectCompare (const GGS_midrange_5F_intermediate_5F_JSR & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_JSR::GGS_midrange_5F_intermediate_5F_JSR (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR GGS_midrange_5F_intermediate_5F_JSR::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                      const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::
midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTargetLabel,
                                                      const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                      const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mBit_31__31_ = in_mBit_31__31_ ;
  mProperty_mBit_31__32_ = in_mBit_31__32_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR::GGS_midrange_5F_intermediate_5F_JSR (const cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_intermediate_5F_JSR::readProperty_mBit_31__31_ (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mBit_31__31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_call_5F_goto_5F_bit GGS_midrange_5F_intermediate_5F_JSR::readProperty_mBit_31__32_ (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_call_5F_goto_5F_bit () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_JSR * p = (cPtr_midrange_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_JSR) ;
    return p->mProperty_mBit_31__32_ ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mBit_31__31_ (),
mProperty_mBit_31__32_ () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_JSR::cPtr_midrange_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                            const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mBit_31__31_ (),
mProperty_mBit_31__32_ () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mBit_31__31_ = in_mBit_31__31_ ;
  mProperty_mBit_31__32_ = in_mBit_31__32_ ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

void cPtr_midrange_5F_intermediate_5F_JSR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBit_31__31_.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBit_31__32_.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mBit_31__31_, mProperty_mBit_31__32_, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mBit_31__31_.printNonNullClassInstanceProperties ("mBit11") ;
    mProperty_mBit_31__32_.printNonNullClassInstanceProperties ("mBit12") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ("midrange_intermediate_JSR",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_JSR GGS_midrange_5F_intermediate_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JSR result ;
  const GGS_midrange_5F_intermediate_5F_JSR * p = (const GGS_midrange_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) :
GGS_midrange_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::
midrange_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_luint & in_mOccurrenceFactor,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_midrange_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                                                            const GGS_luint & in_mOccurrenceFactor,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ("midrange_intermediate_instruction_MNOP",
                                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP * p = (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_616, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 17)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 18)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_732 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_616.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_732.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_616.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 22)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 22)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 22)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 22)) ;
    }
  }
  GGS_uint var_registerAddress_872 = GGS_uint (uint32_t (0U)) ;
  GGS_uintlist var_registerAddressList_954 ;
  GGS_uint var_size_989 ;
  GGS_registerProtection var_protection_1032 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_string joker_1020 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_954, var_size_989, outArgument_outBitSliceTable, joker_1020, var_protection_1032, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 26)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_1032, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 34)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, var_offset_616.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("offset (").add_operation (var_offset_616.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 37)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 37)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 37)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 37)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_616.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 38)).objectCompare (var_size_989)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_registerExpression temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_989.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 39)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 39)) ;
      }
    }
  }
  GGS_bool var_found_1410 = GGS_bool (false) ;
  UpEnumerator_uintlist enumerator_1431 (var_registerAddressList_954) ;
  bool bool_12 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 43)).isValidAndTrue () ;
  if (enumerator_1431.hasCurrentObject () && bool_12) {
    while (enumerator_1431.hasCurrentObject () && bool_12) {
      var_found_1410 = GGS_bool (ComparisonKind::lowerThan, enumerator_1431.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, enumerator_1431.current_mValue (HERE).objectCompare (GGS_uint (uint32_t (3840U)).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 44)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 44)) ;
      var_registerAddress_872 = enumerator_1431.current_mValue (HERE) ;
      enumerator_1431.gotoNextObject () ;
      if (enumerator_1431.hasCurrentObject ()) {
        bool_12 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 43)).isValidAndTrue () ;
      }
    }
  }
  GGS_bool var_needsBSRaccess_1625 = GGS_bool (false) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 48)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      var_needsBSRaccess_1625 = GGS_bool (true) ;
      var_registerAddressList_954.method_first (var_registerAddress_872, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 50)) ;
      GGS_uint var_neededBank_1757 = var_registerAddress_872.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 51)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 51)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_neededBank_1757.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_registerExpression temp_15 = this ;
          GGS_string var_errorMessage_1851 = GGS_string ("Accessing the '").add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 53)).add_operation (GGS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 53)).add_operation (var_neededBank_1757.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 53)) ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 54)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              var_errorMessage_1851.plusAssignOperation(GGS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 55)) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_errorMessage_1851.plusAssignOperation(GGS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 57)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 57)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 57)) ;
          }
          const GGS_registerExpression temp_17 = this ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), var_errorMessage_1851, fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 59)) ;
        }
      }
    }
  }
  outArgument_outIPICregisterDescription = GGS_ipic_31__38__5F_intermediate_5F_registerExpression::init_21__21__21_ (var_assemblyString_732, var_registerAddress_872.add_operation (var_offset_616.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 65)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 65)), var_needsBSRaccess_1625, inCompiler COMMA_HERE) ;
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
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 79)) ;
  const GGS_registerExpression temp_1 = this ;
  GGS_string var_assemblyString_2886 = temp_1.readProperty_mRegisterName ().readProperty_string () ;
  GGS_sint_36__34_ var_offset_2995 ;
  const GGS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_2995, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 82)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_2995.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_2886.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_2995.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 84)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 84)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 84)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 84)) ;
    }
  }
  GGS_uintlist var_registerAddressList_3170 ;
  GGS_uint var_size_3201 ;
  GGS_registerProtection var_protection_3215 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_bitSliceTable joker_3206_2 ; // Joker input parameter
  GGS_string joker_3206_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_3170, var_size_3201, joker_3206_2, joker_3206_1, var_protection_3215, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 87)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_3215, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 88)) ;
  GGS_uint var_registerAddress_3359 ;
  var_registerAddressList_3170.method_first (var_registerAddress_3359, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 89)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_2995.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 91)).objectCompare (var_size_3201)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_3201.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 92)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 92)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 92)) ;
    }
  }
  outArgument_outIPICregisterDescription = GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::init_21__21_ (var_assemblyString_2886, var_registerAddress_3359.add_operation (var_offset_2995.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 97)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 97)), inCompiler COMMA_HERE) ;
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
  GGS_uintlist var_registerAddressList_4047 ;
  GGS_uint var_size_4078 ;
  GGS_registerProtection var_protection_4092 ;
  const GGS_registerExpression temp_0 = this ;
  GGS_bitSliceTable joker_4083_2 ; // Joker input parameter
  GGS_string joker_4083_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_0.readProperty_mRegisterName (), var_registerAddressList_4047, var_size_4078, joker_4083_2, joker_4083_1, var_protection_4092, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 110)) ;
  const GGS_registerExpression temp_1 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_1.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_4092, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 111)) ;
  GGS_sint_36__34_ var_offset_4268 ;
  const GGS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4268, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 113)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::lowerThan, var_offset_4268.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_registerExpression temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfOffsetExpression (), GGS_string ("offset (").add_operation (var_offset_4268.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 115)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 115)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 115)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 115)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_4268.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 116)).objectCompare (var_size_4078)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_registerExpression temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_4078.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 117)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 117)) ;
        outArgument_outRegisterAddress.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      var_registerAddressList_4047.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 119)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_4268.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 120)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 120)) ;
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
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const GGS_uint constin_inAccessBankSplitOffset,
                                                   const GGS_routineMap constin_inRoutineMap,
                                                   const GGS_registerTable constin_inRegisterTable,
                                                   const GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const GGS_constantMap constin_inConstantMap,
                                                   GGS_uint & io_ioCurrentBank,
                                                   const GGS_bool constin_inShouldPreserveBSR,
                                                   GGS_stringset & io_ioUsedRegisters,
                                                   GGS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
    inObject->method_analyzeSimpleInstruction (constin_inAccessBankSplitOffset, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, io_ioCurrentBank, constin_inShouldPreserveBSR, io_ioUsedRegisters, out_outInstruction, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18ConditionExpression analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCondition (cPtr_pic_31__38_ConditionExpression * inObject,
                                           const GGS_uint constin_inAccessBankSplitOffset,
                                           const GGS_uint constin_inCurrentBank,
                                           const GGS_registerTable constin_inRegisterTable,
                                           const GGS_constantMap constin_inConstantMap,
                                           GGS_uint & io_ioLocalLabelIndex,
                                           GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const GGS_lstring constin_inConditionTrueLabel,
                                           const GGS_lstring constin_inConditionFalseLabel,
                                           GGS_stringset & io_ioUsedRegisters,
                                           GGS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCurrentBlockTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_ConditionExpression) ;
    inObject->method_analyzeCondition (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedBlockList, constin_inConditionTrueLabel, constin_inConditionFalseLabel, io_ioUsedRegisters, out_outCurrentBlockTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTerminator (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GGS_ipic_31__38_BlockList constin_inBlockList,
                                             const GGS_string constin_inBlockLabel,
                                             GGS_bool & io_ioOptimizationDone,
                                             GGS_string & io_ioListFileContents,
                                             GGS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outOptimizedTerminator.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_optimizeTerminator (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTerminator, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_getOptimizedTerminators (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                   const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                   const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                                   GGS_bool & ioArgument_ioOptimizationDone,
                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                   GGS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedTrueTerminator,
                                                                                   GGS_ipic_31__38_SingleInstructionTerminator & outArgument_outOptimizedFalseTerminator,
                                                                                   GGS_bool & outArgument_outIdenticalTerminators,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedTrueTerminator_7315 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedTrueTerminator_7315, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 167)) ;
  GGS_ipic_31__38_SingleInstructionTerminator temp_1 ;
  if (var_optimizedTrueTerminator_7315.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedTrueTerminator_7315.ptr ())) {
      temp_1 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_7315.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedTrueTerminator_7315.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 176)) ;
    }
  }
  outArgument_outOptimizedTrueTerminator = temp_1 ;
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedFalseTerminator_7687 ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_2 = this ;
  callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, ioArgument_ioOptimizationDone, ioArgument_ioListFileContents, var_optimizedFalseTerminator_7687, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 178)) ;
  GGS_ipic_31__38_SingleInstructionTerminator temp_3 ;
  if (var_optimizedFalseTerminator_7687.isValid ()) {
    if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_optimizedFalseTerminator_7687.ptr ())) {
      temp_3 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedFalseTerminator_7687.ptr () ;
    }else{
      inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_optimizedFalseTerminator_7687.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 187)) ;
    }
  }
  outArgument_outOptimizedFalseTerminator = temp_3 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 189)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outIdenticalTerminators = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 191)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_ipic_31__38_RetlwTerminator temp_6 ;
        if (outArgument_outOptimizedTrueTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 192)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_t_8170 = temp_6 ;
        GGS_ipic_31__38_RetlwTerminator temp_7 ;
        if (outArgument_outOptimizedFalseTerminator.isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
            temp_7 = (cPtr_ipic_31__38_RetlwTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 193)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_f_8261 = temp_7 ;
        outArgument_outIdenticalTerminators = GGS_bool (ComparisonKind::equal, var_t_8170.readProperty_mLiteralValue ().objectCompare (var_f_8261.readProperty_mLiteralValue ())) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 195)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GGS_ipic_31__38_JumpTerminator temp_9 ;
          if (outArgument_outOptimizedTrueTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedTrueTerminator.ptr ())) {
              temp_9 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedTrueTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedTrueTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 196)) ;
            }
          }
          GGS_ipic_31__38_JumpTerminator var_t_8547 = temp_9 ;
          GGS_ipic_31__38_JumpTerminator temp_10 ;
          if (outArgument_outOptimizedFalseTerminator.isValid ()) {
            if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (outArgument_outOptimizedFalseTerminator.ptr ())) {
              temp_10 = (cPtr_ipic_31__38_JumpTerminator *) outArgument_outOptimizedFalseTerminator.ptr () ;
            }else{
              inCompiler->castError ("ipic_31__38_JumpTerminator", outArgument_outOptimizedFalseTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 197)) ;
            }
          }
          GGS_ipic_31__38_JumpTerminator var_f_8636 = temp_10 ;
          outArgument_outIdenticalTerminators = GGS_bool (ComparisonKind::equal, var_t_8547.readProperty_mLabel ().objectCompare (var_f_8636.readProperty_mLabel ())) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        outArgument_outIdenticalTerminators = GGS_bool (false) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getOptimizedTerminators (cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const GGS_ipic_31__38_BlockList constin_inBlockList,
                                                  const GGS_string constin_inBlockLabel,
                                                  GGS_bool & io_ioOptimizationDone,
                                                  GGS_string & io_ioListFileContents,
                                                  GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  GGS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  GGS_bool & out_outIdenticalTerminators,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  out_outOptimizedTrueTerminator.drop () ;
  out_outOptimizedFalseTerminator.drop () ;
  out_outIdenticalTerminators.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    inObject->method_getOptimizedTerminators (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, io_ioOptimizationDone, io_ioListFileContents, out_outOptimizedTrueTerminator, out_outOptimizedFalseTerminator, out_outIdenticalTerminators, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@ipic18AbstractBlockTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterTerminatorReferencedLabels (cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                          const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                          const GGS_ipic_31__38_BlockList constin_inBlockList,
                                                          GGS_stringset & io_ioReferencedBlockSet,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    inObject->method_enterTerminatorReferencedLabels (constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                      const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                      GGS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const GGS_ipic_31__38_BlockList constin_inBlockList,
                                                           GGS_stringset & io_ioReferencedBlockSet,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_enterInstructionReferencedLabels (constin_inSymbolTable, constin_inBlockList, io_ioReferencedBlockSet, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GGS_lstring /* constinArgument_inBlockLabel */,
                                                                         GGS_bool & outArgument_outOptimizationDone,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                         GGS_bool & outArgument_outNOPsubstitution,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstruction temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeInstruction (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              const GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                              const GGS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                              const GGS_ipic_31__38_BlockList constin_inBlockList,
                                              const GGS_lstring constin_inBlockLabel,
                                              GGS_bool & out_outOptimizationDone,
                                              GGS_string & io_ioListFileContents,
                                              GGS_ipic_31__38_SequentialInstruction & out_outOptimizedInstruction,
                                              GGS_bool & out_outNOPsubstitution,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outOptimizationDone.drop () ;
  out_outOptimizedInstruction.drop () ;
  out_outNOPsubstitution.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_optimizeInstruction (constin_inSymbolTable, constin_inOptimizeFlagStruct, constin_inBlockList, constin_inBlockLabel, out_outOptimizationDone, io_ioListFileContents, out_outOptimizedInstruction, out_outNOPsubstitution, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_nobanksel::objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel & inOperand) const {
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

GGS_midrange_5F_instruction_5F_nobanksel::GGS_midrange_5F_instruction_5F_nobanksel (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_nobanksel * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_nobanksel (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_nobanksel_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_nobanksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::
midrange_5F_instruction_5F_nobanksel_init_21_ (const GGS_location & in_mInstructionLocation,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel::GGS_midrange_5F_instruction_5F_nobanksel (const cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_nobanksel) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

void cPtr_midrange_5F_instruction_5F_nobanksel::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_nobanksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_nobanksel::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_nobanksel (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_nobanksel::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_nobanksel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ("midrange_instruction_nobanksel",
                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_nobanksel GGS_midrange_5F_instruction_5F_nobanksel::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_nobanksel result ;
  const GGS_midrange_5F_instruction_5F_nobanksel * p = (const GGS_midrange_5F_instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_banksel::objectCompare (const GGS_midrange_5F_instruction_5F_banksel & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel::GGS_midrange_5F_instruction_5F_banksel (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mBankIndex,
                  const GGS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_banksel * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_banksel (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_banksel_init_21__21__21_ (in_mInstructionLocation, in_mBankIndex, in_mWarningOnUselessBanksel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_banksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::
midrange_5F_instruction_5F_banksel_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_luint & in_mBankIndex,
                                                     const GGS_bool & in_mWarningOnUselessBanksel,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel::GGS_midrange_5F_instruction_5F_banksel (const cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_midrange_5F_instruction_5F_banksel::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_banksel::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_luint & in_mBankIndex,
                                                                                  const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

void cPtr_midrange_5F_instruction_5F_banksel::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_banksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_banksel::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel (mProperty_mInstructionLocation, mProperty_mBankIndex, mProperty_mWarningOnUselessBanksel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_banksel::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_banksel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ("midrange_instruction_banksel",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel GGS_midrange_5F_instruction_5F_banksel::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel result ;
  const GGS_midrange_5F_instruction_5F_banksel * p = (const GGS_midrange_5F_instruction_5F_banksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrangeInstruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrangeInstruction_5F_checkbank::objectCompare (const GGS_midrangeInstruction_5F_checkbank & inOperand) const {
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

GGS_midrangeInstruction_5F_checkbank::GGS_midrangeInstruction_5F_checkbank (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBankIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrangeInstruction_5F_checkbank * object = nullptr ;
  macroMyNew (object, cPtr_midrangeInstruction_5F_checkbank (inCompiler COMMA_THERE)) ;
  object->midrangeInstruction_5F_checkbank_init_21__21_ (in_mInstructionLocation, in_mBankIndex, inCompiler) ;
  const GGS_midrangeInstruction_5F_checkbank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::
midrangeInstruction_5F_checkbank_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_uint & in_mBankIndex,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank::GGS_midrangeInstruction_5F_checkbank (const cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checkbank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrangeInstruction_5F_checkbank::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_midrangeInstruction_5F_checkbank * p = (cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checkbank) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrangeInstruction_checkbank class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBankIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_uint & in_mBankIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrangeInstruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

void cPtr_midrangeInstruction_5F_checkbank::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrangeInstruction_checkbank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrangeInstruction_5F_checkbank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checkbank (mProperty_mInstructionLocation, mProperty_mBankIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrangeInstruction_5F_checkbank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrangeInstruction_checkbank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ("midrangeInstruction_checkbank",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrangeInstruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrangeInstruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrangeInstruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checkbank GGS_midrangeInstruction_5F_checkbank::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checkbank result ;
  const GGS_midrangeInstruction_5F_checkbank * p = (const GGS_midrangeInstruction_5F_checkbank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrangeInstruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrangeInstruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrangeInstruction_5F_checknobank::objectCompare (const GGS_midrangeInstruction_5F_checknobank & inOperand) const {
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

GGS_midrangeInstruction_5F_checknobank::GGS_midrangeInstruction_5F_checknobank (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrangeInstruction_5F_checknobank * object = nullptr ;
  macroMyNew (object, cPtr_midrangeInstruction_5F_checknobank (inCompiler COMMA_THERE)) ;
  object->midrangeInstruction_5F_checknobank_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrangeInstruction_5F_checknobank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::
midrangeInstruction_5F_checknobank_init_21_ (const GGS_location & in_mInstructionLocation,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank::GGS_midrangeInstruction_5F_checknobank (const cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checknobank) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrangeInstruction_checknobank class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (const GGS_location & in_mInstructionLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrangeInstruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

void cPtr_midrangeInstruction_5F_checknobank::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrangeInstruction_checknobank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrangeInstruction_5F_checknobank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checknobank (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrangeInstruction_5F_checknobank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrangeInstruction_checknobank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ("midrangeInstruction_checknobank",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrangeInstruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrangeInstruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrangeInstruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrangeInstruction_5F_checknobank GGS_midrangeInstruction_5F_checknobank::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrangeInstruction_5F_checknobank result ;
  const GGS_midrangeInstruction_5F_checknobank * p = (const GGS_midrangeInstruction_5F_checknobank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrangeInstruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_banksel_5F_register::objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel_5F_register::GGS_midrange_5F_instruction_5F_banksel_5F_register (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_registerExpression & in_mRegister,
                  const GGS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_banksel_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_banksel_5F_register (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (in_mInstructionLocation, in_mRegister, in_mWarningOnUselessBanksel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::
midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_registerExpression & in_mRegister,
                                                                 const GGS_bool & in_mWarningOnUselessBanksel,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register::GGS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                                                                          const GGS_registerExpression & in_mRegister,
                                                                                                          const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_banksel_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_banksel_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mWarningOnUselessBanksel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_banksel_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_banksel_register generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ("midrange_instruction_banksel_register",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register * p = (const GGS_midrange_5F_instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_savebank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_savebank::objectCompare (const GGS_midrange_5F_instruction_5F_savebank & inOperand) const {
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

GGS_midrange_5F_instruction_5F_savebank::GGS_midrange_5F_instruction_5F_savebank (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_registerExpression & in_mRegister,
                      const GGS_midrange_5F_instructionList & in_mInstructionList,
                      const GGS_location & in_mEndOfSaveBankInstruction,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_savebank * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_savebank (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_savebank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::
midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_registerExpression & in_mRegister,
                                                          const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                          const GGS_location & in_mEndOfSaveBankInstruction,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank::GGS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_savebank::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_registerExpression & in_mRegister,
                                                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                    const GGS_location & in_mEndOfSaveBankInstruction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

void cPtr_midrange_5F_instruction_5F_savebank::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_savebank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_savebank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_savebank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfSaveBankInstruction.printNonNullClassInstanceProperties ("mEndOfSaveBankInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_savebank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ("midrange_instruction_savebank",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_savebank result ;
  const GGS_midrange_5F_instruction_5F_savebank * p = (const GGS_midrange_5F_instruction_5F_savebank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_STATIC_5F_REPEAT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
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

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_lstring & in_mConstantName,
                              const GGS_immediatExpression & in_mLowerBoundExpression,
                              const GGS_immediatExpression & in_mUpperBoundExpression,
                              const GGS_midrange_5F_instructionList & in_mInstructionList,
                              const GGS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::
midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mConstantName,
                                                                          const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                          const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                          const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                          const GGS_location & in_mEndOfInstruction,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_lstring & in_mConstantName,
                                                                                                    const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                    const GGS_location & in_mEndOfInstruction,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_STATIC_REPEAT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstruction.printNonNullClassInstanceProperties ("mEndOfInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_STATIC_REPEAT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ("midrange_instruction_STATIC_REPEAT",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_STATIC_REPEAT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FD::objectCompare (const GGS_midrange_5F_instruction_5F_FD & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FD::GGS_midrange_5F_instruction_5F_FD (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::
midrange_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD::GGS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_instruction_5F_FD::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ("midrange_instruction_FD",
                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD result ;
  const GGS_midrange_5F_instruction_5F_FD * p = (const GGS_midrange_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_F::objectCompare (const GGS_midrange_5F_instruction_5F_F & inOperand) const {
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

GGS_midrange_5F_instruction_5F_F::GGS_midrange_5F_instruction_5F_F (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GGS_registerExpression & in_mRegisterExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::
midrange_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                               const GGS_registerExpression & in_mRegisterExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F::GGS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code GGS_midrange_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GGS_registerExpression & in_mRegisterExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_instruction_5F_F::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ("midrange_instruction_F",
                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_F result ;
  const GGS_midrange_5F_instruction_5F_F * p = (const GGS_midrange_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FB::objectCompare (const GGS_midrange_5F_instruction_5F_FB & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FB::GGS_midrange_5F_instruction_5F_FB (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bitNumberExpression & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::
midrange_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bitNumberExpression & in_mBitNumber,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB::GGS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op GGS_midrange_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_midrange_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bitNumberExpression & in_mBitNumber,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_instruction_5F_FB::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ("midrange_instruction_FB",
                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FB result ;
  const GGS_midrange_5F_instruction_5F_FB * p = (const GGS_midrange_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CALL::objectCompare (const GGS_midrange_5F_instruction_5F_CALL & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CALL::GGS_midrange_5F_instruction_5F_CALL (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CALL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::
midrange_5F_instruction_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL::GGS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

void cPtr_midrange_5F_instruction_5F_CALL::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ("midrange_instruction_CALL",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CALL result ;
  const GGS_midrange_5F_instruction_5F_CALL * p = (const GGS_midrange_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_JSR::objectCompare (const GGS_midrange_5F_instruction_5F_JSR & inOperand) const {
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

GGS_midrange_5F_instruction_5F_JSR::GGS_midrange_5F_instruction_5F_JSR (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_JSR (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_JSR_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::
midrange_5F_instruction_5F_JSR_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR::GGS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mTargetLabel,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

void cPtr_midrange_5F_instruction_5F_JSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ("midrange_instruction_JSR",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JSR result ;
  const GGS_midrange_5F_instruction_5F_JSR * p = (const GGS_midrange_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_JUMP::objectCompare (const GGS_midrange_5F_instruction_5F_JUMP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_JUMP::GGS_midrange_5F_instruction_5F_JUMP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_JUMP_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::
midrange_5F_instruction_5F_JUMP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP::GGS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

void cPtr_midrange_5F_instruction_5F_JUMP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ("midrange_instruction_JUMP",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JUMP result ;
  const GGS_midrange_5F_instruction_5F_JUMP * p = (const GGS_midrange_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_GOTO::objectCompare (const GGS_midrange_5F_instruction_5F_GOTO & inOperand) const {
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

GGS_midrange_5F_instruction_5F_GOTO::GGS_midrange_5F_instruction_5F_GOTO (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::
midrange_5F_instruction_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO::GGS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

void cPtr_midrange_5F_instruction_5F_GOTO::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ("midrange_instruction_GOTO",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_GOTO result ;
  const GGS_midrange_5F_instruction_5F_GOTO * p = (const GGS_midrange_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRWDT::objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRWDT::GGS_midrange_5F_instruction_5F_CLRWDT (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CLRWDT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CLRWDT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CLRWDT_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_CLRWDT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::
midrange_5F_instruction_5F_CLRWDT_init_21_ (const GGS_location & in_mInstructionLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT::GGS_midrange_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_instruction_5F_CLRWDT::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CLRWDT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_CLRWDT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRWDT (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CLRWDT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRWDT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ("midrange_instruction_CLRWDT",
                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRWDT GGS_midrange_5F_instruction_5F_CLRWDT::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRWDT result ;
  const GGS_midrange_5F_instruction_5F_CLRWDT * p = (const GGS_midrange_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRW::objectCompare (const GGS_midrange_5F_instruction_5F_CLRW & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRW::GGS_midrange_5F_instruction_5F_CLRW (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CLRW * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CLRW (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CLRW_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_CLRW result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::
midrange_5F_instruction_5F_CLRW_init_21_ (const GGS_location & in_mInstructionLocation,
                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW::GGS_midrange_5F_instruction_5F_CLRW (const cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_instruction_5F_CLRW::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CLRW:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_CLRW::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRW (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CLRW::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRW generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ("midrange_instruction_CLRW",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  const GGS_midrange_5F_instruction_5F_CLRW * p = (const GGS_midrange_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_NOP::objectCompare (const GGS_midrange_5F_instruction_5F_NOP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_NOP::GGS_midrange_5F_instruction_5F_NOP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_NOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_NOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_NOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_NOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::
midrange_5F_instruction_5F_NOP_init_21_ (const GGS_location & in_mInstructionLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP::GGS_midrange_5F_instruction_5F_NOP (const cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_NOP) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_NOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_instruction_5F_NOP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_NOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_NOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_NOP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_NOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_NOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ("midrange_instruction_NOP",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP result ;
  const GGS_midrange_5F_instruction_5F_NOP * p = (const GGS_midrange_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_SLEEP::objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_SLEEP::GGS_midrange_5F_instruction_5F_SLEEP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_SLEEP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_SLEEP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_SLEEP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_SLEEP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::
midrange_5F_instruction_5F_SLEEP_init_21_ (const GGS_location & in_mInstructionLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP::GGS_midrange_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_instruction_5F_SLEEP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_SLEEP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_SLEEP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_SLEEP (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_SLEEP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_SLEEP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ("midrange_instruction_SLEEP",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  const GGS_midrange_5F_instruction_5F_SLEEP * p = (const GGS_midrange_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_literalOperation::objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_midrange_5F_instruction_5F_literalOperation::GGS_midrange_5F_instruction_5F_literalOperation (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::
midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                              const GGS_immediatExpression & in_mImmediatExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation::GGS_midrange_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_literal_5F_instruction_5F_opcode GGS_midrange_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_midrange_5F_instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GGS_immediatExpression & in_mImmediatExpression,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ("midrange_instruction_literalOperation",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  const GGS_midrange_5F_instruction_5F_literalOperation * p = (const GGS_midrange_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_MNOP::objectCompare (const GGS_midrange_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_MNOP::GGS_midrange_5F_instruction_5F_MNOP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::
midrange_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_luint & in_mOccurrenceFactor,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP::GGS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_midrange_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_luint & in_mOccurrenceFactor,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_instruction_5F_MNOP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ("midrange_instruction_MNOP",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  const GGS_midrange_5F_instruction_5F_MNOP * p = (const GGS_midrange_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FOREVER::objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FOREVER::GGS_midrange_5F_instruction_5F_FOREVER (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_instructionList & in_mInstructionList,
                  const GGS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::
midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER::GGS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

void cPtr_midrange_5F_instruction_5F_FOREVER::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_FOREVER::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FOREVER generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ("midrange_instruction_FOREVER",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  const GGS_midrange_5F_instruction_5F_FOREVER * p = (const GGS_midrange_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GGS_midrange_5F_instruction () {
}


void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::
midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_midrange_5F_instruction & in_mInstruction,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instruction () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                                                          const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_SEMI_COLON generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("midrange_instruction_IF_SEMI_COLON",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_BitTest::GGS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_midrange_5F_instruction & in_mInstruction,
                          const GGS_bool & in_mSkipIfSet,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bitNumberExpression & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::
midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_midrange_5F_instruction & in_mInstruction,
                                                                   const GGS_bool & in_mSkipIfSet,
                                                                   const GGS_registerExpression & in_mRegisterExpression,
                                                                   const GGS_bitNumberExpression & in_mBitNumber,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest::GGS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GGS_bool & in_mSkipIfSet,
                                                                                              const GGS_registerExpression & in_mRegisterExpression,
                                                                                              const GGS_bitNumberExpression & in_mBitNumber,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_IF_BitTest:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_BitTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GGS_uint & outArgument_outBaseCode,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outBaseCode = GGS_uint (uint32_t (7168U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outBaseCode = GGS_uint (uint32_t (6144U)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GGS_string & outArgument_outMnemonic,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outMnemonic = GGS_string ("BTFSS") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMnemonic = GGS_string ("BTFSC") ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_IncDec::GGS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_midrange_5F_instruction & in_mInstruction,
                          const GGS_bool & in_mIncrement,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::
midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_midrange_5F_instruction & in_mInstruction,
                                                                  const GGS_bool & in_mIncrement,
                                                                  const GGS_registerExpression & in_mRegisterExpression,
                                                                  const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec::GGS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GGS_bool & in_mIncrement,
                                                                                            const GGS_registerExpression & in_mRegisterExpression,
                                                                                            const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction, inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_IF_IncDec:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_IncDec generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_incDecRegisterInCondition::objectCompare (const GGS_midrange_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_midrange_5F_incDecRegisterInCondition::GGS_midrange_5F_incDecRegisterInCondition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_mIncrement,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      const GGS_bool & in_mBranchIfZero,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_midrange_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::
midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                            const GGS_bool & in_mIncrement,
                                                            const GGS_bool & in_m_5F_W_5F_isDestination,
                                                            const GGS_bool & in_mBranchIfZero,
                                                            Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition::GGS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                        const GGS_bool & in_mIncrement,
                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GGS_bool & in_mBranchIfZero,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_incDecRegisterInCondition::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_incDecRegisterInCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  const GGS_midrange_5F_incDecRegisterInCondition * p = (const GGS_midrange_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
              const GGS_bitNumberExpression & in_mBitNumber,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                                         const GGS_bitNumberExpression & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_bitTest_in_structured_if_condition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_bitTest_in_structured_if_condition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_structured_5F_if::objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GGS_midrange_5F_instruction_5F_structured_5F_if::GGS_midrange_5F_instruction_5F_structured_5F_if (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                          const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                          const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                          const GGS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::
midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                      const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                      const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                      const GGS_location & in_mEndOfElsePartLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if::GGS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GGS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GGS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GGS_location & in_mEndOfElsePartLocation,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

void cPtr_midrange_5F_instruction_5F_structured_5F_if::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_structured_if:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_structured_5F_if::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_structured_if generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ("midrange_instruction_structured_if",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  const GGS_midrange_5F_instruction_5F_structured_5F_if * p = (const GGS_midrange_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_do_5F_while::objectCompare (const GGS_midrange_5F_instruction_5F_do_5F_while & inOperand) const {
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

GGS_midrange_5F_instruction_5F_do_5F_while::GGS_midrange_5F_instruction_5F_do_5F_while (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while GGS_midrange_5F_instruction_5F_do_5F_while::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                      const GGS_location & in_mEndOfRepeatedInstructionList,
                      const GGS_midrange_5F_partList & in_mWhilePartList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_do_5F_while * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_do_5F_while (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_do_5F_while result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::
midrange_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructionList,
                                                             const GGS_midrange_5F_partList & in_mWhilePartList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while::GGS_midrange_5F_instruction_5F_do_5F_while (const cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_partList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_do_5F_while::cPtr_midrange_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_do_5F_while::cPtr_midrange_5F_instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GGS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GGS_midrange_5F_partList & in_mWhilePartList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;
}

void cPtr_midrange_5F_instruction_5F_do_5F_while::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_do_while:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_instruction_5F_do_5F_while::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_do_while generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ("midrange_instruction_do_while",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while GGS_midrange_5F_instruction_5F_do_5F_while::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_do_5F_while result ;
  const GGS_midrange_5F_instruction_5F_do_5F_while * p = (const GGS_midrange_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model::GGS_midrange_5F_model (void) :
mProperty_mProgramName (),
mProperty_mDeviceName (),
mProperty_mConfigDefinitionList (),
mProperty_mRamDefinitionList (),
mProperty_mUnusedRegisterList (),
mProperty_mInterruptDefinitionList (),
mProperty_mConstantDefinitionList (),
mProperty_mRoutineDefinitionList (),
mProperty_mUnusedRoutineList (),
mProperty_mNeedsComputedGoto_32_ (),
mProperty_mNeedsComputedGoto_34_ (),
mProperty_mEndOfProgram () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model::GGS_midrange_5F_model (const GGS_midrange_5F_model & inSource) :
mProperty_mProgramName (inSource.mProperty_mProgramName),
mProperty_mDeviceName (inSource.mProperty_mDeviceName),
mProperty_mConfigDefinitionList (inSource.mProperty_mConfigDefinitionList),
mProperty_mRamDefinitionList (inSource.mProperty_mRamDefinitionList),
mProperty_mUnusedRegisterList (inSource.mProperty_mUnusedRegisterList),
mProperty_mInterruptDefinitionList (inSource.mProperty_mInterruptDefinitionList),
mProperty_mConstantDefinitionList (inSource.mProperty_mConstantDefinitionList),
mProperty_mRoutineDefinitionList (inSource.mProperty_mRoutineDefinitionList),
mProperty_mUnusedRoutineList (inSource.mProperty_mUnusedRoutineList),
mProperty_mNeedsComputedGoto_32_ (inSource.mProperty_mNeedsComputedGoto_32_),
mProperty_mNeedsComputedGoto_34_ (inSource.mProperty_mNeedsComputedGoto_34_),
mProperty_mEndOfProgram (inSource.mProperty_mEndOfProgram) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model & GGS_midrange_5F_model::operator = (const GGS_midrange_5F_model & inSource) {
  mProperty_mProgramName = inSource.mProperty_mProgramName ;
  mProperty_mDeviceName = inSource.mProperty_mDeviceName ;
  mProperty_mConfigDefinitionList = inSource.mProperty_mConfigDefinitionList ;
  mProperty_mRamDefinitionList = inSource.mProperty_mRamDefinitionList ;
  mProperty_mUnusedRegisterList = inSource.mProperty_mUnusedRegisterList ;
  mProperty_mInterruptDefinitionList = inSource.mProperty_mInterruptDefinitionList ;
  mProperty_mConstantDefinitionList = inSource.mProperty_mConstantDefinitionList ;
  mProperty_mRoutineDefinitionList = inSource.mProperty_mRoutineDefinitionList ;
  mProperty_mUnusedRoutineList = inSource.mProperty_mUnusedRoutineList ;
  mProperty_mNeedsComputedGoto_32_ = inSource.mProperty_mNeedsComputedGoto_32_ ;
  mProperty_mNeedsComputedGoto_34_ = inSource.mProperty_mNeedsComputedGoto_34_ ;
  mProperty_mEndOfProgram = inSource.mProperty_mEndOfProgram ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_model GGS_midrange_5F_model::init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mProgramName,
                                                                                                   const GGS_lstring & in_mDeviceName,
                                                                                                   const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                                                                   const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                                                                   const GGS_lstringlist & in_mUnusedRegisterList,
                                                                                                   const GGS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                                                                                   const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                                                                   const GGS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                                                   const GGS_lstringlist & in_mUnusedRoutineList,
                                                                                                   const GGS_bool & in_mNeedsComputedGoto_32_,
                                                                                                   const GGS_bool & in_mNeedsComputedGoto_34_,
                                                                                                   const GGS_location & in_mEndOfProgram,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_model result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProgramName = in_mProgramName ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mConfigDefinitionList = in_mConfigDefinitionList ;
  result.mProperty_mRamDefinitionList = in_mRamDefinitionList ;
  result.mProperty_mUnusedRegisterList = in_mUnusedRegisterList ;
  result.mProperty_mInterruptDefinitionList = in_mInterruptDefinitionList ;
  result.mProperty_mConstantDefinitionList = in_mConstantDefinitionList ;
  result.mProperty_mRoutineDefinitionList = in_mRoutineDefinitionList ;
  result.mProperty_mUnusedRoutineList = in_mUnusedRoutineList ;
  result.mProperty_mNeedsComputedGoto_32_ = in_mNeedsComputedGoto_32_ ;
  result.mProperty_mNeedsComputedGoto_34_ = in_mNeedsComputedGoto_34_ ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_model::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model::GGS_midrange_5F_model (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1,
                                              const GGS_configDefinitionList & inOperand2,
                                              const GGS_ramDefinitionList & inOperand3,
                                              const GGS_lstringlist & inOperand4,
                                              const GGS_midrange_5F_interruptDefinitionList & inOperand5,
                                              const GGS_constantDefinitionList & inOperand6,
                                              const GGS_midrange_5F_routineDefinitionList & inOperand7,
                                              const GGS_lstringlist & inOperand8,
                                              const GGS_bool & inOperand9,
                                              const GGS_bool & inOperand10,
                                              const GGS_location & inOperand11) :
mProperty_mProgramName (inOperand0),
mProperty_mDeviceName (inOperand1),
mProperty_mConfigDefinitionList (inOperand2),
mProperty_mRamDefinitionList (inOperand3),
mProperty_mUnusedRegisterList (inOperand4),
mProperty_mInterruptDefinitionList (inOperand5),
mProperty_mConstantDefinitionList (inOperand6),
mProperty_mRoutineDefinitionList (inOperand7),
mProperty_mUnusedRoutineList (inOperand8),
mProperty_mNeedsComputedGoto_32_ (inOperand9),
mProperty_mNeedsComputedGoto_34_ (inOperand10),
mProperty_mEndOfProgram (inOperand11) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mInterruptDefinitionList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mNeedsComputedGoto_32_.isValid () && mProperty_mNeedsComputedGoto_34_.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_model::drop (void) {
  mProperty_mProgramName.drop () ;
  mProperty_mDeviceName.drop () ;
  mProperty_mConfigDefinitionList.drop () ;
  mProperty_mRamDefinitionList.drop () ;
  mProperty_mUnusedRegisterList.drop () ;
  mProperty_mInterruptDefinitionList.drop () ;
  mProperty_mConstantDefinitionList.drop () ;
  mProperty_mRoutineDefinitionList.drop () ;
  mProperty_mUnusedRoutineList.drop () ;
  mProperty_mNeedsComputedGoto_32_.drop () ;
  mProperty_mNeedsComputedGoto_34_.drop () ;
  mProperty_mEndOfProgram.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_model::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_model:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_model generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_model ("midrange_model",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_model ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_model (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model GGS_midrange_5F_model::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_model result ;
  const GGS_midrange_5F_model * p = (const GGS_midrange_5F_model *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_optimizeJUMP (const GGS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GGS_uint constinArgument_inLineIndex,
                                                                 GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_reachedLabelSet_9890 ;
  {
  GGS_midrange_5F_intermediate_5F_instruction joker_9882 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 231)), ioArgument_ioGeneratedInstructionList, joker_9882, var_reachedLabelSet_9890, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 231)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = var_reachedLabelSet_9890.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 233)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 234)) ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 235)).add_operation (GGS_string (": JUMP branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 235)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 235)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_line_10337 ;
    const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
    GGS_bool joker_10342 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_10337, joker_10342, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 238)) ;
    GGS_midrange_5F_intermediate_5F_instruction var_firstInstruction_10477 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_10337.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 240)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_10477, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 240)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__10557 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_10477.ptr ())) ;
      if (nullptr == var__10557.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_midrange_5F_intermediate_5F_JUMP temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 245)) ;
        }
        ioArgument_ioOptimizationsDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 250)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 250)).add_operation (GGS_string (": JUMP branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 250)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 250)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_11041 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_10477.ptr ())) ;
        if (nullptr == var_literalOp_11041.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_literalOp_11041.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas3", 253)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_11041, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 254)) ;
              }
              ioArgument_ioOptimizationsDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 259)).add_operation (GGS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 259)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 259)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_midrange_5F_intermediate_5F_JUMP var_jump_11584 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_10477.ptr ())) ;
          if (nullptr == var_jump_11584.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
              test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_11584.readProperty_mTargetLabel ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                const GGS_midrange_5F_intermediate_5F_JUMP temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_jump_11584.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas3", 265)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas3", 265)), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 264)) ;
                }
                ioArgument_ioOptimizationsDone = GGS_bool (true) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 269)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 269)).add_operation (GGS_string (": JUMP branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 269)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 269)) ;
              }
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (cPtr_midrange_5F_intermediate_5F_JUMP * inObject,
                                       const GGS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GGS_uint constin_inLineIndex,
                                       GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GGS_string & io_ioListFileContents,
                                       GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_JUMP) ;
    inObject->method_optimizeJUMP (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_GOTO optimizeGOTO'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_optimizeGOTO (const GGS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GGS_uint constinArgument_inLineIndex,
                                                                 GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_reachedLabelSet_12741 ;
  {
  GGS_midrange_5F_intermediate_5F_instruction joker_12733 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 286)), ioArgument_ioGeneratedInstructionList, joker_12733, var_reachedLabelSet_12741, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 286)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_12741.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 289)) ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 290)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 290)).add_operation (GGS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 290)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 290)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_line_13187 ;
    const GGS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
    GGS_bool joker_13192 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_13187, joker_13192, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 293)) ;
    GGS_midrange_5F_intermediate_5F_instruction var_firstInstruction_13327 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_13187.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 295)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13327, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 295)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__13436 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_13327.ptr ())) ;
      if (nullptr == var__13436.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_midrange_5F_intermediate_5F_GOTO temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 301)) ;
        }
        ioArgument_ioOptimizationsDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 306)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 306)).add_operation (GGS_string (": GOTO branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 306)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 306)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13920 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13327.ptr ())) ;
        if (nullptr == var_literalOp_13920.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_literalOp_13920.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas3", 309)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13920, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 310)) ;
              }
              ioArgument_ioOptimizationsDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 315)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 315)).add_operation (GGS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 315)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 315)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_midrange_5F_intermediate_5F_JUMP var_jump_14463 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_13327.ptr ())) ;
          if (nullptr == var_jump_14463.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_midrange_5F_intermediate_5F_GOTO temp_9 = this ;
              test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_14463.readProperty_mTargetLabel ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                const GGS_midrange_5F_intermediate_5F_GOTO temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_jump_14463.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas3", 321)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas3", 321)), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 320)) ;
                }
                ioArgument_ioOptimizationsDone = GGS_bool (true) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 325)).add_operation (GGS_string (": GOTO branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 325)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_midrange_5F_intermediate_5F_GOTO var_goto_15045 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_firstInstruction_13327.ptr ())) ;
            if (nullptr == var_goto_15045.ptr ()) {
              test_11 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                const GGS_midrange_5F_intermediate_5F_GOTO temp_13 = this ;
                test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mTargetLabel ().objectCompare (var_goto_15045.readProperty_mTargetLabel ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  {
                  const GGS_midrange_5F_intermediate_5F_GOTO temp_14 = this ;
                  ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_14.readProperty_mInstructionLocation (), var_goto_15045.readProperty_mTargetLabel (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 330)) ;
                  }
                  ioArgument_ioOptimizationsDone = GGS_bool (true) ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 335)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 335)).add_operation (GGS_string (": GOTO branching to GOTO replaced by GOTO\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 335)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 335)) ;
                }
              }
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (cPtr_midrange_5F_intermediate_5F_GOTO * inObject,
                                       const GGS_symbolTableForOptimizations constin_inSymbolTable,
                                       const GGS_uint constin_inLineIndex,
                                       GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GGS_string & io_ioListFileContents,
                                       GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_GOTO) ;
    inObject->method_optimizeGOTO (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::
init_21_ (const GGS_lstring & in_mLabel,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (in_mLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::
baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (const GGS_lstring & in_mLabel,
                                                      Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mLabel () {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_LABEL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ("baseline_intermediate_pseudo_LABEL",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_uint & in_mPage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                                   const GGS_uint & in_mPage,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                                      const GGS_uint & in_mPage,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_END_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (mProperty_mRoutineName, mProperty_mPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_END_ROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ("baseline_intermediate_pseudo_END_ROUTINE",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_TRIS::objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_TRIS::GGS_baseline_5F_intermediate_5F_TRIS (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mOperand,
                  const GGS_uint & in_mOpcode,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (in_mInstructionLocation, in_mOperand, in_mOpcode, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::
baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_lstring & in_mOperand,
                                                   const GGS_uint & in_mOpcode,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS::GGS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_TRIS::readProperty_mOpcode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mOperand,
                                                                              const GGS_uint & in_mOpcode,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

void cPtr_baseline_5F_intermediate_5F_TRIS::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_TRIS::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mOpcode.printNonNullClassInstanceProperties ("mOpcode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_TRIS generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ("baseline_intermediate_TRIS",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  const GGS_baseline_5F_intermediate_5F_TRIS * p = (const GGS_baseline_5F_intermediate_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::
baseline_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_luint & in_mOccurrenceFactor,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                                                            const GGS_luint & in_mOccurrenceFactor,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ("baseline_intermediate_instruction_MNOP",
                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_banksel::objectCompare (const GGS_pic_31__38_Instruction_5F_banksel & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_banksel::GGS_pic_31__38_Instruction_5F_banksel (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel GGS_pic_31__38_Instruction_5F_banksel::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mBankIndex,
                  const GGS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_banksel * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_banksel (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_banksel_init_21__21__21_ (in_mInstructionLocation, in_mBankIndex, in_mWarningOnUselessBanksel, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_banksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::
pic_31__38_Instruction_5F_banksel_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_luint & in_mBankIndex,
                                                    const GGS_bool & in_mWarningOnUselessBanksel,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel::GGS_pic_31__38_Instruction_5F_banksel (const cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_banksel::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_banksel::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_banksel class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel::cPtr_pic_31__38_Instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel::cPtr_pic_31__38_Instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_luint & in_mBankIndex,
                                                                                const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

void cPtr_pic_31__38_Instruction_5F_banksel::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_banksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_banksel::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel (mProperty_mInstructionLocation, mProperty_mBankIndex, mProperty_mWarningOnUselessBanksel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_banksel::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_banksel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ("pic18Instruction_banksel",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel GGS_pic_31__38_Instruction_5F_banksel::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel result ;
  const GGS_pic_31__38_Instruction_5F_banksel * p = (const GGS_pic_31__38_Instruction_5F_banksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_banksel_5F_register::objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_banksel_5F_register::GGS_pic_31__38_Instruction_5F_banksel_5F_register (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register GGS_pic_31__38_Instruction_5F_banksel_5F_register::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_registerExpression & in_mRegisterExpression,
                  const GGS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_banksel_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_banksel_5F_register_init_21__21__21_ (in_mInstructionLocation, in_mRegisterExpression, in_mWarningOnUselessBanksel, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_banksel_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::
pic_31__38_Instruction_5F_banksel_5F_register_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                const GGS_registerExpression & in_mRegisterExpression,
                                                                const GGS_bool & in_mWarningOnUselessBanksel,
                                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register::GGS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_banksel_5F_register::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_banksel_5F_register::cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                                                        const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_banksel_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegisterExpression, mProperty_mWarningOnUselessBanksel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_banksel_register generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register GGS_pic_31__38_Instruction_5F_banksel_5F_register::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  const GGS_pic_31__38_Instruction_5F_banksel_5F_register * p = (const GGS_pic_31__38_Instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_savebank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_savebank::objectCompare (const GGS_pic_31__38_Instruction_5F_savebank & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_savebank::GGS_pic_31__38_Instruction_5F_savebank (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank GGS_pic_31__38_Instruction_5F_savebank::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_registerExpression & in_mRegister,
                      const GGS_pic_31__38_InstructionList & in_mInstructionList,
                      const GGS_location & in_mEndOfSaveBankInstruction,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_savebank * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_savebank (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_savebank_init_21__21__21__21_ (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_savebank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::
pic_31__38_Instruction_5F_savebank_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                         const GGS_registerExpression & in_mRegister,
                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                         const GGS_location & in_mEndOfSaveBankInstruction,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank::GGS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_savebank::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_savebank::cPtr_pic_31__38_Instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_registerExpression & in_mRegister,
                                                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfSaveBankInstruction,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

void cPtr_pic_31__38_Instruction_5F_savebank::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_savebank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_savebank::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfSaveBankInstruction.printNonNullClassInstanceProperties ("mEndOfSaveBankInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_savebank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank GGS_pic_31__38_Instruction_5F_savebank::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_savebank result ;
  const GGS_pic_31__38_Instruction_5F_savebank * p = (const GGS_pic_31__38_Instruction_5F_savebank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_repetitionStatique reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_repetitionStatique::objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_repetitionStatique::GGS_pic_31__38_Instruction_5F_repetitionStatique (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique GGS_pic_31__38_Instruction_5F_repetitionStatique::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_lstring & in_mConstantName,
                              const GGS_immediatExpression & in_mLowerBoundExpression,
                              const GGS_immediatExpression & in_mUpperBoundExpression,
                              const GGS_pic_31__38_InstructionList & in_mInstructionList,
                              const GGS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_repetitionStatique * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_repetitionStatique (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_repetitionStatique_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::
pic_31__38_Instruction_5F_repetitionStatique_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_lstring & in_mConstantName,
                                                                           const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                           const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                           const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                           const GGS_location & in_mEndOfInstruction,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique::GGS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_repetitionStatique::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_repetitionStatique class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_repetitionStatique::cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GGS_location & in_mInstructionLocation,
                                                                                                      const GGS_lstring & in_mConstantName,
                                                                                                      const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                      const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                      const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                      const GGS_location & in_mEndOfInstruction,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_repetitionStatique::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_repetitionStatique:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_repetitionStatique::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_repetitionStatique::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstruction.printNonNullClassInstanceProperties ("mEndOfInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_repetitionStatique generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ("pic18Instruction_repetitionStatique",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_repetitionStatique::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_repetitionStatique::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_repetitionStatique (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique GGS_pic_31__38_Instruction_5F_repetitionStatique::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_repetitionStatique result ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique * p = (const GGS_pic_31__38_Instruction_5F_repetitionStatique *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_repetitionStatique *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @gotoTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_gotoTerminationForBlockInstruction::objectCompare (const GGS_gotoTerminationForBlockInstruction & inOperand) const {
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

GGS_gotoTerminationForBlockInstruction::GGS_gotoTerminationForBlockInstruction (void) :
GGS_abstractBlockTerminationForBlockInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction GGS_gotoTerminationForBlockInstruction::
init_21_ (const GGS_lstring & in_mNextBlock,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_gotoTerminationForBlockInstruction * object = nullptr ;
  macroMyNew (object, cPtr_gotoTerminationForBlockInstruction (inCompiler COMMA_THERE)) ;
  object->gotoTerminationForBlockInstruction_init_21_ (in_mNextBlock, inCompiler) ;
  const GGS_gotoTerminationForBlockInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::
gotoTerminationForBlockInstruction_init_21_ (const GGS_lstring & in_mNextBlock,
                                             Compiler * /* inCompiler */) {
  mProperty_mNextBlock = in_mNextBlock ;
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction::GGS_gotoTerminationForBlockInstruction (const cPtr_gotoTerminationForBlockInstruction * inSourcePtr) :
GGS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gotoTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_gotoTerminationForBlockInstruction::readProperty_mNextBlock (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gotoTerminationForBlockInstruction) ;
    return p->mProperty_mNextBlock ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @gotoTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_gotoTerminationForBlockInstruction::cPtr_gotoTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mNextBlock () {
}

//--------------------------------------------------------------------------------------------------

cPtr_gotoTerminationForBlockInstruction::cPtr_gotoTerminationForBlockInstruction (const GGS_lstring & in_mNextBlock,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mNextBlock () {
  mProperty_mNextBlock = in_mNextBlock ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_gotoTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

void cPtr_gotoTerminationForBlockInstruction::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@gotoTerminationForBlockInstruction:") ;
  mProperty_mNextBlock.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_gotoTerminationForBlockInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gotoTerminationForBlockInstruction (mProperty_mNextBlock, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_gotoTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mNextBlock.printNonNullClassInstanceProperties ("mNextBlock") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @gotoTerminationForBlockInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ("gotoTerminationForBlockInstruction",
                                                                                       & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_gotoTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_gotoTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_gotoTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction GGS_gotoTerminationForBlockInstruction::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_gotoTerminationForBlockInstruction result ;
  const GGS_gotoTerminationForBlockInstruction * p = (const GGS_gotoTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_gotoTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gotoTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_block reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_block::objectCompare (const GGS_pic_31__38_Instruction_5F_block & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_block::GGS_pic_31__38_Instruction_5F_block (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block GGS_pic_31__38_Instruction_5F_block::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mStartBlockName,
                      const GGS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                      const GGS_location & in_mEndOfBlockInstruction,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_block * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_block (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_block_init_21__21__21__21_ (in_mInstructionLocation, in_mStartBlockName, in_mBlockList, in_mEndOfBlockInstruction, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_block result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::
pic_31__38_Instruction_5F_block_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mStartBlockName,
                                                      const GGS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                      const GGS_location & in_mEndOfBlockInstruction,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mStartBlockName = in_mStartBlockName ;
  mProperty_mBlockList = in_mBlockList ;
  mProperty_mEndOfBlockInstruction = in_mEndOfBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block::GGS_pic_31__38_Instruction_5F_block (const cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_block) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_block::readProperty_mStartBlockName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mStartBlockName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_Instruction_5F_block::readProperty_mBlockList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_BlockInstructionBlockList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mBlockList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_block::readProperty_mEndOfBlockInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_block) ;
    return p->mProperty_mEndOfBlockInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_block class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_block::cPtr_pic_31__38_Instruction_5F_block (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mStartBlockName (),
mProperty_mBlockList (),
mProperty_mEndOfBlockInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_block::cPtr_pic_31__38_Instruction_5F_block (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mStartBlockName,
                                                                            const GGS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                                            const GGS_location & in_mEndOfBlockInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mStartBlockName (),
mProperty_mBlockList (),
mProperty_mEndOfBlockInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mStartBlockName = in_mStartBlockName ;
  mProperty_mBlockList = in_mBlockList ;
  mProperty_mEndOfBlockInstruction = in_mEndOfBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_block::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

void cPtr_pic_31__38_Instruction_5F_block::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_block:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartBlockName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlockList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfBlockInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_block::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_block (mProperty_mInstructionLocation, mProperty_mStartBlockName, mProperty_mBlockList, mProperty_mEndOfBlockInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_block::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mStartBlockName.printNonNullClassInstanceProperties ("mStartBlockName") ;
    mProperty_mBlockList.printNonNullClassInstanceProperties ("mBlockList") ;
    mProperty_mEndOfBlockInstruction.printNonNullClassInstanceProperties ("mEndOfBlockInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_block generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ("pic18Instruction_block",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_block::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_block (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block GGS_pic_31__38_Instruction_5F_block::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_block result ;
  const GGS_pic_31__38_Instruction_5F_block * p = (const GGS_pic_31__38_Instruction_5F_block *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_block *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FDA::objectCompare (const GGS_pic_31__38_Instruction_5F_FDA & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FDA::GGS_pic_31__38_Instruction_5F_FDA (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA GGS_pic_31__38_Instruction_5F_FDA::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_FDA * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_FDA (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_FDA_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_FDA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::
pic_31__38_Instruction_5F_FDA_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA::GGS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_FDA::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FDA::cPtr_pic_31__38_Instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FDA::cPtr_pic_31__38_Instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

void cPtr_pic_31__38_Instruction_5F_FDA::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FDA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FDA_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FDA_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FDA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA GGS_pic_31__38_Instruction_5F_FDA::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA result ;
  const GGS_pic_31__38_Instruction_5F_FDA * p = (const GGS_pic_31__38_Instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FA::objectCompare (const GGS_pic_31__38_Instruction_5F_FA & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FA::GGS_pic_31__38_Instruction_5F_FA (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA GGS_pic_31__38_Instruction_5F_FA::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GGS_registerExpression & in_mRegisterExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_FA * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_FA (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_FA_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_FA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::
pic_31__38_Instruction_5F_FA_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                               const GGS_registerExpression & in_mRegisterExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA::GGS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_FA_5F_instruction_5F_base_5F_code GGS_pic_31__38_Instruction_5F_FA::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_FA_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_FA::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FA) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FA::cPtr_pic_31__38_Instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GGS_registerExpression & in_mRegisterExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

void cPtr_pic_31__38_Instruction_5F_FA::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_FA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_FA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA GGS_pic_31__38_Instruction_5F_FA::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FA result ;
  const GGS_pic_31__38_Instruction_5F_FA * p = (const GGS_pic_31__38_Instruction_5F_FA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_MOVFF reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MOVFF::objectCompare (const GGS_pic_31__38_Instruction_5F_MOVFF & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MOVFF::GGS_pic_31__38_Instruction_5F_MOVFF (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF GGS_pic_31__38_Instruction_5F_MOVFF::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_registerExpression & in_mSourceRegisterName,
                  const GGS_registerExpression & in_mDestinationRegisterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_MOVFF * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_MOVFF (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_MOVFF_init_21__21__21_ (in_mInstructionLocation, in_mSourceRegisterName, in_mDestinationRegisterName, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_MOVFF result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::
pic_31__38_Instruction_5F_MOVFF_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                  const GGS_registerExpression & in_mSourceRegisterName,
                                                  const GGS_registerExpression & in_mDestinationRegisterName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceRegisterName = in_mSourceRegisterName ;
  mProperty_mDestinationRegisterName = in_mDestinationRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF::GGS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_MOVFF::readProperty_mSourceRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    return p->mProperty_mSourceRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_MOVFF::readProperty_mDestinationRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
    return p->mProperty_mDestinationRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mSourceRegisterName (),
mProperty_mDestinationRegisterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MOVFF::cPtr_pic_31__38_Instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_registerExpression & in_mSourceRegisterName,
                                                                            const GGS_registerExpression & in_mDestinationRegisterName,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSourceRegisterName (),
mProperty_mDestinationRegisterName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceRegisterName = in_mSourceRegisterName ;
  mProperty_mDestinationRegisterName = in_mDestinationRegisterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

void cPtr_pic_31__38_Instruction_5F_MOVFF::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_MOVFF:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterName, mProperty_mDestinationRegisterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_MOVFF::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSourceRegisterName.printNonNullClassInstanceProperties ("mSourceRegisterName") ;
    mProperty_mDestinationRegisterName.printNonNullClassInstanceProperties ("mDestinationRegisterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_MOVFF generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF GGS_pic_31__38_Instruction_5F_MOVFF::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MOVFF result ;
  const GGS_pic_31__38_Instruction_5F_MOVFF * p = (const GGS_pic_31__38_Instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_FBA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FBA::objectCompare (const GGS_pic_31__38_Instruction_5F_FBA & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FBA::GGS_pic_31__38_Instruction_5F_FBA (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA GGS_pic_31__38_Instruction_5F_FBA::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bitNumberExpression & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_FBA * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_FBA (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_FBA_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_FBA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::
pic_31__38_Instruction_5F_FBA_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bitNumberExpression & in_mBitNumber,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA::GGS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_pic_31__38_Instruction_5F_FBA::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_FBA::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_pic_31__38_Instruction_5F_FBA::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FBA) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FBA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FBA::cPtr_pic_31__38_Instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FBA::cPtr_pic_31__38_Instruction_5F_FBA (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bitNumberExpression & in_mBitNumber,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

void cPtr_pic_31__38_Instruction_5F_FBA::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_FBA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FBA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FBA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA GGS_pic_31__38_Instruction_5F_FBA::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FBA result ;
  const GGS_pic_31__38_Instruction_5F_FBA * p = (const GGS_pic_31__38_Instruction_5F_FBA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JSR::objectCompare (const GGS_pic_31__38_Instruction_5F_JSR & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JSR::GGS_pic_31__38_Instruction_5F_JSR (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR GGS_pic_31__38_Instruction_5F_JSR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mTargetLabel,
                  const GGS_jumpInstructionKind & in_mKind,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_JSR (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_JSR_init_21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mKind, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::
pic_31__38_Instruction_5F_JSR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                const GGS_jumpInstructionKind & in_mKind,
                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR::GGS_pic_31__38_Instruction_5F_JSR (const cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_pic_31__38_Instruction_5F_JSR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_jumpInstructionKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JSR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JSR::cPtr_pic_31__38_Instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JSR::cPtr_pic_31__38_Instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTargetLabel,
                                                                        const GGS_jumpInstructionKind & in_mKind,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

void cPtr_pic_31__38_Instruction_5F_JSR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ("pic18Instruction_JSR",
                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR GGS_pic_31__38_Instruction_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JSR result ;
  const GGS_pic_31__38_Instruction_5F_JSR * p = (const GGS_pic_31__38_Instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_macro reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_macro::objectCompare (const GGS_pic_31__38_Instruction_5F_macro & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_macro::GGS_pic_31__38_Instruction_5F_macro (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro GGS_pic_31__38_Instruction_5F_macro::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mMacroName,
                  const GGS_immediatExpressionList & in_mExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_macro * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_macro (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_macro_init_21__21__21_ (in_mInstructionLocation, in_mMacroName, in_mExpressionList, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_macro result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::
pic_31__38_Instruction_5F_macro_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                  const GGS_lstring & in_mMacroName,
                                                  const GGS_immediatExpressionList & in_mExpressionList,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMacroName = in_mMacroName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro::GGS_pic_31__38_Instruction_5F_macro (const cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_macro) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_macro::readProperty_mMacroName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    return p->mProperty_mMacroName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_pic_31__38_Instruction_5F_macro::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpressionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_macro) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_macro class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_macro::cPtr_pic_31__38_Instruction_5F_macro (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mMacroName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_macro::cPtr_pic_31__38_Instruction_5F_macro (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mMacroName,
                                                                            const GGS_immediatExpressionList & in_mExpressionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mMacroName (),
mProperty_mExpressionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMacroName = in_mMacroName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_macro::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

void cPtr_pic_31__38_Instruction_5F_macro::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_macro:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMacroName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_macro::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_macro (mProperty_mInstructionLocation, mProperty_mMacroName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_macro::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mMacroName.printNonNullClassInstanceProperties ("mMacroName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_macro generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ("pic18Instruction_macro",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_macro::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_macro::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_macro (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro GGS_pic_31__38_Instruction_5F_macro::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_macro result ;
  const GGS_pic_31__38_Instruction_5F_macro * p = (const GGS_pic_31__38_Instruction_5F_macro *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_macro *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_macro", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JUMP::objectCompare (const GGS_pic_31__38_Instruction_5F_JUMP & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JUMP::GGS_pic_31__38_Instruction_5F_JUMP (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP GGS_pic_31__38_Instruction_5F_JUMP::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mTargetLabel,
                  const GGS_jumpInstructionKind & in_mKind,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_JUMP_init_21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mKind, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::
pic_31__38_Instruction_5F_JUMP_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_jumpInstructionKind & in_mKind,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP::GGS_pic_31__38_Instruction_5F_JUMP (const cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_pic_31__38_Instruction_5F_JUMP::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_jumpInstructionKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMP) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMP::cPtr_pic_31__38_Instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMP::cPtr_pic_31__38_Instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mTargetLabel,
                                                                          const GGS_jumpInstructionKind & in_mKind,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

void cPtr_pic_31__38_Instruction_5F_JUMP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ("pic18Instruction_JUMP",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP GGS_pic_31__38_Instruction_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMP result ;
  const GGS_pic_31__38_Instruction_5F_JUMP * p = (const GGS_pic_31__38_Instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_JUMPCC reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JUMPCC::objectCompare (const GGS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JUMPCC::GGS_pic_31__38_Instruction_5F_JUMPCC (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC GGS_pic_31__38_Instruction_5F_JUMPCC::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_conditional_5F_branch & in_mConditionalBranch,
                      const GGS_bool & in_mIsBcc,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_JUMPCC * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_JUMPCC (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_JUMPCC_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mConditionalBranch, in_mIsBcc, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::
pic_31__38_Instruction_5F_JUMPCC_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mTargetLabel,
                                                       const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                       const GGS_bool & in_mIsBcc,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mConditionalBranch = in_mConditionalBranch ;
  mProperty_mIsBcc = in_mIsBcc ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC::GGS_pic_31__38_Instruction_5F_JUMPCC (const cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mConditionalBranch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_conditional_5F_branch () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mConditionalBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_JUMPCC::readProperty_mIsBcc (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
    return p->mProperty_mIsBcc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_JUMPCC class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMPCC::cPtr_pic_31__38_Instruction_5F_JUMPCC (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mConditionalBranch (),
mProperty_mIsBcc () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_JUMPCC::cPtr_pic_31__38_Instruction_5F_JUMPCC (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                                              const GGS_bool & in_mIsBcc,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mConditionalBranch (),
mProperty_mIsBcc () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mConditionalBranch = in_mConditionalBranch ;
  mProperty_mIsBcc = in_mIsBcc ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_JUMPCC::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

void cPtr_pic_31__38_Instruction_5F_JUMPCC::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_JUMPCC:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConditionalBranch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsBcc.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_JUMPCC::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_JUMPCC (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mConditionalBranch, mProperty_mIsBcc, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_JUMPCC::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mConditionalBranch.printNonNullClassInstanceProperties ("mConditionalBranch") ;
    mProperty_mIsBcc.printNonNullClassInstanceProperties ("mIsBcc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_JUMPCC generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ("pic18Instruction_JUMPCC",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_JUMPCC::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_JUMPCC::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_JUMPCC (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC GGS_pic_31__38_Instruction_5F_JUMPCC::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMPCC result ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC * p = (const GGS_pic_31__38_Instruction_5F_JUMPCC *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_JUMPCC *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LFSR::objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LFSR::GGS_pic_31__38_Instruction_5F_LFSR (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mFSRindex,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_LFSR * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_LFSR (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (in_mInstructionLocation, in_mFSRindex, in_mImmediatExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_LFSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::
pic_31__38_Instruction_5F_LFSR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_luint & in_mFSRindex,
                                                 const GGS_immediatExpression & in_mImmediatExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR::GGS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_LFSR::readProperty_mFSRindex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    return p->mProperty_mFSRindex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_LFSR::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LFSR) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LFSR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LFSR::cPtr_pic_31__38_Instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_luint & in_mFSRindex,
                                                                          const GGS_immediatExpression & in_mImmediatExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

void cPtr_pic_31__38_Instruction_5F_LFSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_LFSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFSRindex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_LFSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LFSR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFSRindex.printNonNullClassInstanceProperties ("mFSRindex") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LFSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ("pic18Instruction_LFSR",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LFSR result ;
  const GGS_pic_31__38_Instruction_5F_LFSR * p = (const GGS_pic_31__38_Instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mDataName,
                  const GGS_luint & in_mDataIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_LDATA_38_PTR_init_21__21__21_ (in_mInstructionLocation, in_mDataName, in_mDataIndex, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::
pic_31__38_Instruction_5F_LDATA_38_PTR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                         const GGS_lstring & in_mDataName,
                                                         const GGS_luint & in_mDataIndex,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDataName = in_mDataName ;
  mProperty_mDataIndex = in_mDataIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::readProperty_mDataName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    return p->mProperty_mDataName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::readProperty_mDataIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
    return p->mProperty_mDataIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LDATA8PTR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mDataName (),
mProperty_mDataIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_lstring & in_mDataName,
                                                                                          const GGS_luint & in_mDataIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mDataName (),
mProperty_mDataIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDataName = in_mDataName ;
  mProperty_mDataIndex = in_mDataIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_LDATA8PTR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDataName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDataIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (mProperty_mInstructionLocation, mProperty_mDataName, mProperty_mDataIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mDataName.printNonNullClassInstanceProperties ("mDataName") ;
    mProperty_mDataIndex.printNonNullClassInstanceProperties ("mDataIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LDATA8PTR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ("pic18Instruction_LDATA8PTR",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR GGS_pic_31__38_Instruction_5F_LDATA_38_PTR::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA8PTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LDATA_31__36_PTR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mDataName,
                  const GGS_luint & in_mDataIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_LDATA_31__36_PTR_init_21__21__21_ (in_mInstructionLocation, in_mDataName, in_mDataIndex, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::
pic_31__38_Instruction_5F_LDATA_31__36_PTR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_lstring & in_mDataName,
                                                             const GGS_luint & in_mDataIndex,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDataName = in_mDataName ;
  mProperty_mDataIndex = in_mDataIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::readProperty_mDataName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
    return p->mProperty_mDataName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::readProperty_mDataIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
    return p->mProperty_mDataIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LDATA16PTR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mDataName (),
mProperty_mDataIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_lstring & in_mDataName,
                                                                                                  const GGS_luint & in_mDataIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mDataName (),
mProperty_mDataIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDataName = in_mDataName ;
  mProperty_mDataIndex = in_mDataIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;
}

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_LDATA16PTR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDataName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDataIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (mProperty_mInstructionLocation, mProperty_mDataName, mProperty_mDataIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mDataName.printNonNullClassInstanceProperties ("mDataName") ;
    mProperty_mDataIndex.printNonNullClassInstanceProperties ("mDataIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LDATA16PTR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ("pic18Instruction_LDATA16PTR",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA16PTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MNOP::objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MNOP::GGS_pic_31__38_Instruction_5F_MNOP (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::
pic_31__38_Instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_luint & in_mOccurrenceFactor,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP::GGS_pic_31__38_Instruction_5F_MNOP (const cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_MNOP * p = (cPtr_pic_31__38_Instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MNOP::cPtr_pic_31__38_Instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_MNOP::cPtr_pic_31__38_Instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_luint & in_mOccurrenceFactor,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

void cPtr_pic_31__38_Instruction_5F_MNOP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ("pic18Instruction_MNOP",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MNOP result ;
  const GGS_pic_31__38_Instruction_5F_MNOP * p = (const GGS_pic_31__38_Instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_NOPBRA::objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_NOPBRA::GGS_pic_31__38_Instruction_5F_NOPBRA (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_NOPBRA * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_NOPBRA (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::
pic_31__38_Instruction_5F_NOPBRA_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_luint & in_mOccurrenceFactor,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA::GGS_pic_31__38_Instruction_5F_NOPBRA (const cPtr_pic_31__38_Instruction_5F_NOPBRA * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_pic_31__38_Instruction_5F_NOPBRA::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (cPtr_pic_31__38_Instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_NOPBRA::cPtr_pic_31__38_Instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_NOPBRA::cPtr_pic_31__38_Instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_luint & in_mOccurrenceFactor,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;
}

void cPtr_pic_31__38_Instruction_5F_NOPBRA::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_NOPBRA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_NOPBRA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_NOPBRA (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_NOPBRA::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_NOPBRA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ("pic18Instruction_NOPBRA",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_NOPBRA result ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA * p = (const GGS_pic_31__38_Instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                      const GGS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                      const GGS_registerExpression & in_mRegisterExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_init_21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mOpCode, in_mRegisterExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::
pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                          const GGS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                          const GGS_registerExpression & in_mRegisterExpression,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mOpCode = in_mOpCode ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::readProperty_mOpCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_if_5F_semi_5F_colon_5F_op () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    return p->mProperty_mOpCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mOpCode (),
mProperty_mRegisterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                                                    const GGS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mOpCode (),
mProperty_mRegisterExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mOpCode = in_mOpCode ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_IF_FA_SEMI_COLON:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mOpCode, mProperty_mRegisterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mOpCode.printNonNullClassInstanceProperties ("mOpCode") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_FA_SEMI_COLON generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ("pic18Instruction_IF_FA_SEMI_COLON",
                                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_FA_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                          const GGS_bool & in_mSkipIfSet,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bitNumberExpression & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::
pic_31__38_Instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                  const GGS_bool & in_mSkipIfSet,
                                                                  const GGS_registerExpression & in_mRegisterExpression,
                                                                  const GGS_bitNumberExpression & in_mBitNumber,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                            const GGS_bool & in_mSkipIfSet,
                                                                                            const GGS_registerExpression & in_mRegisterExpression,
                                                                                            const GGS_bitNumberExpression & in_mBitNumber,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_IF_BitTest:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_BitTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ("pic18Instruction_IF_BitTest",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest GGS_pic_31__38_Instruction_5F_IF_5F_BitTest::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                              const GGS_bool & in_mIncrement,
                              const GGS_bool & in_mSkipIfZero,
                              const GGS_registerExpression & in_mRegisterExpression,
                              const GGS_bool & in_m_5F_W_5F_isDestination,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_IF_5F_IncDec_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mIncrement, in_mSkipIfZero, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::
pic_31__38_Instruction_5F_IF_5F_IncDec_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                     const GGS_bool & in_mIncrement,
                                                                     const GGS_bool & in_mSkipIfZero,
                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mSkipIfZero = in_mSkipIfZero ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_mSkipIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mSkipIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mSkipIfZero (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                          const GGS_bool & in_mIncrement,
                                                                                          const GGS_bool & in_mSkipIfZero,
                                                                                          const GGS_registerExpression & in_mRegisterExpression,
                                                                                          const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mSkipIfZero (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mSkipIfZero = in_mSkipIfZero ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_IF_IncDec:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mIncrement, mProperty_mSkipIfZero, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_mSkipIfZero.printNonNullClassInstanceProperties ("mSkipIfZero") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_IncDec generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ("pic18Instruction_IF_IncDec",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec GGS_pic_31__38_Instruction_5F_IF_5F_IncDec::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_RegisterTestCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_RegisterTestCondition::objectCompare (const GGS_pic_31__38_RegisterTestCondition & inOperand) const {
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

GGS_pic_31__38_RegisterTestCondition::GGS_pic_31__38_RegisterTestCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition GGS_pic_31__38_RegisterTestCondition::
init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
              const GGS_bool & in_mBranchIfZero,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_RegisterTestCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_RegisterTestCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_RegisterTestCondition_init_21__21_ (in_mRegisterExpression, in_mBranchIfZero, inCompiler) ;
  const GGS_pic_31__38_RegisterTestCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterTestCondition::
pic_31__38_RegisterTestCondition_init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                               const GGS_bool & in_mBranchIfZero,
                                               Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition::GGS_pic_31__38_RegisterTestCondition (const cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterTestCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_RegisterTestCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_RegisterTestCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterTestCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterTestCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterTestCondition::cPtr_pic_31__38_RegisterTestCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterTestCondition::cPtr_pic_31__38_RegisterTestCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                              const GGS_bool & in_mBranchIfZero,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBranchIfZero () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_RegisterTestCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

void cPtr_pic_31__38_RegisterTestCondition::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18RegisterTestCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_RegisterTestCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterTestCondition (mProperty_mRegisterExpression, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_RegisterTestCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18RegisterTestCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ("pic18RegisterTestCondition",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterTestCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterTestCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterTestCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition GGS_pic_31__38_RegisterTestCondition::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterTestCondition result ;
  const GGS_pic_31__38_RegisterTestCondition * p = (const GGS_pic_31__38_RegisterTestCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterTestCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterTestCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_RegisterComparisonCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_RegisterComparisonCondition::objectCompare (const GGS_pic_31__38_RegisterComparisonCondition & inOperand) const {
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

GGS_pic_31__38_RegisterComparisonCondition::GGS_pic_31__38_RegisterComparisonCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition GGS_pic_31__38_RegisterComparisonCondition::
init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
              const GGS_pic_31__38_RegisterComparison & in_mComparison,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_RegisterComparisonCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_RegisterComparisonCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_RegisterComparisonCondition_init_21__21_ (in_mRegisterExpression, in_mComparison, inCompiler) ;
  const GGS_pic_31__38_RegisterComparisonCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonCondition::
pic_31__38_RegisterComparisonCondition_init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                     const GGS_pic_31__38_RegisterComparison & in_mComparison,
                                                     Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mComparison = in_mComparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition::GGS_pic_31__38_RegisterComparisonCondition (const cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_RegisterComparisonCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonCondition * p = (cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparisonCondition::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_RegisterComparison () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonCondition * p = (cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonCondition) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterComparisonCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonCondition::cPtr_pic_31__38_RegisterComparisonCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mComparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonCondition::cPtr_pic_31__38_RegisterComparisonCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                          const GGS_pic_31__38_RegisterComparison & in_mComparison,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mComparison () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mComparison = in_mComparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_RegisterComparisonCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

void cPtr_pic_31__38_RegisterComparisonCondition::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18RegisterComparisonCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_RegisterComparisonCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonCondition (mProperty_mRegisterExpression, mProperty_mComparison, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_RegisterComparisonCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18RegisterComparisonCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ("pic18RegisterComparisonCondition",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparisonCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparisonCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparisonCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition GGS_pic_31__38_RegisterComparisonCondition::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonCondition result ;
  const GGS_pic_31__38_RegisterComparisonCondition * p = (const GGS_pic_31__38_RegisterComparisonCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparisonCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_IncDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_IncDecRegisterInCondition::objectCompare (const GGS_pic_31__38_IncDecRegisterInCondition & inOperand) const {
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

GGS_pic_31__38_IncDecRegisterInCondition::GGS_pic_31__38_IncDecRegisterInCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition GGS_pic_31__38_IncDecRegisterInCondition::
init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_mIncrement,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      const GGS_bool & in_mBranchIfZero,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_IncDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_IncDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_IncDecRegisterInCondition_init_21__21__21__21_ (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_pic_31__38_IncDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::
pic_31__38_IncDecRegisterInCondition_init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                           const GGS_bool & in_mIncrement,
                                                           const GGS_bool & in_m_5F_W_5F_isDestination,
                                                           const GGS_bool & in_mBranchIfZero,
                                                           Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition::GGS_pic_31__38_IncDecRegisterInCondition (const cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IncDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_IncDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_IncDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_IncDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_IncDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IncDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18IncDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IncDecRegisterInCondition::cPtr_pic_31__38_IncDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IncDecRegisterInCondition::cPtr_pic_31__38_IncDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                      const GGS_bool & in_mIncrement,
                                                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                      const GGS_bool & in_mBranchIfZero,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_IncDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

void cPtr_pic_31__38_IncDecRegisterInCondition::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18IncDecRegisterInCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_IncDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_IncDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_IncDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18IncDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ("pic18IncDecRegisterInCondition",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_IncDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_IncDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_IncDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition GGS_pic_31__38_IncDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IncDecRegisterInCondition result ;
  const GGS_pic_31__38_IncDecRegisterInCondition * p = (const GGS_pic_31__38_IncDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_IncDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IncDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_BitTestInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BitTestInStructuredCondition::objectCompare (const GGS_pic_31__38_BitTestInStructuredCondition & inOperand) const {
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

GGS_pic_31__38_BitTestInStructuredCondition::GGS_pic_31__38_BitTestInStructuredCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition GGS_pic_31__38_BitTestInStructuredCondition::
init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
              const GGS_bitNumberExpression & in_mBitNumber,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_BitTestInStructuredCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_BitTestInStructuredCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_BitTestInStructuredCondition_init_21__21_ (in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_pic_31__38_BitTestInStructuredCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestInStructuredCondition::
pic_31__38_BitTestInStructuredCondition_init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                      const GGS_bitNumberExpression & in_mBitNumber,
                                                      Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition::GGS_pic_31__38_BitTestInStructuredCondition (const cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestInStructuredCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_pic_31__38_BitTestInStructuredCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_pic_31__38_BitTestInStructuredCondition * p = (cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_pic_31__38_BitTestInStructuredCondition::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_pic_31__38_BitTestInStructuredCondition * p = (cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestInStructuredCondition) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18BitTestInStructuredCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestInStructuredCondition::cPtr_pic_31__38_BitTestInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestInStructuredCondition::cPtr_pic_31__38_BitTestInStructuredCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                            const GGS_bitNumberExpression & in_mBitNumber,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_BitTestInStructuredCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

void cPtr_pic_31__38_BitTestInStructuredCondition::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18BitTestInStructuredCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_BitTestInStructuredCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestInStructuredCondition (mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_BitTestInStructuredCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18BitTestInStructuredCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ("pic18BitTestInStructuredCondition",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BitTestInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BitTestInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BitTestInStructuredCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition GGS_pic_31__38_BitTestInStructuredCondition::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestInStructuredCondition result ;
  const GGS_pic_31__38_BitTestInStructuredCondition * p = (const GGS_pic_31__38_BitTestInStructuredCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BitTestInStructuredCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestInStructuredCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AST::GGS_pic_31__38_AST (void) :
mProperty_mProgramName (),
mProperty_mProgramKind (),
mProperty_mDeviceNameOrBootLoaderReference (),
mProperty_mConfigDefinitionList (),
mProperty_mRamDefinitionList (),
mProperty_mUnusedRegisterList (),
mProperty_mCheckpicList (),
mProperty_mDataList (),
mProperty_mInterruptDefinitionList (),
mProperty_mConstantDefinitionList (),
mProperty_mRoutineDefinitionList (),
mProperty_mMacroDefinitionList (),
mProperty_mUnusedRoutineList (),
mProperty_mInlinedRoutineList (),
mProperty_mNeedsComputedGoto_32_ (),
mProperty_mNeedsComputedGoto_34_ (),
mProperty_mEndOfProgram () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AST::GGS_pic_31__38_AST (const GGS_pic_31__38_AST & inSource) :
mProperty_mProgramName (inSource.mProperty_mProgramName),
mProperty_mProgramKind (inSource.mProperty_mProgramKind),
mProperty_mDeviceNameOrBootLoaderReference (inSource.mProperty_mDeviceNameOrBootLoaderReference),
mProperty_mConfigDefinitionList (inSource.mProperty_mConfigDefinitionList),
mProperty_mRamDefinitionList (inSource.mProperty_mRamDefinitionList),
mProperty_mUnusedRegisterList (inSource.mProperty_mUnusedRegisterList),
mProperty_mCheckpicList (inSource.mProperty_mCheckpicList),
mProperty_mDataList (inSource.mProperty_mDataList),
mProperty_mInterruptDefinitionList (inSource.mProperty_mInterruptDefinitionList),
mProperty_mConstantDefinitionList (inSource.mProperty_mConstantDefinitionList),
mProperty_mRoutineDefinitionList (inSource.mProperty_mRoutineDefinitionList),
mProperty_mMacroDefinitionList (inSource.mProperty_mMacroDefinitionList),
mProperty_mUnusedRoutineList (inSource.mProperty_mUnusedRoutineList),
mProperty_mInlinedRoutineList (inSource.mProperty_mInlinedRoutineList),
mProperty_mNeedsComputedGoto_32_ (inSource.mProperty_mNeedsComputedGoto_32_),
mProperty_mNeedsComputedGoto_34_ (inSource.mProperty_mNeedsComputedGoto_34_),
mProperty_mEndOfProgram (inSource.mProperty_mEndOfProgram) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AST & GGS_pic_31__38_AST::operator = (const GGS_pic_31__38_AST & inSource) {
  mProperty_mProgramName = inSource.mProperty_mProgramName ;
  mProperty_mProgramKind = inSource.mProperty_mProgramKind ;
  mProperty_mDeviceNameOrBootLoaderReference = inSource.mProperty_mDeviceNameOrBootLoaderReference ;
  mProperty_mConfigDefinitionList = inSource.mProperty_mConfigDefinitionList ;
  mProperty_mRamDefinitionList = inSource.mProperty_mRamDefinitionList ;
  mProperty_mUnusedRegisterList = inSource.mProperty_mUnusedRegisterList ;
  mProperty_mCheckpicList = inSource.mProperty_mCheckpicList ;
  mProperty_mDataList = inSource.mProperty_mDataList ;
  mProperty_mInterruptDefinitionList = inSource.mProperty_mInterruptDefinitionList ;
  mProperty_mConstantDefinitionList = inSource.mProperty_mConstantDefinitionList ;
  mProperty_mRoutineDefinitionList = inSource.mProperty_mRoutineDefinitionList ;
  mProperty_mMacroDefinitionList = inSource.mProperty_mMacroDefinitionList ;
  mProperty_mUnusedRoutineList = inSource.mProperty_mUnusedRoutineList ;
  mProperty_mInlinedRoutineList = inSource.mProperty_mInlinedRoutineList ;
  mProperty_mNeedsComputedGoto_32_ = inSource.mProperty_mNeedsComputedGoto_32_ ;
  mProperty_mNeedsComputedGoto_34_ = inSource.mProperty_mNeedsComputedGoto_34_ ;
  mProperty_mEndOfProgram = inSource.mProperty_mEndOfProgram ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_AST GGS_pic_31__38_AST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mProgramName,
                                                                                                                 const GGS_programKind & in_mProgramKind,
                                                                                                                 const GGS_lstring & in_mDeviceNameOrBootLoaderReference,
                                                                                                                 const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                                                                                 const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                                                                                 const GGS_lstringlist & in_mUnusedRegisterList,
                                                                                                                 const GGS_checkpicList & in_mCheckpicList,
                                                                                                                 const GGS_dataList & in_mDataList,
                                                                                                                 const GGS_pic_31__38_InterruptDefinitionList & in_mInterruptDefinitionList,
                                                                                                                 const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                                                                                 const GGS_pic_31__38_RoutineDefinitionList & in_mRoutineDefinitionList,
                                                                                                                 const GGS_pic_31__38_MacroDefinitionList & in_mMacroDefinitionList,
                                                                                                                 const GGS_lstringlist & in_mUnusedRoutineList,
                                                                                                                 const GGS_lstringlist & in_mInlinedRoutineList,
                                                                                                                 const GGS_bool & in_mNeedsComputedGoto_32_,
                                                                                                                 const GGS_bool & in_mNeedsComputedGoto_34_,
                                                                                                                 const GGS_location & in_mEndOfProgram,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_AST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProgramName = in_mProgramName ;
  result.mProperty_mProgramKind = in_mProgramKind ;
  result.mProperty_mDeviceNameOrBootLoaderReference = in_mDeviceNameOrBootLoaderReference ;
  result.mProperty_mConfigDefinitionList = in_mConfigDefinitionList ;
  result.mProperty_mRamDefinitionList = in_mRamDefinitionList ;
  result.mProperty_mUnusedRegisterList = in_mUnusedRegisterList ;
  result.mProperty_mCheckpicList = in_mCheckpicList ;
  result.mProperty_mDataList = in_mDataList ;
  result.mProperty_mInterruptDefinitionList = in_mInterruptDefinitionList ;
  result.mProperty_mConstantDefinitionList = in_mConstantDefinitionList ;
  result.mProperty_mRoutineDefinitionList = in_mRoutineDefinitionList ;
  result.mProperty_mMacroDefinitionList = in_mMacroDefinitionList ;
  result.mProperty_mUnusedRoutineList = in_mUnusedRoutineList ;
  result.mProperty_mInlinedRoutineList = in_mInlinedRoutineList ;
  result.mProperty_mNeedsComputedGoto_32_ = in_mNeedsComputedGoto_32_ ;
  result.mProperty_mNeedsComputedGoto_34_ = in_mNeedsComputedGoto_34_ ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_AST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AST::GGS_pic_31__38_AST (const GGS_lstring & inOperand0,
                                        const GGS_programKind & inOperand1,
                                        const GGS_lstring & inOperand2,
                                        const GGS_configDefinitionList & inOperand3,
                                        const GGS_ramDefinitionList & inOperand4,
                                        const GGS_lstringlist & inOperand5,
                                        const GGS_checkpicList & inOperand6,
                                        const GGS_dataList & inOperand7,
                                        const GGS_pic_31__38_InterruptDefinitionList & inOperand8,
                                        const GGS_constantDefinitionList & inOperand9,
                                        const GGS_pic_31__38_RoutineDefinitionList & inOperand10,
                                        const GGS_pic_31__38_MacroDefinitionList & inOperand11,
                                        const GGS_lstringlist & inOperand12,
                                        const GGS_lstringlist & inOperand13,
                                        const GGS_bool & inOperand14,
                                        const GGS_bool & inOperand15,
                                        const GGS_location & inOperand16) :
mProperty_mProgramName (inOperand0),
mProperty_mProgramKind (inOperand1),
mProperty_mDeviceNameOrBootLoaderReference (inOperand2),
mProperty_mConfigDefinitionList (inOperand3),
mProperty_mRamDefinitionList (inOperand4),
mProperty_mUnusedRegisterList (inOperand5),
mProperty_mCheckpicList (inOperand6),
mProperty_mDataList (inOperand7),
mProperty_mInterruptDefinitionList (inOperand8),
mProperty_mConstantDefinitionList (inOperand9),
mProperty_mRoutineDefinitionList (inOperand10),
mProperty_mMacroDefinitionList (inOperand11),
mProperty_mUnusedRoutineList (inOperand12),
mProperty_mInlinedRoutineList (inOperand13),
mProperty_mNeedsComputedGoto_32_ (inOperand14),
mProperty_mNeedsComputedGoto_34_ (inOperand15),
mProperty_mEndOfProgram (inOperand16) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_AST::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mProgramKind.isValid () && mProperty_mDeviceNameOrBootLoaderReference.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mCheckpicList.isValid () && mProperty_mDataList.isValid () && mProperty_mInterruptDefinitionList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mMacroDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mInlinedRoutineList.isValid () && mProperty_mNeedsComputedGoto_32_.isValid () && mProperty_mNeedsComputedGoto_34_.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_AST::drop (void) {
  mProperty_mProgramName.drop () ;
  mProperty_mProgramKind.drop () ;
  mProperty_mDeviceNameOrBootLoaderReference.drop () ;
  mProperty_mConfigDefinitionList.drop () ;
  mProperty_mRamDefinitionList.drop () ;
  mProperty_mUnusedRegisterList.drop () ;
  mProperty_mCheckpicList.drop () ;
  mProperty_mDataList.drop () ;
  mProperty_mInterruptDefinitionList.drop () ;
  mProperty_mConstantDefinitionList.drop () ;
  mProperty_mRoutineDefinitionList.drop () ;
  mProperty_mMacroDefinitionList.drop () ;
  mProperty_mUnusedRoutineList.drop () ;
  mProperty_mInlinedRoutineList.drop () ;
  mProperty_mNeedsComputedGoto_32_.drop () ;
  mProperty_mNeedsComputedGoto_34_.drop () ;
  mProperty_mEndOfProgram.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_AST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18AST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProgramKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeviceNameOrBootLoaderReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCheckpicList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDataList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMacroDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInlinedRoutineList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18AST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AST ("pic18AST",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_AST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_AST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_AST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AST GGS_pic_31__38_AST::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_AST result ;
  const GGS_pic_31__38_AST * p = (const GGS_pic_31__38_AST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_AST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18SequentialInstruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_SequentialInstruction::getter_instructionSize (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}



//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionSize (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SequentialInstruction::method_performInstructionRelativeBranchResolution (const GGS_uint /* constinArgument_inAddress */,
                                                                                                const GGS_string /* constinArgument_inBlockLabel */,
                                                                                                const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                GGS_uint & /* ioArgument_ioConversionCount */,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstruction temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInstructionRelativeBranchResolution (cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const GGS_uint constin_inAddress,
                                                                     const GGS_string constin_inBlockLabel,
                                                                     const GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     GGS_uint & io_ioConversionCount,
                                                                     GGS_string & io_ioListFileContents,
                                                                     GGS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  out_outModifiedInstruction.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_ipic_31__38_SequentialInstruction) ;
    inObject->method_performInstructionRelativeBranchResolution (constin_inAddress, constin_inBlockLabel, constin_inSymbolTable, io_ioConversionCount, io_ioListFileContents, out_outModifiedInstruction, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist callExtensionGetter_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GGS_stringlist result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionDisplay (inCompiler COMMA_THERE) ;
  }
  return result ;
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

