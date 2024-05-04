#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//  Enum baseline_instruction_FD_base_code
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_RLF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_RRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
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

static const char * gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [15] = {
  "(not built)",
  "ADDWF",
  "ANDWF",
  "COMF",
  "DECF",
  "DECFSZ",
  "INCF",
  "INCFSZ",
  "IORWF",
  "MOVF",
  "RLF",
  "RRF",
  "SUBWF",
  "SWAPF",
  "XORWF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::description (String & ioString,
                                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_instruction_FD_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_instruction_5F_FD_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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
//
//     @baseline_instruction_FD_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ("baseline_instruction_FD_base_code",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code * p = (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_instruction_FD_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      result_outResult = GGS_string ("ADDWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      result_outResult = GGS_string ("ANDWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      result_outResult = GGS_string ("COMF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      result_outResult = GGS_string ("DECF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      result_outResult = GGS_string ("DECFSZ") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      result_outResult = GGS_string ("INCF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      result_outResult = GGS_string ("INCFSZ") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      result_outResult = GGS_string ("IORWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      result_outResult = GGS_string ("MOVF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      result_outResult = GGS_string ("RLF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      result_outResult = GGS_string ("RRF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      result_outResult = GGS_string ("SUBWF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      result_outResult = GGS_string ("SWAPF") ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      result_outResult = GGS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Enum baseline_F_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::GGS_baseline_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_F_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_F_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_F_instruction_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ("baseline_F_instruction_base_code",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_F_5F_instruction_5F_base_5F_code result ;
  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code * p = (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_F_instruction_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      result_outResult = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      result_outResult = GGS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Enum baseline_bit_oriented_op
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op::GGS_baseline_5F_bit_5F_oriented_5F_op (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_bit_5F_oriented_5F_op::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_bit_5F_oriented_5F_op [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_bit_oriented_op generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ("baseline_bit_oriented_op",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_bit_5F_oriented_5F_op::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_bit_5F_oriented_5F_op result ;
  const GGS_baseline_5F_bit_5F_oriented_5F_op * p = (const GGS_baseline_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_bit_oriented_op mnemonic'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_bit_5F_oriented_5F_op & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      result_outResult = GGS_string ("BCF") ;
    }
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      result_outResult = GGS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Enum baseline_literal_instruction_opcode
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode::GGS_baseline_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_RETLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [6] = {
  "(not built)",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "RETLW",
  "XORLW"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RETLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_literal_5F_instruction_5F_opcode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_literal_5F_instruction_5F_opcode::objectCompare (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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
//
//     @baseline_literal_instruction_opcode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ("baseline_literal_instruction_opcode",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_literal_5F_instruction_5F_opcode::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_literal_5F_instruction_5F_opcode result ;
  const GGS_baseline_5F_literal_5F_instruction_5F_opcode * p = (const GGS_baseline_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_literal_instruction_opcode mnemonic'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outResult = GGS_string ("ANDLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outResult = GGS_string ("IORLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outResult = GGS_string ("MOVLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      result_outResult = GGS_string ("RETLW") ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outResult = GGS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Enum baseline_WO_OPERAND_group
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group::GGS_baseline_5F_WO_5F_OPERAND_5F_group (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRW (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_CLRW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_NOP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_CLRWDT (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_CLRWDT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_OPTION_5F_ (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_OPTION_5F_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_SLEEP (UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  result.mEnum = Enumeration::enum_SLEEP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [6] = {
  "(not built)",
  "CLRW",
  "NOP",
  "CLRWDT",
  "OPTION_",
  "SLEEP"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NOP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRWDT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isOPTION_5F_ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_OPTION_5F_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_WO_5F_OPERAND_5F_group::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SLEEP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_WO_5F_OPERAND_5F_group::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @baseline_WO_OPERAND_group: ") ;
  ioString.appendCString (gEnumNameArrayFor_baseline_5F_WO_5F_OPERAND_5F_group [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_WO_OPERAND_group generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ("baseline_WO_OPERAND_group",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_WO_5F_OPERAND_5F_group::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_WO_5F_OPERAND_5F_group::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_WO_5F_OPERAND_5F_group (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_WO_5F_OPERAND_5F_group::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_WO_5F_OPERAND_5F_group result ;
  const GGS_baseline_5F_WO_5F_OPERAND_5F_group * p = (const GGS_baseline_5F_WO_5F_OPERAND_5F_group *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_WO_5F_OPERAND_5F_group *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_WO_OPERAND_group", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@baseline_WO_OPERAND_group mnemonic'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_baseline_5F_WO_5F_OPERAND_5F_group temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_NOP:
    {
      result_outResult = GGS_string ("NOP") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRW:
    {
      result_outResult = GGS_string ("CLRW") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRWDT:
    {
      result_outResult = GGS_string ("CLRWDT") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_OPTION_5F_:
    {
      result_outResult = GGS_string ("OPTION") ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_SLEEP:
    {
      result_outResult = GGS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction::objectCompare (const GGS_baseline_5F_instruction & inOperand) const {
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

GGS_baseline_5F_instruction::GGS_baseline_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction::GGS_baseline_5F_instruction (const cPtr_baseline_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction::setProperty_mInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (const GGS_location & in_mInstructionLocation
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction ("baseline_instruction",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction result ;
  const GGS_baseline_5F_instruction * p = (const GGS_baseline_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_2E_weak::GGS_baseline_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak & GGS_baseline_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak::GGS_baseline_5F_instruction_2E_weak (const GGS_baseline_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak GGS_baseline_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction_2E_weak::bang_baseline_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction) ;
      result = GGS_baseline_5F_instruction ((cPtr_baseline_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak ("baseline_instruction.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak GGS_baseline_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_instruction_2E_weak * p = (const GGS_baseline_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_instructionList : public cCollectionElement {
  public: GGS_baseline_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_instructionList (const GGS_baseline_5F_instruction & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_instructionList (const GGS_baseline_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_instructionList::cCollectionElement_baseline_5F_instructionList (const GGS_baseline_5F_instruction & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_instructionList::cCollectionElement_baseline_5F_instructionList (const GGS_baseline_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList::GGS_baseline_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList::GGS_baseline_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::enterElement (const GGS_baseline_5F_instructionList_2E_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_instruction & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GGS_baseline_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_baseline_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_baseline_5F_instruction & in_mInstruction
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::addAssign_operation (const GGS_baseline_5F_instruction & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_append (const GGS_baseline_5F_instruction inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_instruction inOperand0,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_instruction & outOperand0,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_popFirst (GGS_baseline_5F_instruction & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_popLast (GGS_baseline_5F_instruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::method_first (GGS_baseline_5F_instruction & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::method_last (GGS_baseline_5F_instruction & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::add_operation (const GGS_baseline_5F_instructionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result = GGS_baseline_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result = GGS_baseline_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result = GGS_baseline_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::plusAssign_operation (const GGS_baseline_5F_instructionList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_instruction inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_instructionList * p = (cCollectionElement_baseline_5F_instructionList *) attributes.ptr () ;
  GGS_baseline_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_instructionList::cEnumerator_baseline_5F_instructionList (const GGS_baseline_5F_instructionList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element cEnumerator_baseline_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_instructionList * p = (const cCollectionElement_baseline_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction cEnumerator_baseline_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_instructionList * p = (const cCollectionElement_baseline_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList ("baseline_instructionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList result ;
  const GGS_baseline_5F_instructionList * p = (const GGS_baseline_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_instruction_5F_FD_2E_weak (const GGS_baseline_5F_instruction_5F_FD & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD GGS_baseline_5F_instruction_5F_FD_2E_weak::bang_baseline_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FD) ;
      result = GGS_baseline_5F_instruction_5F_FD ((cPtr_baseline_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FD.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2E_weak ("baseline_instruction_FD.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_FD_2E_weak * p = (const GGS_baseline_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_instruction_5F_F_2E_weak (const GGS_baseline_5F_instruction_5F_F & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak GGS_baseline_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F GGS_baseline_5F_instruction_5F_F_2E_weak::bang_baseline_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_F) ;
      result = GGS_baseline_5F_instruction_5F_F ((cPtr_baseline_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_F.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2E_weak ("baseline_instruction_F.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak GGS_baseline_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_F_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_F_2E_weak * p = (const GGS_baseline_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_instruction_5F_FB_2E_weak (const GGS_baseline_5F_instruction_5F_FB & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB GGS_baseline_5F_instruction_5F_FB_2E_weak::bang_baseline_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FB) ;
      result = GGS_baseline_5F_instruction_5F_FB ((cPtr_baseline_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FB.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2E_weak ("baseline_instruction_FB.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FB_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_FB_2E_weak * p = (const GGS_baseline_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_CALL_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_CALL_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_CALL_2E_weak::GGS_baseline_5F_instruction_5F_CALL_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak & GGS_baseline_5F_instruction_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak::GGS_baseline_5F_instruction_5F_CALL_2E_weak (const GGS_baseline_5F_instruction_5F_CALL & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak GGS_baseline_5F_instruction_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL GGS_baseline_5F_instruction_5F_CALL_2E_weak::bang_baseline_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_CALL) ;
      result = GGS_baseline_5F_instruction_5F_CALL ((cPtr_baseline_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_CALL.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2E_weak ("baseline_instruction_CALL.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak GGS_baseline_5F_instruction_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_CALL_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_CALL_2E_weak * p = (const GGS_baseline_5F_instruction_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_JSR_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_JSR_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_JSR_2E_weak::GGS_baseline_5F_instruction_5F_JSR_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak & GGS_baseline_5F_instruction_5F_JSR_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak::GGS_baseline_5F_instruction_5F_JSR_2E_weak (const GGS_baseline_5F_instruction_5F_JSR & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak GGS_baseline_5F_instruction_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR GGS_baseline_5F_instruction_5F_JSR_2E_weak::bang_baseline_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JSR) ;
      result = GGS_baseline_5F_instruction_5F_JSR ((cPtr_baseline_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_JSR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2E_weak ("baseline_instruction_JSR.weak",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak GGS_baseline_5F_instruction_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JSR_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_JSR_2E_weak * p = (const GGS_baseline_5F_instruction_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_GOTO_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_GOTO_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_GOTO_2E_weak::GGS_baseline_5F_instruction_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak & GGS_baseline_5F_instruction_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak::GGS_baseline_5F_instruction_5F_GOTO_2E_weak (const GGS_baseline_5F_instruction_5F_GOTO & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak GGS_baseline_5F_instruction_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO GGS_baseline_5F_instruction_5F_GOTO_2E_weak::bang_baseline_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
      result = GGS_baseline_5F_instruction_5F_GOTO ((cPtr_baseline_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_GOTO.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2E_weak ("baseline_instruction_GOTO.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak GGS_baseline_5F_instruction_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_GOTO_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_GOTO_2E_weak * p = (const GGS_baseline_5F_instruction_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_JUMP_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_JUMP_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_JUMP_2E_weak::GGS_baseline_5F_instruction_5F_JUMP_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak & GGS_baseline_5F_instruction_5F_JUMP_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak::GGS_baseline_5F_instruction_5F_JUMP_2E_weak (const GGS_baseline_5F_instruction_5F_JUMP & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak GGS_baseline_5F_instruction_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP GGS_baseline_5F_instruction_5F_JUMP_2E_weak::bang_baseline_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
      result = GGS_baseline_5F_instruction_5F_JUMP ((cPtr_baseline_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_JUMP.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2E_weak ("baseline_instruction_JUMP.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak GGS_baseline_5F_instruction_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JUMP_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_JUMP_2E_weak * p = (const GGS_baseline_5F_instruction_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const {
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

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::
baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                           const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (in_mInstructionLocation, in_mInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::setProperty_mInstruction (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_WO_OPERAND generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ("baseline_instruction_WO_OPERAND",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::bang_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
      result = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND ((cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_WO_OPERAND.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak ("baseline_instruction_WO_OPERAND.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak * p = (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_TRIS_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_TRIS_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_TRIS_2E_weak::GGS_baseline_5F_instruction_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak & GGS_baseline_5F_instruction_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak::GGS_baseline_5F_instruction_5F_TRIS_2E_weak (const GGS_baseline_5F_instruction_5F_TRIS & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak GGS_baseline_5F_instruction_5F_TRIS_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_TRIS_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS GGS_baseline_5F_instruction_5F_TRIS_2E_weak::bang_baseline_5F_instruction_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
      result = GGS_baseline_5F_instruction_5F_TRIS ((cPtr_baseline_5F_instruction_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_TRIS.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2E_weak ("baseline_instruction_TRIS.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_TRIS_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_TRIS_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_TRIS_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak GGS_baseline_5F_instruction_5F_TRIS_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_TRIS_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_TRIS_2E_weak * p = (const GGS_baseline_5F_instruction_5F_TRIS_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_TRIS_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_TRIS.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_literalOperation::objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_baseline_5F_instruction_5F_literalOperation::GGS_baseline_5F_instruction_5F_literalOperation (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::
baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                              const GGS_immediatExpression & in_mImmediatExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation::GGS_baseline_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                 const GGS_immediatExpression & in_mImmediatExpression
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_literalOperation::setProperty_mLiteralInstruction (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_baseline_5F_instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_literalOperation::setProperty_mImmediatExpression (const GGS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GGS_immediatExpression & in_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ("baseline_instruction_literalOperation",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation result ;
  const GGS_baseline_5F_instruction_5F_literalOperation * p = (const GGS_baseline_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (const GGS_baseline_5F_instruction_5F_literalOperation & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::bang_baseline_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
      result = GGS_baseline_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_literalOperation.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2E_weak ("baseline_instruction_literalOperation.weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_MNOP::cPtr_baseline_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_MNOP::objectCompare (const GGS_baseline_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_baseline_5F_instruction_5F_MNOP::GGS_baseline_5F_instruction_5F_MNOP (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP GGS_baseline_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::
baseline_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_luint & in_mOccurrenceFactor,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP::GGS_baseline_5F_instruction_5F_MNOP (const cPtr_baseline_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP GGS_baseline_5F_instruction_5F_MNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_luint & in_mOccurrenceFactor
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_baseline_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_baseline_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_MNOP::setProperty_mOccurrenceFactor (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_MNOP::cPtr_baseline_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_luint & in_mOccurrenceFactor
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;
}

void cPtr_baseline_5F_instruction_5F_MNOP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ("baseline_instruction_MNOP",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP GGS_baseline_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_MNOP result ;
  const GGS_baseline_5F_instruction_5F_MNOP * p = (const GGS_baseline_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak & GGS_baseline_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_instruction_5F_MNOP_2E_weak (const GGS_baseline_5F_instruction_5F_MNOP & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP GGS_baseline_5F_instruction_5F_MNOP_2E_weak::bang_baseline_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_MNOP) ;
      result = GGS_baseline_5F_instruction_5F_MNOP ((cPtr_baseline_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_MNOP.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2E_weak ("baseline_instruction_MNOP.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_baseline_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FOREVER::objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FOREVER::GGS_baseline_5F_instruction_5F_FOREVER (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_instructionList & in_mInstructionList,
                  const GGS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::
baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER::GGS_baseline_5F_instruction_5F_FOREVER (const cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                               const GGS_location & in_mEndOfInstructionList
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FOREVER (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_FOREVER::setProperty_mInstructionList (const GGS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_FOREVER::setProperty_mEndOfInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    p->mProperty_mEndOfInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

void cPtr_baseline_5F_instruction_5F_FOREVER::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_FOREVER::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FOREVER generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ("baseline_instruction_FOREVER",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER result ;
  const GGS_baseline_5F_instruction_5F_FOREVER * p = (const GGS_baseline_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_FOREVER & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (const GGS_baseline_5F_instruction_5F_FOREVER & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::bang_baseline_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
      result = GGS_baseline_5F_instruction_5F_FOREVER ((cPtr_baseline_5F_instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_FOREVER.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2E_weak ("baseline_instruction_FOREVER.weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak * p = (const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_STATIC_REPEAT.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ("baseline_instruction_STATIC_REPEAT.weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak * p = (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_STATIC_REPEAT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GGS_baseline_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::setProperty_mInstruction (const GGS_baseline_5F_instruction & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                                                          const GGS_baseline_5F_instruction & in_mInstruction
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_SEMI_COLON generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("baseline_instruction_IF_SEMI_COLON",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::bang_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_SEMI_COLON.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ("baseline_instruction_IF_SEMI_COLON.weak",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak * p = (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::bang_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
      result = GGS_baseline_5F_instruction_5F_IF_5F_BitTest ((cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_BitTest.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak ("baseline_instruction_IF_BitTest.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak * p = (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::bang_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
      result = GGS_baseline_5F_instruction_5F_IF_5F_IncDec ((cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_IF_IncDec.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak ("baseline_instruction_IF_IncDec.weak",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak * p = (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_IncDec.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_conditionExpression::cPtr_baseline_5F_conditionExpression (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_conditionExpression::objectCompare (const GGS_baseline_5F_conditionExpression & inOperand) const {
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

GGS_baseline_5F_conditionExpression::GGS_baseline_5F_conditionExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression::GGS_baseline_5F_conditionExpression (const cPtr_baseline_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_conditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_conditionExpression class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_conditionExpression::cPtr_baseline_5F_conditionExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_conditionExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ("baseline_conditionExpression",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_conditionExpression::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_conditionExpression result ;
  const GGS_baseline_5F_conditionExpression * p = (const GGS_baseline_5F_conditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_conditionExpression_2E_weak::objectCompare (const GGS_baseline_5F_conditionExpression_2E_weak & inOperand) const {
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

GGS_baseline_5F_conditionExpression_2E_weak::GGS_baseline_5F_conditionExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak & GGS_baseline_5F_conditionExpression_2E_weak::operator = (const GGS_baseline_5F_conditionExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak::GGS_baseline_5F_conditionExpression_2E_weak (const GGS_baseline_5F_conditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak GGS_baseline_5F_conditionExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_conditionExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_conditionExpression_2E_weak::bang_baseline_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_conditionExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_conditionExpression) ;
      result = GGS_baseline_5F_conditionExpression ((cPtr_baseline_5F_conditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_conditionExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak ("baseline_conditionExpression.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_conditionExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_conditionExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_conditionExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak GGS_baseline_5F_conditionExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_conditionExpression_2E_weak result ;
  const GGS_baseline_5F_conditionExpression_2E_weak * p = (const GGS_baseline_5F_conditionExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_conditionExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_incDecRegisterInCondition_2E_weak (const GGS_baseline_5F_incDecRegisterInCondition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition GGS_baseline_5F_incDecRegisterInCondition_2E_weak::bang_baseline_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
      result = GGS_baseline_5F_incDecRegisterInCondition ((cPtr_baseline_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_incDecRegisterInCondition.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2E_weak ("baseline_incDecRegisterInCondition.weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_baseline_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_baseline_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_negateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_negateCondition::objectCompare (const GGS_baseline_5F_negateCondition & inOperand) const {
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

GGS_baseline_5F_negateCondition::GGS_baseline_5F_negateCondition (void) :
GGS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition::
init_21_ (const GGS_baseline_5F_conditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_negateCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_negateCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_negateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GGS_baseline_5F_negateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_negateCondition::
baseline_5F_negateCondition_init_21_ (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                      Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition::GGS_baseline_5F_negateCondition (const cPtr_baseline_5F_negateCondition * inSourcePtr) :
GGS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_negateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition::class_func_new (const GGS_baseline_5F_conditionExpression & in_mCondition
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_negateCondition (in_mCondition COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_negateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_negateCondition::setProperty_mCondition (const GGS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
    p->mProperty_mCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_negateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (const GGS_baseline_5F_conditionExpression & in_mCondition
                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

void cPtr_baseline_5F_negateCondition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_negateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_negateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_negateCondition (mProperty_mCondition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_negateCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition ("baseline_negateCondition",
                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_negateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition result ;
  const GGS_baseline_5F_negateCondition * p = (const GGS_baseline_5F_negateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_negateCondition_2E_weak::objectCompare (const GGS_baseline_5F_negateCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_negateCondition_2E_weak::GGS_baseline_5F_negateCondition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak & GGS_baseline_5F_negateCondition_2E_weak::operator = (const GGS_baseline_5F_negateCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak::GGS_baseline_5F_negateCondition_2E_weak (const GGS_baseline_5F_negateCondition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak GGS_baseline_5F_negateCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition_2E_weak::bang_baseline_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_negateCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_negateCondition) ;
      result = GGS_baseline_5F_negateCondition ((cPtr_baseline_5F_negateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_negateCondition.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2E_weak ("baseline_negateCondition.weak",
                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_negateCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_negateCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_negateCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak GGS_baseline_5F_negateCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition_2E_weak result ;
  const GGS_baseline_5F_negateCondition_2E_weak * p = (const GGS_baseline_5F_negateCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_negateCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_andCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_andCondition::objectCompare (const GGS_baseline_5F_andCondition & inOperand) const {
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

GGS_baseline_5F_andCondition::GGS_baseline_5F_andCondition (void) :
GGS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition::
init_21__21_ (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
              const GGS_baseline_5F_conditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_andCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_andCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_andCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_baseline_5F_andCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_andCondition::
baseline_5F_andCondition_init_21__21_ (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                       const GGS_baseline_5F_conditionExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition::GGS_baseline_5F_andCondition (const cPtr_baseline_5F_andCondition * inSourcePtr) :
GGS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_andCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition::class_func_new (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                                           const GGS_baseline_5F_conditionExpression & in_mRightExpression
                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_andCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_andCondition (in_mLeftExpression, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_andCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_andCondition::setProperty_mLeftExpression (const GGS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_andCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_andCondition::setProperty_mRightExpression (const GGS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_andCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                              const GGS_baseline_5F_conditionExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

void cPtr_baseline_5F_andCondition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_andCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_andCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_andCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ("baseline_andCondition",
                                                                                & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_andCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_andCondition result ;
  const GGS_baseline_5F_andCondition * p = (const GGS_baseline_5F_andCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_andCondition_2E_weak::objectCompare (const GGS_baseline_5F_andCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_andCondition_2E_weak::GGS_baseline_5F_andCondition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak & GGS_baseline_5F_andCondition_2E_weak::operator = (const GGS_baseline_5F_andCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak::GGS_baseline_5F_andCondition_2E_weak (const GGS_baseline_5F_andCondition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak GGS_baseline_5F_andCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_andCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition_2E_weak::bang_baseline_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_andCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_andCondition) ;
      result = GGS_baseline_5F_andCondition ((cPtr_baseline_5F_andCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_andCondition.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition_2E_weak ("baseline_andCondition.weak",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_andCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_andCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_andCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak GGS_baseline_5F_andCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_andCondition_2E_weak result ;
  const GGS_baseline_5F_andCondition_2E_weak * p = (const GGS_baseline_5F_andCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_andCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const {
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

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::operator = (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
      result = GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ((cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_bitTest_in_structured_if_condition.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ("baseline_bitTest_in_structured_if_condition.weak",
                                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak * p = (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_structured_5F_if::objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GGS_baseline_5F_instruction_5F_structured_5F_if::GGS_baseline_5F_instruction_5F_structured_5F_if (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                          const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                          const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                          const GGS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::
baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                      const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                      const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                      const GGS_location & in_mEndOfElsePartLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if::GGS_baseline_5F_instruction_5F_structured_5F_if (const cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                                 const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                                 const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                                 const GGS_location & in_mEndOfElsePartLocation
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mIfCondition (const GGS_baseline_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mIfCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mThenInstructionList (const GGS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mElseInstructionList (const GGS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_structured_5F_if::setProperty_mEndOfElsePartLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mEndOfElsePartLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GGS_location & in_mEndOfElsePartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

void cPtr_baseline_5F_instruction_5F_structured_5F_if::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_structured_if:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_structured_if generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ("baseline_instruction_structured_if",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if result ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if * p = (const GGS_baseline_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (const GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::bang_baseline_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
      result = GGS_baseline_5F_instruction_5F_structured_5F_if ((cPtr_baseline_5F_instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_structured_if.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2E_weak ("baseline_instruction_structured_if.weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak * p = (const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_partList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_partList : public cCollectionElement {
  public: GGS_baseline_5F_partList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_partList (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                   const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                   const GGS_location & in_mEndOfPartLocation
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_partList (const GGS_baseline_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_partList::cCollectionElement_baseline_5F_partList (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                                                  const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_partList::cCollectionElement_baseline_5F_partList (const GGS_baseline_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_partList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_partList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_partList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCondition" ":") ;
  mObject.mProperty_mCondition.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfPartLocation" ":") ;
  mObject.mProperty_mEndOfPartLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList::GGS_baseline_5F_partList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList::GGS_baseline_5F_partList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_partList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_partList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::enterElement (const GGS_baseline_5F_partList_2E_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_partList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::class_func_listWithValue (const GGS_baseline_5F_conditionExpression & inOperand0,
                                                                             const GGS_baseline_5F_instructionList & inOperand1,
                                                                             const GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_partList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_baseline_5F_partList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_baseline_5F_partList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                          const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                          const GGS_location & in_mEndOfPartLocation
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_partList (in_mCondition,
                                                          in_mInstructionList,
                                                          in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::addAssign_operation (const GGS_baseline_5F_conditionExpression & inOperand0,
                                                    const GGS_baseline_5F_instructionList & inOperand1,
                                                    const GGS_location & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_append (const GGS_baseline_5F_conditionExpression inOperand0,
                                              const GGS_baseline_5F_instructionList inOperand1,
                                              const GGS_location inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_insertAtIndex (const GGS_baseline_5F_conditionExpression inOperand0,
                                                     const GGS_baseline_5F_instructionList inOperand1,
                                                     const GGS_location inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_removeAtIndex (GGS_baseline_5F_conditionExpression & outOperand0,
                                                     GGS_baseline_5F_instructionList & outOperand1,
                                                     GGS_location & outOperand2,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
      outOperand0 = p->mObject.mProperty_mCondition ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
      outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_popFirst (GGS_baseline_5F_conditionExpression & outOperand0,
                                                GGS_baseline_5F_instructionList & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_popLast (GGS_baseline_5F_conditionExpression & outOperand0,
                                               GGS_baseline_5F_instructionList & outOperand1,
                                               GGS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::method_first (GGS_baseline_5F_conditionExpression & outOperand0,
                                             GGS_baseline_5F_instructionList & outOperand1,
                                             GGS_location & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::method_last (GGS_baseline_5F_conditionExpression & outOperand0,
                                            GGS_baseline_5F_instructionList & outOperand1,
                                            GGS_location & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::add_operation (const GGS_baseline_5F_partList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result = GGS_baseline_5F_partList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result = GGS_baseline_5F_partList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result = GGS_baseline_5F_partList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::plusAssign_operation (const GGS_baseline_5F_partList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_setMConditionAtIndex (GGS_baseline_5F_conditionExpression inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCondition = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_partList::getter_mConditionAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GGS_baseline_5F_conditionExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_setMInstructionListAtIndex (GGS_baseline_5F_instructionList inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_partList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GGS_baseline_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_setMEndOfPartLocationAtIndex (GGS_location inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfPartLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_partList::getter_mEndOfPartLocationAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_partList * p = (cCollectionElement_baseline_5F_partList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_partList::cEnumerator_baseline_5F_partList (const GGS_baseline_5F_partList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element cEnumerator_baseline_5F_partList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression cEnumerator_baseline_5F_partList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList cEnumerator_baseline_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_baseline_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_partList * p = (const cCollectionElement_baseline_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_partList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_partList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList ("baseline_partList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_partList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_partList result ;
  const GGS_baseline_5F_partList * p = (const GGS_baseline_5F_partList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_do_5F_while::objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while & inOperand) const {
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

GGS_baseline_5F_instruction_5F_do_5F_while::GGS_baseline_5F_instruction_5F_do_5F_while (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                      const GGS_location & in_mEndOfRepeatedInstructionList,
                      const GGS_baseline_5F_partList & in_mWhilePartList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_do_5F_while * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_do_5F_while (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_do_5F_while result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::
baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructionList,
                                                             const GGS_baseline_5F_partList & in_mWhilePartList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while::GGS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                       const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                                       const GGS_location & in_mEndOfRepeatedInstructionList,
                                                                                                       const GGS_baseline_5F_partList & in_mWhilePartList
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_do_5F_while (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_do_5F_while::setProperty_mRepeatedInstructionList (const GGS_baseline_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_do_5F_while::setProperty_mEndOfRepeatedInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mEndOfRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_partList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instruction_5F_do_5F_while::setProperty_mWhilePartList (const GGS_baseline_5F_partList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mWhilePartList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GGS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GGS_baseline_5F_partList & in_mWhilePartList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

void cPtr_baseline_5F_instruction_5F_do_5F_while::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_do_while:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_do_while generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ("baseline_instruction_do_while",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while result ;
  const GGS_baseline_5F_instruction_5F_do_5F_while * p = (const GGS_baseline_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & inOperand) const {
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

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_do_5F_while & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (const GGS_baseline_5F_instruction_5F_do_5F_while & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::bang_baseline_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
      result = GGS_baseline_5F_instruction_5F_do_5F_while ((cPtr_baseline_5F_instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_instruction_do_while.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2E_weak ("baseline_instruction_do_while.weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak * p = (const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_routineDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_routineDefinitionList : public cCollectionElement {
  public: GGS_baseline_5F_routineDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_routineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                const GGS_luint & in_mPage,
                                                                const GGS_bool & in_mIsNoReturn,
                                                                const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                const GGS_location & in_mEndOfRoutineLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_routineDefinitionList::cCollectionElement_baseline_5F_routineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                                                            const GGS_luint & in_mPage,
                                                                                                            const GGS_bool & in_mIsNoReturn,
                                                                                                            const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                            const GGS_location & in_mEndOfRoutineLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_routineDefinitionList::cCollectionElement_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mPage, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_routineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_routineDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_routineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mPage, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_routineDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPage" ":") ;
  mObject.mProperty_mPage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfRoutineLocation" ":") ;
  mObject.mProperty_mEndOfRoutineLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList::GGS_baseline_5F_routineDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList::GGS_baseline_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_routineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_routineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::enterElement (const GGS_baseline_5F_routineDefinitionList_2E_element & inValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                       const GGS_luint & inOperand1,
                                                                                                       const GGS_bool & inOperand2,
                                                                                                       const GGS_baseline_5F_instructionList & inOperand3,
                                                                                                       const GGS_location & inOperand4
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_baseline_5F_routineDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GGS_lstring & in_mRoutineName,
                                                                       const GGS_luint & in_mPage,
                                                                       const GGS_bool & in_mIsNoReturn,
                                                                       const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                       const GGS_location & in_mEndOfRoutineLocation
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (in_mRoutineName,
                                                                       in_mPage,
                                                                       in_mIsNoReturn,
                                                                       in_mInstructionList,
                                                                       in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::addAssign_operation (const GGS_lstring & inOperand0,
                                                                 const GGS_luint & inOperand1,
                                                                 const GGS_bool & inOperand2,
                                                                 const GGS_baseline_5F_instructionList & inOperand3,
                                                                 const GGS_location & inOperand4
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                           const GGS_luint inOperand1,
                                                           const GGS_bool inOperand2,
                                                           const GGS_baseline_5F_instructionList inOperand3,
                                                           const GGS_location inOperand4,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                  const GGS_luint inOperand1,
                                                                  const GGS_bool inOperand2,
                                                                  const GGS_baseline_5F_instructionList inOperand3,
                                                                  const GGS_location inOperand4,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                  GGS_luint & outOperand1,
                                                                  GGS_bool & outOperand2,
                                                                  GGS_baseline_5F_instructionList & outOperand3,
                                                                  GGS_location & outOperand4,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
      outOperand0 = p->mObject.mProperty_mRoutineName ;
      outOperand1 = p->mObject.mProperty_mPage ;
      outOperand2 = p->mObject.mProperty_mIsNoReturn ;
      outOperand3 = p->mObject.mProperty_mInstructionList ;
      outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                             GGS_luint & outOperand1,
                                                             GGS_bool & outOperand2,
                                                             GGS_baseline_5F_instructionList & outOperand3,
                                                             GGS_location & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                            GGS_luint & outOperand1,
                                                            GGS_bool & outOperand2,
                                                            GGS_baseline_5F_instructionList & outOperand3,
                                                            GGS_location & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::method_first (GGS_lstring & outOperand0,
                                                          GGS_luint & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          GGS_baseline_5F_instructionList & outOperand3,
                                                          GGS_location & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::method_last (GGS_lstring & outOperand0,
                                                         GGS_luint & outOperand1,
                                                         GGS_bool & outOperand2,
                                                         GGS_baseline_5F_instructionList & outOperand3,
                                                         GGS_location & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mIsNoReturn ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::add_operation (const GGS_baseline_5F_routineDefinitionList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result = GGS_baseline_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result = GGS_baseline_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result = GGS_baseline_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::plusAssign_operation (const GGS_baseline_5F_routineDefinitionList inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_setMPageAtIndex (GGS_luint inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_baseline_5F_routineDefinitionList::getter_mPageAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mPage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_setMInstructionListAtIndex (GGS_baseline_5F_instructionList inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GGS_baseline_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GGS_location inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfRoutineLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_routineDefinitionList * p = (cCollectionElement_baseline_5F_routineDefinitionList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_routineDefinitionList::cEnumerator_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element cEnumerator_baseline_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_baseline_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_baseline_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_baseline_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList cEnumerator_baseline_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location cEnumerator_baseline_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_routineDefinitionList * p = (const cCollectionElement_baseline_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_routineDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ("baseline_routineDefinitionList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList result ;
  const GGS_baseline_5F_routineDefinitionList * p = (const GGS_baseline_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (cPtr_baseline_5F_instruction * inObject,
                                          GGS_stringset & io_ioUsedRoutines,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_addUsedRoutines (io_ioUsedRoutines, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_declaredRoutineMap::cMapElement_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap_2E_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_declaredRoutineMap::cMapElement_baseline_5F_declaredRoutineMap (const GGS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baseline_5F_declaredRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baseline_5F_declaredRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baseline_5F_declaredRoutineMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baseline_5F_declaredRoutineMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap::GGS_baseline_5F_declaredRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap::GGS_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap & GGS_baseline_5F_declaredRoutineMap::operator = (const GGS_baseline_5F_declaredRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ GGS_baseline_5F_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_baseline_5F_declaredRoutineMap * p = (cMapElement_baseline_5F_declaredRoutineMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_baseline_5F_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_baseline_5F_declaredRoutineMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_declaredRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::enterElement (const GGS_baseline_5F_declaredRoutineMap_2E_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::addAssign_operation (const GGS_lstring & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_declaredRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::add_operation (const GGS_baseline_5F_declaredRoutineMap & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_declaredRoutineMap result = *this ;
  cEnumerator_baseline_5F_declaredRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::setter_insertKey (GGS_lstring inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_declaredRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::method_searchKey (GGS_lstring inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_declaredRoutineMap * GGS_baseline_5F_declaredRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                    const GGS_string & inKey
                                                                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_declaredRoutineMap * result = (cMapElement_baseline_5F_declaredRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baseline_5F_declaredRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_declaredRoutineMap::cEnumerator_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element cEnumerator_baseline_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_declaredRoutineMap * p = (const cMapElement_baseline_5F_declaredRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_declaredRoutineMap) ;
  return GGS_baseline_5F_declaredRoutineMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_baseline_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_declaredRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ("baseline_declaredRoutineMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  const GGS_baseline_5F_declaredRoutineMap * p = (const GGS_baseline_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldTerminateWithMOVLW'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction::method_shouldTerminateWithMOVLW (const GGS_string constinArgument_inErrorMessage,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 18)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldTerminateWithMOVLW (cPtr_baseline_5F_instruction * inObject,
                                                   const GGS_string constin_inErrorMessage,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_shouldTerminateWithMOVLW  (constin_inErrorMessage, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_instruction shouldNotContinueInSequence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction::method_shouldNotContinueInSequence (const GGS_string constinArgument_inErrorMessage,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas", 64)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldNotContinueInSequence (cPtr_baseline_5F_instruction * inObject,
                                                      const GGS_string constin_inErrorMessage,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_shouldNotContinueInSequence  (constin_inErrorMessage, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression::GGS_baseline_5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression::~ GGS_baseline_5F_intermediate_5F_registerExpression (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_registerExpression::init_21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                     const GGS_uint & in_mRegisterAddress,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression::GGS_baseline_5F_intermediate_5F_registerExpression (const GGS_string & inOperand0,
                                                                                                        const GGS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_registerExpression::class_func_new (const GGS_string & in_mAssemblyString,
                                                                                                                       const GGS_uint & in_mRegisterAddress,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_intermediate_registerExpression:") ;
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
//
//     @baseline_intermediate_registerExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ("baseline_intermediate_registerExpression",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_registerExpression::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_registerExpression result ;
  const GGS_baseline_5F_intermediate_5F_registerExpression * p = (const GGS_baseline_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction::GGS_baseline_5F_intermediate_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction::GGS_baseline_5F_intermediate_5F_instruction (const cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction::cPtr_baseline_5F_intermediate_5F_instruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ("baseline_intermediate_instruction",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  const GGS_baseline_5F_intermediate_5F_instruction * p = (const GGS_baseline_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak GGS_baseline_5F_intermediate_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction_2E_weak::bang_baseline_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
      result = GGS_baseline_5F_intermediate_5F_instruction ((cPtr_baseline_5F_intermediate_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ("baseline_intermediate_instruction.weak",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak GGS_baseline_5F_intermediate_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_intermediate_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_intermediate_5F_instructionList : public cCollectionElement {
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_intermediate_5F_instructionList::cCollectionElement_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_intermediate_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_intermediate_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_intermediate_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList::GGS_baseline_5F_intermediate_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList::GGS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::enterElement (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inValue,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GGS_baseline_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::addAssign_operation (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_append (const GGS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                            const GGS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                            const GGS_uint inRemoveIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_popFirst (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_popLast (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::method_first (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::method_last (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::add_operation (const GGS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result = GGS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result = GGS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result = GGS_baseline_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::plusAssign_operation (const GGS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_instruction inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (cCollectionElement_baseline_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  GGS_baseline_5F_intermediate_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_intermediate_5F_instructionList::cEnumerator_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element cEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction cEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_intermediate_5F_instructionList * p = (const cCollectionElement_baseline_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_intermediate_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ("baseline_intermediate_instructionList",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  const GGS_baseline_5F_intermediate_5F_instructionList * p = (const GGS_baseline_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_NULL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_NULL::objectCompare (const GGS_baseline_5F_intermediate_5F_NULL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_NULL::GGS_baseline_5F_intermediate_5F_NULL (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_NULL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_NULL_init (inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_NULL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::
baseline_5F_intermediate_5F_NULL_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL::GGS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::class_func_new (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_NULL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

void cPtr_baseline_5F_intermediate_5F_NULL::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@baseline_intermediate_NULL]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_NULL::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_NULL (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_NULL generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ("baseline_intermediate_NULL",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  const GGS_baseline_5F_intermediate_5F_NULL * p = (const GGS_baseline_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_NULL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_NULL_2E_weak::GGS_baseline_5F_intermediate_5F_NULL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak & GGS_baseline_5F_intermediate_5F_NULL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_NULL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak::GGS_baseline_5F_intermediate_5F_NULL_2E_weak (const GGS_baseline_5F_intermediate_5F_NULL & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak GGS_baseline_5F_intermediate_5F_NULL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL_2E_weak::bang_baseline_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
      result = GGS_baseline_5F_intermediate_5F_NULL ((cPtr_baseline_5F_intermediate_5F_NULL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_NULL.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ("baseline_intermediate_NULL.weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_NULL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_NULL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_NULL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak GGS_baseline_5F_intermediate_5F_NULL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_NULL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_NULL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo::GGS_baseline_5F_intermediate_5F_pseudo (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo::GGS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ("baseline_intermediate_pseudo",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  const GGS_baseline_5F_intermediate_5F_pseudo * p = (const GGS_baseline_5F_intermediate_5F_pseudo *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo ((cPtr_baseline_5F_intermediate_5F_pseudo *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ("baseline_intermediate_pseudo.weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
init_21_ (const GGS_uint & in_mPage,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (in_mPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (const GGS_uint & in_mPage,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::class_func_new (const GGS_uint & in_mPage
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (in_mPage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::setProperty_mPage (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    p->mProperty_mPage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_PAGE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GGS_uint & in_mPage
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (THERE),
mProperty_mPage () {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_PAGE:") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (mProperty_mPage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_PAGE generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ("baseline_intermediate_pseudo_PAGE",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_PAGE.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ("baseline_intermediate_pseudo_PAGE.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_LABEL.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ("baseline_intermediate_pseudo_LABEL.weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ("baseline_intermediate_pseudo_BEGIN_ROUTINE.weak",
                                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_pseudo_END_ROUTINE.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ("baseline_intermediate_pseudo_END_ROUTINE.weak",
                                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_actualInstruction::objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_actualInstruction::GGS_baseline_5F_intermediate_5F_actualInstruction (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction::GGS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_intermediate_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_actualInstruction::setProperty_mInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_actualInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ("baseline_intermediate_actualInstruction",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  const GGS_baseline_5F_intermediate_5F_actualInstruction * p = (const GGS_baseline_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (const GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::bang_baseline_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
      result = GGS_baseline_5F_intermediate_5F_actualInstruction ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_actualInstruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ("baseline_intermediate_actualInstruction.weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FD::GGS_baseline_5F_intermediate_5F_instruction_5F_FD (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::
baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD::GGS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                     const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                                     const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_FD::setProperty_mInstruction (const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_FD::setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_FD::setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ("baseline_intermediate_instruction_FD",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FD ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FD.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ("baseline_intermediate_instruction_FD.weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_F::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_F::GGS_baseline_5F_intermediate_5F_instruction_5F_F (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::
baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                               const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F::GGS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                   const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                                   const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_F::setProperty_mInstruction (const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_F::setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                                                      const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ("baseline_intermediate_instruction_F",
                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_F ((cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_F.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ("baseline_intermediate_instruction_F.weak",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FB::GGS_baseline_5F_intermediate_5F_instruction_5F_FB (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::
baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_uint & in_mBitNumber,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB::GGS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                     const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                                     const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                     const GGS_uint & in_mBitNumber
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_FB::setProperty_mInstruction (const GGS_baseline_5F_bit_5F_oriented_5F_op & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_FB::setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_FB::setProperty_mBitNumber (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_uint & in_mBitNumber
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ("baseline_intermediate_instruction_FB",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FB ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_FB.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ("baseline_intermediate_instruction_FB.weak",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bool & in_mSkipIfSet,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                             const GGS_bool & in_mSkipIfSet,
                                                                             const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                             const GGS_uint & in_mBitNumber,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                       const GGS_bool & in_mSkipIfSet,
                                                                                                                                       const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                       const GGS_uint & in_mBitNumber
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::setProperty_mSkipIfSet (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::setProperty_mBitNumber (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                          const GGS_bool & in_mSkipIfSet,
                                                                                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GGS_uint & in_mBitNumber
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_BitTestSkip:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_BitTestSkip generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ("baseline_intermediate_instruction_BitTestSkip",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ((cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_BitTestSkip.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ("baseline_intermediate_instruction_BitTestSkip.weak",
                                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (const GGS_baseline_5F_intermediate_5F_GOTO & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::bang_baseline_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      result = GGS_baseline_5F_intermediate_5F_GOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_GOTO.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ("baseline_intermediate_GOTO.weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (const GGS_baseline_5F_intermediate_5F_JUMP & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::bang_baseline_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = GGS_baseline_5F_intermediate_5F_JUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_JUMP.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ("baseline_intermediate_JUMP.weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_CALL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_CALL_2E_weak::GGS_baseline_5F_intermediate_5F_CALL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak & GGS_baseline_5F_intermediate_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak::GGS_baseline_5F_intermediate_5F_CALL_2E_weak (const GGS_baseline_5F_intermediate_5F_CALL & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak GGS_baseline_5F_intermediate_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL_2E_weak::bang_baseline_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      result = GGS_baseline_5F_intermediate_5F_CALL ((cPtr_baseline_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_CALL.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ("baseline_intermediate_CALL.weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak GGS_baseline_5F_intermediate_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_CALL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JSR_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JSR_2E_weak::GGS_baseline_5F_intermediate_5F_JSR_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak & GGS_baseline_5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak::GGS_baseline_5F_intermediate_5F_JSR_2E_weak (const GGS_baseline_5F_intermediate_5F_JSR & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak GGS_baseline_5F_intermediate_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR_2E_weak::bang_baseline_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = GGS_baseline_5F_intermediate_5F_JSR ((cPtr_baseline_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_JSR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ("baseline_intermediate_JSR.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak GGS_baseline_5F_intermediate_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_JSR_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::
baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                             const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (in_mInstructionLocation, in_mInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::setProperty_mInstruction (const GGS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_WO_OPERAND generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ("baseline_intermediate_WO_OPERAND",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
      result = GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND ((cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_WO_OPERAND.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ("baseline_intermediate_WO_OPERAND.weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (const GGS_baseline_5F_intermediate_5F_TRIS & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::bang_baseline_5F_intermediate_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = GGS_baseline_5F_intermediate_5F_TRIS ((cPtr_baseline_5F_intermediate_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_TRIS.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ("baseline_intermediate_TRIS.weak",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                  const GGS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mLiteralValue, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                              const GGS_uint & in_mLiteralValue,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                                 const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                                 const GGS_uint & in_mLiteralValue
                                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mInstruction, in_mLiteralValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::setProperty_mInstruction (const GGS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::setProperty_mLiteralValue (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                                                    const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                    const GGS_uint & in_mLiteralValue
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ("baseline_intermediate_instruction_literalOperation",
                                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_literalOperation.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ("baseline_intermediate_instruction_literalOperation.weak",
                                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

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

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                         const GGS_luint & in_mOccurrenceFactor
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor COMMA_THERE)) ;
  return result ;
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

void GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::setProperty_mOccurrenceFactor (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                                                            const GGS_luint & in_mOccurrenceFactor
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ("baseline_intermediate_instruction_MNOP",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP ((cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_instruction_MNOP.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ("baseline_intermediate_instruction_MNOP.weak",
                                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mTargetLabel (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                              const GGS_string & in_mTargetLabel,
                              const GGS_bool & in_mIncrement,
                              const GGS_bool & in_m_5F_W_5F_isDestination,
                              const GGS_bool & in_mBranchIfZero,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::
baseline_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                    const GGS_string & in_mTargetLabel,
                                                                                    const GGS_bool & in_mIncrement,
                                                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                    const GGS_bool & in_mBranchIfZero,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                     const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                     const GGS_string & in_mTargetLabel,
                                                                                                                                     const GGS_bool & in_mIncrement,
                                                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                                     const GGS_bool & in_mBranchIfZero
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (in_mInstructionLocation, in_mRegisterDescription, in_mTargetLabel, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mRegisterDescription (const GGS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mTargetLabel (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mTargetLabel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mIncrement (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_m_5F_W_5F_isDestination (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::setProperty_mBranchIfZero (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    p->mProperty_mBranchIfZero = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                        const GGS_string & in_mTargetLabel,
                                                                                                                        const GGS_bool & in_mIncrement,
                                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                        const GGS_bool & in_mBranchIfZero
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mTargetLabel (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_incDecRegisterInCondition:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mTargetLabel, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_incDecRegisterInCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ("baseline_intermediate_incDecRegisterInCondition",
                                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
      result = GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_intermediate_incDecRegisterInCondition.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ("baseline_intermediate_incDecRegisterInCondition.weak",
                                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineRoutineMap::cMapElement_baselineRoutineMap (const GGS_baselineRoutineMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIsNoReturn (inValue.mProperty_mIsNoReturn),
mProperty_mPage (inValue.mProperty_mPage) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineRoutineMap::cMapElement_baselineRoutineMap (const GGS_lstring & inKey,
                                                                const GGS_bool & in_mIsNoReturn,
                                                                const GGS_luint & in_mPage
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIsNoReturn (in_mIsNoReturn),
mProperty_mPage (in_mPage) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baselineRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baselineRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baselineRoutineMap (mProperty_lkey, mProperty_mIsNoReturn, mProperty_mPage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baselineRoutineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPage" ":") ;
  mProperty_mPage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap::GGS_baselineRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap::GGS_baselineRoutineMap (const GGS_baselineRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap & GGS_baselineRoutineMap::operator = (const GGS_baselineRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_ GGS_baselineRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baselineRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_baselineRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_baselineRoutineMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIsNoReturn = p->mProperty_mIsNoReturn ;
      element.mProperty_mPage = p->mProperty_mPage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::class_func_mapWithMapToOverride (const GGS_baselineRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_baselineRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::enterElement (const GGS_baselineRoutineMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_bool & inArgument0,
                                                  const GGS_luint & inArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::add_operation (const GGS_baselineRoutineMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_baselineRoutineMap result = *this ;
  cEnumerator_baselineRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIsNoReturn (HERE), enumerator.current_mPage (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_bool inArgument0,
                                               GGS_luint inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_baselineRoutineMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baselineRoutineMap_searchKey = "the '%K' routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::method_searchKey (GGS_lstring inKey,
                                               GGS_bool & outArgument0,
                                               GGS_luint & outArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_baselineRoutineMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    outArgument0 = p->mProperty_mIsNoReturn ;
    outArgument1 = p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baselineRoutineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    result = p->mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_baselineRoutineMap::getter_mPageForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) attributes ;
  GGS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    result = p->mProperty_mPage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::setter_setMIsNoReturnForKey (GGS_bool inAttributeValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    p->mProperty_mIsNoReturn = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap::setter_setMPageForKey (GGS_luint inAttributeValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineRoutineMap * p = (cMapElement_baselineRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
    p->mProperty_mPage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineRoutineMap * GGS_baselineRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_baselineRoutineMap * result = (cMapElement_baselineRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baselineRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baselineRoutineMap::cEnumerator_baselineRoutineMap (const GGS_baselineRoutineMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element cEnumerator_baselineRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return GGS_baselineRoutineMap_2E_element (p->mProperty_lkey, p->mProperty_mIsNoReturn, p->mProperty_mPage) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_baselineRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_baselineRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return p->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint cEnumerator_baselineRoutineMap::current_mPage (LOCATION_ARGS) const {
  const cMapElement_baselineRoutineMap * p = (const cMapElement_baselineRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineRoutineMap) ;
  return p->mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baselineRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap ("baselineRoutineMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baselineRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap GGS_baselineRoutineMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap result ;
  const GGS_baselineRoutineMap * p = (const GGS_baselineRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (cPtr_baseline_5F_instruction * inObject,
                                                                               const GGS_uint constin_inCurrentPage,
                                                                               const GGS_baselineRoutineMap constin_inRoutineMap,
                                                                               const GGS_registerTable constin_inRegisterTable,
                                                                               const GGS_constantMap constin_inConstantMap,
                                                                               GGS_uint & io_ioLocalLabelIndex,
                                                                               GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               GGS_string & io_ioListFileContents,
                                                                               GGS_bool & io_ioContinuesInSequence,
                                                                               const GGS_routineKind constin_inRoutineKind,
                                                                               const GGS_bool constin_inLastInstructionShouldReturn,
                                                                               GGS_stringset & io_ioUsedRegisters,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_build_5F_baseline_5F_intermediate_5F_instructionList (constin_inCurrentPage, constin_inRoutineMap, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioContinuesInSequence, constin_inRoutineKind, constin_inLastInstructionShouldReturn, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const GGS_uint constin_inCurrentPage,
                                                                             const GGS_registerTable constin_inRegisterTable,
                                                                             const GGS_constantMap constin_inConstantMap,
                                                                             GGS_uint & io_ioLocalLabelIndex,
                                                                             const GGS_bool constin_inComplementaryBranch,
                                                                             const GGS_location constin_inInstructionLocation,
                                                                             const GGS_string constin_inTargetLabel,
                                                                             GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             GGS_stringset & io_ioUsedRegisters,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_conditionExpression) ;
    inObject->method_build_5F_intermediate_5F_condition_5F_instructions (constin_inCurrentPage, constin_inRegisterTable, constin_inConstantMap, io_ioLocalLabelIndex, constin_inComplementaryBranch, constin_inInstructionLocation, constin_inTargetLabel, io_ioGeneratedInstructionList, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                GGS_string & io_ioListFileContents,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_print (io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_intermediate_instruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_length (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_length (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineSymbolTableForOptimizations::cMapElement_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations_2E_element & inValue
                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mDefinitionLineIndex (inValue.mProperty_mDefinitionLineIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineSymbolTableForOptimizations::cMapElement_baselineSymbolTableForOptimizations (const GGS_lstring & inKey,
                                                                                                  const GGS_uint & in_mDefinitionLineIndex
                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDefinitionLineIndex (in_mDefinitionLineIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baselineSymbolTableForOptimizations::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baselineSymbolTableForOptimizations::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baselineSymbolTableForOptimizations (mProperty_lkey, mProperty_mDefinitionLineIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baselineSymbolTableForOptimizations::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefinitionLineIndex" ":") ;
  mProperty_mDefinitionLineIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations::GGS_baselineSymbolTableForOptimizations (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations::GGS_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations & GGS_baselineSymbolTableForOptimizations::operator = (const GGS_baselineSymbolTableForOptimizations & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::class_func_emptyMap (LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_ GGS_baselineSymbolTableForOptimizations
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baselineSymbolTableForOptimizations_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_baselineSymbolTableForOptimizations_2E_element_3F_::init_nil () ;
    }else{
      GGS_baselineSymbolTableForOptimizations_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mDefinitionLineIndex = p->mProperty_mDefinitionLineIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::class_func_mapWithMapToOverride (const GGS_baselineSymbolTableForOptimizations & inMapToOverride
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::getter_overriddenMap (Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_baselineSymbolTableForOptimizations result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::enterElement (const GGS_baselineSymbolTableForOptimizations_2E_element & inValue,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineSymbolTableForOptimizations insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::addAssign_operation (const GGS_lstring & inKey,
                                                                   const GGS_uint & inArgument0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baselineSymbolTableForOptimizations insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::add_operation (const GGS_baselineSymbolTableForOptimizations & inOperand,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_baselineSymbolTableForOptimizations result = *this ;
  cEnumerator_baselineSymbolTableForOptimizations enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDefinitionLineIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::setter_insertKey (GGS_lstring inKey,
                                                                GGS_uint inArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * p = nullptr ;
  macroMyNew (p, cMapElement_baselineSymbolTableForOptimizations (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::method_searchKey (GGS_lstring inKey,
                                                                GGS_uint & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) performSearch (inKey,
                                                                                                                                       inCompiler,
                                                                                                                                       kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey
                                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::setter_removeKey (GGS_lstring inKey,
                                                                GGS_uint & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "the '%K' label is not declared" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    outArgument0 = p->mProperty_mDefinitionLineIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baselineSymbolTableForOptimizations::getter_mDefinitionLineIndexForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    result = p->mProperty_mDefinitionLineIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations::setter_setMDefinitionLineIndexForKey (GGS_uint inAttributeValue,
                                                                                    GGS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baselineSymbolTableForOptimizations * p = (cMapElement_baselineSymbolTableForOptimizations *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
    p->mProperty_mDefinitionLineIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baselineSymbolTableForOptimizations * GGS_baselineSymbolTableForOptimizations::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                              const GGS_string & inKey
                                                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_baselineSymbolTableForOptimizations * result = (cMapElement_baselineSymbolTableForOptimizations *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baselineSymbolTableForOptimizations) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baselineSymbolTableForOptimizations::cEnumerator_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element cEnumerator_baselineSymbolTableForOptimizations::current (LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
  return GGS_baselineSymbolTableForOptimizations_2E_element (p->mProperty_lkey, p->mProperty_mDefinitionLineIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_baselineSymbolTableForOptimizations::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_baselineSymbolTableForOptimizations::current_mDefinitionLineIndex (LOCATION_ARGS) const {
  const cMapElement_baselineSymbolTableForOptimizations * p = (const cMapElement_baselineSymbolTableForOptimizations *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baselineSymbolTableForOptimizations) ;
  return p->mProperty_mDefinitionLineIndex ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baselineSymbolTableForOptimizations generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ("baselineSymbolTableForOptimizations",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baselineSymbolTableForOptimizations::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineSymbolTableForOptimizations::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineSymbolTableForOptimizations (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations GGS_baselineSymbolTableForOptimizations::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations result ;
  const GGS_baselineSymbolTableForOptimizations * p = (const GGS_baselineSymbolTableForOptimizations *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineSymbolTableForOptimizations *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentWordAdress,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction temp_0 = this ;
  ioArgument_ioCurrentWordAdress = ioArgument_ioCurrentWordAdress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_setCurrentAddress (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            GGS_uint & io_ioCurrentWordAdress,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_setCurrentAddress  (io_ioCurrentWordAdress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isLABEL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isLABEL (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GGS_bool (false) ;
//---
  return result_outIsLABEL ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLABEL (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isNULL (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (false) ;
//---
  return result_outIsNULL ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isNULL (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (false) ;
//---
  return result_outIsSkipping ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isSkippingInstruction (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_baseline_5F_intermediate_5F_instruction::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (true) ;
//---
  return result_outIsReachable ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_nextInstructionIsReachable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_enterReferencedLabel (GGS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_enterReferencedLabel  (io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction::method_defineLabel (GGS_baselineSymbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                       const GGS_uint /* constinArgument_inLineIndex */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      GGS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GGS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabel  (io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_optimizeTestDecInc (const GGS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                            const GGS_uint constinArgument_inLineIndex,
                                                                                            GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                            GGS_bool & ioArgument_ioOptimizationsDone,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_line_19685 ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mTargetLabel (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)), inCompiler COMMA_HERE), var_line_19685, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 480)) ;
  GGS_baseline_5F_intermediate_5F_instruction var_firstInstruction_19864 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_19685.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 483)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_19864, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 482)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GGS_baseline_5F_intermediate_5F_GOTO var_goto_19941 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_19864.ptr ())) ;
    if (nullptr == var_goto_19941.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      {
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mRegisterDescription (), var_goto_19941.readProperty_mTargetLabel ().readProperty_string (), temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), temp_6.readProperty_mBranchIfZero (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 491)) ;
      }
      ioArgument_ioOptimizationsDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)).add_operation (GGS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 502)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("GOTO "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 503)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
        test_7 = temp_8.readProperty_mIncrement ().boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 505)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 507)) ;
      }
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 509)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 511)) ;
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_13 = this ;
        test_12 = temp_13.readProperty_mBranchIfZero ().boolEnum () ;
        if (kBoolTrue == test_12) {
          ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 514)) ;
        }
      }
      if (kBoolFalse == test_12) {
        ioArgument_ioListFileContents.plusAssign_operation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 516)) ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GGS_string (": branching to GOTO replaced by second GOTO label\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 518)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                             const GGS_uint constin_inLineIndex,
                                             GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GGS_string & io_ioListFileContents,
                                             GGS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
    inObject->method_optimizeTestDecInc  (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction::objectCompare (const GGS_baseline_5F_assembly_5F_instruction & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction::GGS_baseline_5F_assembly_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction::GGS_baseline_5F_assembly_5F_instruction (const cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction::cPtr_baseline_5F_assembly_5F_instruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ("baseline_assembly_instruction",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction result ;
  const GGS_baseline_5F_assembly_5F_instruction * p = (const GGS_baseline_5F_assembly_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_instruction_2E_weak::GGS_baseline_5F_assembly_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak & GGS_baseline_5F_assembly_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak::GGS_baseline_5F_assembly_5F_instruction_2E_weak (const GGS_baseline_5F_assembly_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak GGS_baseline_5F_assembly_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instruction_2E_weak::bang_baseline_5F_assembly_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction) ;
      result = GGS_baseline_5F_assembly_5F_instruction ((cPtr_baseline_5F_assembly_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak ("baseline_assembly_instruction.weak",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction_2E_weak GGS_baseline_5F_assembly_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_instruction_2E_weak * p = (const GGS_baseline_5F_assembly_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@baseline_5F_assembly_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_baseline_5F_assembly_5F_instructionList : public cCollectionElement {
  public: GGS_baseline_5F_assembly_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_assembly_5F_instructionList::cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_baseline_5F_assembly_5F_instructionList::cCollectionElement_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_baseline_5F_assembly_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_baseline_5F_assembly_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_baseline_5F_assembly_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_baseline_5F_assembly_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList::GGS_baseline_5F_assembly_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList::GGS_baseline_5F_assembly_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_assembly_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_baseline_5F_assembly_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::enterElement (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inValue,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GGS_baseline_5F_assembly_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_baseline_5F_assembly_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::addAssign_operation (const GGS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_append (const GGS_baseline_5F_assembly_5F_instruction inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_assembly_5F_instruction inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_baseline_5F_assembly_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_popFirst (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_popLast (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::method_first (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::method_last (GGS_baseline_5F_assembly_5F_instruction & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::add_operation (const GGS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result = GGS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result = GGS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_instructionList result = GGS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::plusAssign_operation (const GGS_baseline_5F_assembly_5F_instructionList inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_assembly_5F_instruction inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction GGS_baseline_5F_assembly_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (cCollectionElement_baseline_5F_assembly_5F_instructionList *) attributes.ptr () ;
  GGS_baseline_5F_assembly_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_assembly_5F_instructionList::cEnumerator_baseline_5F_assembly_5F_instructionList (const GGS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject,
                                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element cEnumerator_baseline_5F_assembly_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (const cCollectionElement_baseline_5F_assembly_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instruction cEnumerator_baseline_5F_assembly_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_baseline_5F_assembly_5F_instructionList * p = (const cCollectionElement_baseline_5F_assembly_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_baseline_5F_assembly_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ("baseline_assembly_instructionList",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList GGS_baseline_5F_assembly_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList result ;
  const GGS_baseline_5F_assembly_5F_instructionList * p = (const GGS_baseline_5F_assembly_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOrigin () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOrigin.printNonNullClassInstanceProperties ("mOrigin") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::
init_21_ (const GGS_uint & in_mOrigin,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (in_mOrigin, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::
baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (const GGS_uint & in_mOrigin,
                                                Compiler * /* inCompiler */) {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::class_func_new (const GGS_uint & in_mOrigin
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (in_mOrigin COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::readProperty_mOrigin (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    return p->mProperty_mOrigin ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::setProperty_mOrigin (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    p->mProperty_mOrigin = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mOrigin () {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_ORG:") ;
  mProperty_mOrigin.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (mProperty_mOrigin COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_ORG generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ("baseline_assembly_pseudo_ORG",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::bang_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_ORG ((cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_ORG.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak ("baseline_assembly_pseudo_ORG.weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (void) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak & GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::operator = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) :
GGS_baseline_5F_assembly_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::bang_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      result = GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_BEGINOFROUTINE.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak ("baseline_assembly_pseudo_BEGINOFROUTINE.weak",
                                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

