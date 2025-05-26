#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
// @immediatRegister reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatRegister::objectCompare (const GGS_immediatRegister & inOperand) const {
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

GGS_immediatRegister::GGS_immediatRegister (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister::
init_21_ (const GGS_registerExpression & in_mRegister,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_immediatRegister * object = nullptr ;
  macroMyNew (object, cPtr_immediatRegister (inCompiler COMMA_THERE)) ;
  object->immediatRegister_init_21_ (in_mRegister, inCompiler) ;
  const GGS_immediatRegister result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::
immediatRegister_init_21_ (const GGS_registerExpression & in_mRegister,
                           Compiler * /* inCompiler */) {
  mProperty_mRegister = in_mRegister ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister::GGS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatRegister) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister::class_func_new (const GGS_registerExpression & in_mRegister,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_immediatRegister result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatRegister (in_mRegister,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_immediatRegister::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_immediatRegister * p = (cPtr_immediatRegister *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatRegister) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatRegister class
//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegister () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatRegister::cPtr_immediatRegister (const GGS_registerExpression & in_mRegister,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegister () {
  mProperty_mRegister = in_mRegister ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatRegister::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

void cPtr_immediatRegister::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatRegister:") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatRegister::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatRegister (mProperty_mRegister, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatRegister::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatRegister generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ("immediatRegister",
                                                                        & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatRegister::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatRegister ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatRegister::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatRegister (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatRegister GGS_immediatRegister::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_immediatRegister result ;
  const GGS_immediatRegister * p = (const GGS_immediatRegister *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatRegister *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatRegister", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @immediatSlice reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_immediatSlice::objectCompare (const GGS_immediatSlice & inOperand) const {
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

GGS_immediatSlice::GGS_immediatSlice (void) :
GGS_immediatExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice::
init_21__21_ (const GGS_lstring & in_mRegisterName,
              const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_immediatSlice * object = nullptr ;
  macroMyNew (object, cPtr_immediatSlice (inCompiler COMMA_THERE)) ;
  object->immediatSlice_init_21__21_ (in_mRegisterName, in_mSliceExpressionList, inCompiler) ;
  const GGS_immediatSlice result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_immediatSlice::
immediatSlice_init_21__21_ (const GGS_lstring & in_mRegisterName,
                            const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
                            Compiler * /* inCompiler */) {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mSliceExpressionList = in_mSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice::GGS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) :
GGS_immediatExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_immediatSlice) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice::class_func_new (const GGS_lstring & in_mRegisterName,
                                                     const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_immediatSlice result ;
  macroMyNew (result.mObjectPtr, cPtr_immediatSlice (in_mRegisterName, in_mSliceExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_immediatSlice::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList GGS_immediatSlice::readProperty_mSliceExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatSliceExpressionList () ;
  }else{
    cPtr_immediatSlice * p = (cPtr_immediatSlice *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_immediatSlice) ;
    return p->mProperty_mSliceExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @immediatSlice class
//--------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mSliceExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_immediatSlice::cPtr_immediatSlice (const GGS_lstring & in_mRegisterName,
                                        const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_immediatExpression (inCompiler COMMA_THERE),
mProperty_mRegisterName (),
mProperty_mSliceExpressionList () {
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mSliceExpressionList = in_mSliceExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_immediatSlice::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

void cPtr_immediatSlice::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@immediatSlice:") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_immediatSlice::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_immediatSlice (mProperty_mRegisterName, mProperty_mSliceExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_immediatSlice::printNonNullClassInstanceProperties (void) const {
    cPtr_immediatExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mSliceExpressionList.printNonNullClassInstanceProperties ("mSliceExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @immediatSlice generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice ("immediatSlice",
                                                                     & kTypeDescriptor_GALGAS_immediatExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_immediatSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSlice ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSlice::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSlice (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSlice GGS_immediatSlice::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_immediatSlice result ;
  const GGS_immediatSlice * p = (const GGS_immediatSlice *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitNumberLabelValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitNumberLabelValue::objectCompare (const GGS_bitNumberLabelValue & inOperand) const {
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

GGS_bitNumberLabelValue::GGS_bitNumberLabelValue (void) :
GGS_bitNumberExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue::
init_21__21_ (const GGS_lstring & in_mBitNumberLabelValue,
              const GGS_luint & in_mBitNumberIndexValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bitNumberLabelValue * object = nullptr ;
  macroMyNew (object, cPtr_bitNumberLabelValue (inCompiler COMMA_THERE)) ;
  object->bitNumberLabelValue_init_21__21_ (in_mBitNumberLabelValue, in_mBitNumberIndexValue, inCompiler) ;
  const GGS_bitNumberLabelValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::
bitNumberLabelValue_init_21__21_ (const GGS_lstring & in_mBitNumberLabelValue,
                                  const GGS_luint & in_mBitNumberIndexValue,
                                  Compiler * /* inCompiler */) {
  mProperty_mBitNumberLabelValue = in_mBitNumberLabelValue ;
  mProperty_mBitNumberIndexValue = in_mBitNumberIndexValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue::GGS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) :
GGS_bitNumberExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitNumberLabelValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue::class_func_new (const GGS_lstring & in_mBitNumberLabelValue,
                                                                 const GGS_luint & in_mBitNumberIndexValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_bitNumberLabelValue result ;
  macroMyNew (result.mObjectPtr, cPtr_bitNumberLabelValue (in_mBitNumberLabelValue, in_mBitNumberIndexValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_bitNumberLabelValue::readProperty_mBitNumberLabelValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberLabelValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_bitNumberLabelValue::readProperty_mBitNumberIndexValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_bitNumberLabelValue * p = (cPtr_bitNumberLabelValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitNumberLabelValue) ;
    return p->mProperty_mBitNumberIndexValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitNumberLabelValue class
//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLabelValue (),
mProperty_mBitNumberIndexValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitNumberLabelValue::cPtr_bitNumberLabelValue (const GGS_lstring & in_mBitNumberLabelValue,
                                                    const GGS_luint & in_mBitNumberIndexValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_bitNumberExpression (inCompiler COMMA_THERE),
mProperty_mBitNumberLabelValue (),
mProperty_mBitNumberIndexValue () {
  mProperty_mBitNumberLabelValue = in_mBitNumberLabelValue ;
  mProperty_mBitNumberIndexValue = in_mBitNumberIndexValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitNumberLabelValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

void cPtr_bitNumberLabelValue::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@bitNumberLabelValue:") ;
  mProperty_mBitNumberLabelValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumberIndexValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitNumberLabelValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitNumberLabelValue (mProperty_mBitNumberLabelValue, mProperty_mBitNumberIndexValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitNumberLabelValue::printNonNullClassInstanceProperties (void) const {
    cPtr_bitNumberExpression::printNonNullClassInstanceProperties () ;
    mProperty_mBitNumberLabelValue.printNonNullClassInstanceProperties ("mBitNumberLabelValue") ;
    mProperty_mBitNumberIndexValue.printNonNullClassInstanceProperties ("mBitNumberIndexValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bitNumberLabelValue generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ("bitNumberLabelValue",
                                                                           & kTypeDescriptor_GALGAS_bitNumberExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitNumberLabelValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitNumberLabelValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitNumberLabelValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitNumberLabelValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberLabelValue GGS_bitNumberLabelValue::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_bitNumberLabelValue result ;
  const GGS_bitNumberLabelValue * p = (const GGS_bitNumberLabelValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitNumberLabelValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitNumberLabelValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FD::objectCompare (const GGS_baseline_5F_instruction_5F_FD & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FD::GGS_baseline_5F_instruction_5F_FD (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD GGS_baseline_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FD::
baseline_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD::GGS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD GGS_baseline_5F_instruction_5F_FD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FD::cPtr_baseline_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_instruction_5F_FD::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_FD:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ("baseline_instruction_FD",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD GGS_baseline_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD result ;
  const GGS_baseline_5F_instruction_5F_FD * p = (const GGS_baseline_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_F::objectCompare (const GGS_baseline_5F_instruction_5F_F & inOperand) const {
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

GGS_baseline_5F_instruction_5F_F::GGS_baseline_5F_instruction_5F_F (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F GGS_baseline_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GGS_registerExpression & in_mRegisterExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_F::
baseline_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                               const GGS_registerExpression & in_mRegisterExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F::GGS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F GGS_baseline_5F_instruction_5F_F::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                   const GGS_registerExpression & in_mRegisterExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_F (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_F::cPtr_baseline_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GGS_registerExpression & in_mRegisterExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_instruction_5F_F::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ("baseline_instruction_F",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F GGS_baseline_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_F result ;
  const GGS_baseline_5F_instruction_5F_F * p = (const GGS_baseline_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FB::objectCompare (const GGS_baseline_5F_instruction_5F_FB & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FB::GGS_baseline_5F_instruction_5F_FB (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB GGS_baseline_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bitNumberExpression & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FB::
baseline_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bitNumberExpression & in_mBitNumber,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB::GGS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB GGS_baseline_5F_instruction_5F_FB::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bitNumberExpression & in_mBitNumber,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_FB (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_baseline_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FB::cPtr_baseline_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bitNumberExpression & in_mBitNumber,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_instruction_5F_FB::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_FB:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ("baseline_instruction_FB",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB GGS_baseline_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FB result ;
  const GGS_baseline_5F_instruction_5F_FB * p = (const GGS_baseline_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_CALL::objectCompare (const GGS_baseline_5F_instruction_5F_CALL & inOperand) const {
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

GGS_baseline_5F_instruction_5F_CALL::GGS_baseline_5F_instruction_5F_CALL (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL GGS_baseline_5F_instruction_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::
baseline_5F_instruction_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL::GGS_baseline_5F_instruction_5F_CALL (const cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL GGS_baseline_5F_instruction_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_CALL::cPtr_baseline_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

void cPtr_baseline_5F_instruction_5F_CALL::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ("baseline_instruction_CALL",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL GGS_baseline_5F_instruction_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_CALL result ;
  const GGS_baseline_5F_instruction_5F_CALL * p = (const GGS_baseline_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_JSR::objectCompare (const GGS_baseline_5F_instruction_5F_JSR & inOperand) const {
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

GGS_baseline_5F_instruction_5F_JSR::GGS_baseline_5F_instruction_5F_JSR (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR GGS_baseline_5F_instruction_5F_JSR::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_JSR (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_JSR_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JSR::
baseline_5F_instruction_5F_JSR_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR::GGS_baseline_5F_instruction_5F_JSR (const cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR GGS_baseline_5F_instruction_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_lstring & in_mTargetLabel,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JSR (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JSR::cPtr_baseline_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mTargetLabel,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

void cPtr_baseline_5F_instruction_5F_JSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ("baseline_instruction_JSR",
                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR GGS_baseline_5F_instruction_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JSR result ;
  const GGS_baseline_5F_instruction_5F_JSR * p = (const GGS_baseline_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_GOTO::objectCompare (const GGS_baseline_5F_instruction_5F_GOTO & inOperand) const {
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

GGS_baseline_5F_instruction_5F_GOTO::GGS_baseline_5F_instruction_5F_GOTO (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO GGS_baseline_5F_instruction_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::
baseline_5F_instruction_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO::GGS_baseline_5F_instruction_5F_GOTO (const cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO GGS_baseline_5F_instruction_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_GOTO::cPtr_baseline_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

void cPtr_baseline_5F_instruction_5F_GOTO::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ("baseline_instruction_GOTO",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO GGS_baseline_5F_instruction_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_GOTO result ;
  const GGS_baseline_5F_instruction_5F_GOTO * p = (const GGS_baseline_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_JUMP::objectCompare (const GGS_baseline_5F_instruction_5F_JUMP & inOperand) const {
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

GGS_baseline_5F_instruction_5F_JUMP::GGS_baseline_5F_instruction_5F_JUMP (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP GGS_baseline_5F_instruction_5F_JUMP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_JUMP_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::
baseline_5F_instruction_5F_JUMP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP::GGS_baseline_5F_instruction_5F_JUMP (const cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP GGS_baseline_5F_instruction_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_JUMP (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_JUMP::cPtr_baseline_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

void cPtr_baseline_5F_instruction_5F_JUMP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ("baseline_instruction_JUMP",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP GGS_baseline_5F_instruction_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JUMP result ;
  const GGS_baseline_5F_instruction_5F_JUMP * p = (const GGS_baseline_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_TRIS::objectCompare (const GGS_baseline_5F_instruction_5F_TRIS & inOperand) const {
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

GGS_baseline_5F_instruction_5F_TRIS::GGS_baseline_5F_instruction_5F_TRIS (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS GGS_baseline_5F_instruction_5F_TRIS::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_TRIS_init_21__21_ (in_mInstructionLocation, in_mOperand, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::
baseline_5F_instruction_5F_TRIS_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mOperand,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS::GGS_baseline_5F_instruction_5F_TRIS (const cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS GGS_baseline_5F_instruction_5F_TRIS::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mOperand,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_TRIS (in_mInstructionLocation, in_mOperand,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_instruction_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_TRIS::cPtr_baseline_5F_instruction_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOperand () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

void cPtr_baseline_5F_instruction_5F_TRIS::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_instruction_5F_TRIS::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_TRIS generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ("baseline_instruction_TRIS",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS GGS_baseline_5F_instruction_5F_TRIS::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_TRIS result ;
  const GGS_baseline_5F_instruction_5F_TRIS * p = (const GGS_baseline_5F_instruction_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_STATIC_5F_REPEAT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
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

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_lstring & in_mConstantName,
                              const GGS_immediatExpression & in_mLowerBoundExpression,
                              const GGS_immediatExpression & in_mUpperBoundExpression,
                              const GGS_baseline_5F_instructionList & in_mInstructionList,
                              const GGS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::
baseline_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mConstantName,
                                                                          const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                          const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                          const GGS_baseline_5F_instructionList & in_mInstructionList,
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

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_lstring & in_mConstantName,
                                                                                                                 const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                 const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                 const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                 const GGS_location & in_mEndOfInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_lstring & in_mConstantName,
                                                                                                    const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                    const GGS_location & in_mEndOfInstruction,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_STATIC_REPEAT:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstruction.printNonNullClassInstanceProperties ("mEndOfInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_STATIC_REPEAT generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ("baseline_instruction_STATIC_REPEAT",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_STATIC_REPEAT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_BitTest::GGS_baseline_5F_instruction_5F_IF_5F_BitTest (void) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest GGS_baseline_5F_instruction_5F_IF_5F_BitTest::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_baseline_5F_instruction & in_mInstruction,
                          const GGS_bool & in_mSkipIfSet,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bitNumberExpression & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::
baseline_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_baseline_5F_instruction & in_mInstruction,
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

GGS_baseline_5F_instruction_5F_IF_5F_BitTest::GGS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest GGS_baseline_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                           const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                                           const GGS_bool & in_mSkipIfSet,
                                                                                                           const GGS_registerExpression & in_mRegisterExpression,
                                                                                                           const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_baseline_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                              const GGS_bool & in_mSkipIfSet,
                                                                                              const GGS_registerExpression & in_mRegisterExpression,
                                                                                              const GGS_bitNumberExpression & in_mBitNumber,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction, inCompiler COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_IF_BitTest:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_IF_BitTest generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ("baseline_instruction_IF_BitTest",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest GGS_baseline_5F_instruction_5F_IF_5F_BitTest::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest * p = (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_instruction_IF_BitTest getBaseCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GGS_uint & outArgument_outBaseCode,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
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

void callExtensionMethod_getBaseCode (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_instruction_IF_BitTest getMnemonic'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GGS_string & outArgument_outMnemonic,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
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

void callExtensionMethod_getMnemonic (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_IncDec::GGS_baseline_5F_instruction_5F_IF_5F_IncDec (void) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec GGS_baseline_5F_instruction_5F_IF_5F_IncDec::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_baseline_5F_instruction & in_mInstruction,
                          const GGS_bool & in_mIncrement,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::
baseline_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_baseline_5F_instruction & in_mInstruction,
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

GGS_baseline_5F_instruction_5F_IF_5F_IncDec::GGS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec GGS_baseline_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                                         const GGS_bool & in_mIncrement,
                                                                                                         const GGS_registerExpression & in_mRegisterExpression,
                                                                                                         const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                            const GGS_bool & in_mIncrement,
                                                                                            const GGS_registerExpression & in_mRegisterExpression,
                                                                                            const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction, inCompiler COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_IF_IncDec:") ;
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

acPtr_class * cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_IF_IncDec generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ("baseline_instruction_IF_IncDec",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec GGS_baseline_5F_instruction_5F_IF_5F_IncDec::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec * p = (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_incDecRegisterInCondition::objectCompare (const GGS_baseline_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_baseline_5F_incDecRegisterInCondition::GGS_baseline_5F_incDecRegisterInCondition (void) :
GGS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition GGS_baseline_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_mIncrement,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      const GGS_bool & in_mBranchIfZero,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_baseline_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_incDecRegisterInCondition::
baseline_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
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

GGS_baseline_5F_incDecRegisterInCondition::GGS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition GGS_baseline_5F_incDecRegisterInCondition::class_func_new (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                     const GGS_bool & in_mIncrement,
                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                     const GGS_bool & in_mBranchIfZero,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_incDecRegisterInCondition (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_incDecRegisterInCondition::cPtr_baseline_5F_incDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                        const GGS_bool & in_mIncrement,
                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GGS_bool & in_mBranchIfZero,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_baseline_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_incDecRegisterInCondition::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_incDecRegisterInCondition:") ;
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

acPtr_class * cPtr_baseline_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ("baseline_incDecRegisterInCondition",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition GGS_baseline_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_incDecRegisterInCondition result ;
  const GGS_baseline_5F_incDecRegisterInCondition * p = (const GGS_baseline_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GGS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
              const GGS_bitNumberExpression & in_mBitNumber,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                                         const GGS_bitNumberExpression & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GGS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                                               const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_bitTest_in_structured_if_condition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_bitTest_in_structured_if_condition generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("baseline_bitTest_in_structured_if_condition",
                                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_model::GGS_baseline_5F_model (void) :
mProperty_mProgramName (),
mProperty_mDeviceName (),
mProperty_mConfigDefinitionList (),
mProperty_mRamDefinitionList (),
mProperty_mUnusedRegisterList (),
mProperty_mConstantDefinitionList (),
mProperty_mRoutineDefinitionList (),
mProperty_mUnusedRoutineList (),
mProperty_mEndOfProgram () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_model::GGS_baseline_5F_model (const GGS_baseline_5F_model & inSource) :
mProperty_mProgramName (inSource.mProperty_mProgramName),
mProperty_mDeviceName (inSource.mProperty_mDeviceName),
mProperty_mConfigDefinitionList (inSource.mProperty_mConfigDefinitionList),
mProperty_mRamDefinitionList (inSource.mProperty_mRamDefinitionList),
mProperty_mUnusedRegisterList (inSource.mProperty_mUnusedRegisterList),
mProperty_mConstantDefinitionList (inSource.mProperty_mConstantDefinitionList),
mProperty_mRoutineDefinitionList (inSource.mProperty_mRoutineDefinitionList),
mProperty_mUnusedRoutineList (inSource.mProperty_mUnusedRoutineList),
mProperty_mEndOfProgram (inSource.mProperty_mEndOfProgram) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_model & GGS_baseline_5F_model::operator = (const GGS_baseline_5F_model & inSource) {
  mProperty_mProgramName = inSource.mProperty_mProgramName ;
  mProperty_mDeviceName = inSource.mProperty_mDeviceName ;
  mProperty_mConfigDefinitionList = inSource.mProperty_mConfigDefinitionList ;
  mProperty_mRamDefinitionList = inSource.mProperty_mRamDefinitionList ;
  mProperty_mUnusedRegisterList = inSource.mProperty_mUnusedRegisterList ;
  mProperty_mConstantDefinitionList = inSource.mProperty_mConstantDefinitionList ;
  mProperty_mRoutineDefinitionList = inSource.mProperty_mRoutineDefinitionList ;
  mProperty_mUnusedRoutineList = inSource.mProperty_mUnusedRoutineList ;
  mProperty_mEndOfProgram = inSource.mProperty_mEndOfProgram ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_model GGS_baseline_5F_model::init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mProgramName,
                                                                                       const GGS_lstring & in_mDeviceName,
                                                                                       const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                                                       const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                                                       const GGS_lstringlist & in_mUnusedRegisterList,
                                                                                       const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                                                       const GGS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                                       const GGS_lstringlist & in_mUnusedRoutineList,
                                                                                       const GGS_location & in_mEndOfProgram,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_model result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProgramName = in_mProgramName ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mConfigDefinitionList = in_mConfigDefinitionList ;
  result.mProperty_mRamDefinitionList = in_mRamDefinitionList ;
  result.mProperty_mUnusedRegisterList = in_mUnusedRegisterList ;
  result.mProperty_mConstantDefinitionList = in_mConstantDefinitionList ;
  result.mProperty_mRoutineDefinitionList = in_mRoutineDefinitionList ;
  result.mProperty_mUnusedRoutineList = in_mUnusedRoutineList ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_model::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_model::GGS_baseline_5F_model (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1,
                                              const GGS_configDefinitionList & inOperand2,
                                              const GGS_ramDefinitionList & inOperand3,
                                              const GGS_lstringlist & inOperand4,
                                              const GGS_constantDefinitionList & inOperand5,
                                              const GGS_baseline_5F_routineDefinitionList & inOperand6,
                                              const GGS_lstringlist & inOperand7,
                                              const GGS_location & inOperand8) :
mProperty_mProgramName (inOperand0),
mProperty_mDeviceName (inOperand1),
mProperty_mConfigDefinitionList (inOperand2),
mProperty_mRamDefinitionList (inOperand3),
mProperty_mUnusedRegisterList (inOperand4),
mProperty_mConstantDefinitionList (inOperand5),
mProperty_mRoutineDefinitionList (inOperand6),
mProperty_mUnusedRoutineList (inOperand7),
mProperty_mEndOfProgram (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_model GGS_baseline_5F_model::class_func_new (const GGS_lstring & in_mProgramName,
                                                             const GGS_lstring & in_mDeviceName,
                                                             const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                             const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                             const GGS_lstringlist & in_mUnusedRegisterList,
                                                             const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                             const GGS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                             const GGS_lstringlist & in_mUnusedRoutineList,
                                                             const GGS_location & in_mEndOfProgram,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_model result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProgramName = in_mProgramName ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mConfigDefinitionList = in_mConfigDefinitionList ;
  result.mProperty_mRamDefinitionList = in_mRamDefinitionList ;
  result.mProperty_mUnusedRegisterList = in_mUnusedRegisterList ;
  result.mProperty_mConstantDefinitionList = in_mConstantDefinitionList ;
  result.mProperty_mRoutineDefinitionList = in_mRoutineDefinitionList ;
  result.mProperty_mUnusedRoutineList = in_mUnusedRoutineList ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_model::drop (void) {
  mProperty_mProgramName.drop () ;
  mProperty_mDeviceName.drop () ;
  mProperty_mConfigDefinitionList.drop () ;
  mProperty_mRamDefinitionList.drop () ;
  mProperty_mUnusedRegisterList.drop () ;
  mProperty_mConstantDefinitionList.drop () ;
  mProperty_mRoutineDefinitionList.drop () ;
  mProperty_mUnusedRoutineList.drop () ;
  mProperty_mEndOfProgram.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_model::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_model:") ;
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
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_model generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ("baseline_model",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_model ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_model (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_model GGS_baseline_5F_model::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_model result ;
  const GGS_baseline_5F_model * p = (const GGS_baseline_5F_model *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GGS_lstring & in_mLabel,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (in_mLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ("baseline_intermediate_pseudo_LABEL",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
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
// @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                                     const GGS_bool & in_mIsRegular,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                                       const GGS_bool & in_mIsRegular,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (in_mRoutineName, in_mIsRegular,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                                          const GGS_bool & in_mIsRegular,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_BEGIN_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (mProperty_mRoutineName, mProperty_mIsRegular, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ("baseline_intermediate_pseudo_BEGIN_ROUTINE",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                                   const GGS_uint & in_mPage,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (in_mRoutineName, in_mPage,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ("baseline_intermediate_pseudo_END_ROUTINE",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::staticTypeDescriptor (void) const {
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
// @baseline_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_GOTO::GGS_baseline_5F_intermediate_5F_GOTO (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::
baseline_5F_intermediate_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO::GGS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

void cPtr_baseline_5F_intermediate_5F_GOTO::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ("baseline_intermediate_GOTO",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  const GGS_baseline_5F_intermediate_5F_GOTO * p = (const GGS_baseline_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JUMP::GGS_baseline_5F_intermediate_5F_JUMP (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_uint & in_mCurrentPage,
                      const GGS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::
baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mTargetLabel,
                                                       const GGS_uint & in_mCurrentPage,
                                                       const GGS_uint & in_mTargetPage,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP::GGS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           const GGS_uint & in_mCurrentPage,
                                                                                           const GGS_uint & in_mTargetPage,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JUMP (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              const GGS_uint & in_mCurrentPage,
                                                                              const GGS_uint & in_mTargetPage,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

void cPtr_baseline_5F_intermediate_5F_JUMP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ("baseline_intermediate_JUMP",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  const GGS_baseline_5F_intermediate_5F_JUMP * p = (const GGS_baseline_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_CALL::objectCompare (const GGS_baseline_5F_intermediate_5F_CALL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_CALL::GGS_baseline_5F_intermediate_5F_CALL (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::
baseline_5F_intermediate_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL::GGS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

void cPtr_baseline_5F_intermediate_5F_CALL::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ("baseline_intermediate_CALL",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  const GGS_baseline_5F_intermediate_5F_CALL * p = (const GGS_baseline_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JSR::objectCompare (const GGS_baseline_5F_intermediate_5F_JSR & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JSR::GGS_baseline_5F_intermediate_5F_JSR (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_uint & in_mCurrentPage,
                      const GGS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::
baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTargetLabel,
                                                      const GGS_uint & in_mCurrentPage,
                                                      const GGS_uint & in_mTargetPage,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR::GGS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         const GGS_uint & in_mCurrentPage,
                                                                                         const GGS_uint & in_mTargetPage,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JSR::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            const GGS_uint & in_mCurrentPage,
                                                                            const GGS_uint & in_mTargetPage,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

void cPtr_baseline_5F_intermediate_5F_JSR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ("baseline_intermediate_JSR",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  const GGS_baseline_5F_intermediate_5F_JSR * p = (const GGS_baseline_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mOperand,
                                                                                           const GGS_uint & in_mOpcode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_TRIS (in_mInstructionLocation, in_mOperand, in_mOpcode,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_baseline_5F_intermediate_5F_TRIS::classDescriptor (void) const {
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

acPtr_class * cPtr_baseline_5F_intermediate_5F_TRIS::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ("baseline_intermediate_TRIS",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_intermediate_5F_TRIS::staticTypeDescriptor (void) const {
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
//Extension method '@registerExpression resolveBaselineAccess'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_resolveBaselineAccess (const GGS_registerTable constinArgument_inRegisterTable,
                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                            GGS_baseline_5F_intermediate_5F_registerExpression & outArgument_outIntermediateRegisterDescription,
                                                            GGS_bitSliceTable & outArgument_outBitSliceTable,
                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_offset_773 ;
  const GGS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_773, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 21)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 22)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_888 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_773.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_888.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_773.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)).getter_hexString (SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 26)) ;
    }
  }
  GGS_uintlist var_registerAddressList_1105 ;
  GGS_registerProtection var_protection_1170 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_uint joker_1129 ; // Joker input parameter
  GGS_string joker_1158 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_1105, joker_1129, outArgument_outBitSliceTable, joker_1158, var_protection_1170, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 29)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GGS_bool (true), var_protection_1170, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 37)) ;
  GGS_uint var_registerAddress_1318 = GGS_uint (uint32_t (0U)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_registerAddressList_1105.getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 40)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_bool var_found_1394 = GGS_bool (false) ;
      UpEnumerator_uintlist enumerator_1417 (var_registerAddressList_1105) ;
      bool bool_7 = var_found_1394.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
      if (enumerator_1417.hasCurrentObject () && bool_7) {
        while (enumerator_1417.hasCurrentObject () && bool_7) {
          var_registerAddress_1318 = enumerator_1417.current_mValue (HERE) ;
          var_found_1394 = GGS_bool (ComparisonKind::lowerOrEqual, enumerator_1417.current_mValue (HERE).objectCompare (GGS_uint (uint32_t (31U)))) ;
          enumerator_1417.gotoNextObject () ;
          if (enumerator_1417.hasCurrentObject ()) {
            bool_7 = var_found_1394.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 42)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_found_1394.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 46)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_registerExpression temp_9 = this ;
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mRegisterName ().readProperty_location (), GGS_string ("the register cannot be accessed directly; use indirect addressing throught FSR register"), fixItArray10  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 47)) ;
        }
      }
    }
  }
  outArgument_outIntermediateRegisterDescription = GGS_baseline_5F_intermediate_5F_registerExpression::init_21__21_ (var_assemblyString_888, var_registerAddress_1318.add_operation (var_offset_773.getter_uint (inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 53)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_resolveBaselineAccess (cPtr_registerExpression * inObject,
                                                const GGS_registerTable constin_inRegisterTable,
                                                const GGS_constantMap constin_inConstantMap,
                                                GGS_baseline_5F_intermediate_5F_registerExpression & out_outIntermediateRegisterDescription,
                                                GGS_bitSliceTable & out_outBitSliceTable,
                                                GGS_stringset & io_ioUsedRegisters,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outIntermediateRegisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_resolveBaselineAccess (constin_inRegisterTable, constin_inConstantMap, out_outIntermediateRegisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_GOTO optimizeGOTO'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_optimizeGOTO (const GGS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GGS_uint constinArgument_inLineIndex,
                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_reachedLabelSet_10618 ;
  {
  GGS_baseline_5F_intermediate_5F_instruction joker_10610 ; // Joker input parameter
  routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 265)), ioArgument_ioGeneratedInstructionList, joker_10610, var_reachedLabelSet_10618, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 265)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_10618.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 266)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 267)) ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)).add_operation (GGS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 268)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_line_11028 ;
    const GGS_baseline_5F_intermediate_5F_GOTO temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_11028, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 271)) ;
    GGS_baseline_5F_intermediate_5F_instruction var_firstInstruction_11164 ;
    {
    routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_11028.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_11164, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 273)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_11243 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_11164.ptr ())) ;
      if (nullptr == var_literalOp_11243.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_literalOp_11243.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 278)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_11243, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 279)) ;
            }
            ioArgument_ioOptimizationsDone = GGS_bool (true) ;
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)).add_operation (GGS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 284)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_baseline_5F_intermediate_5F_GOTO var_goto_11807 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_11164.ptr ())) ;
        if (nullptr == var_goto_11807.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            const GGS_baseline_5F_intermediate_5F_GOTO temp_7 = this ;
            test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mTargetLabel ().objectCompare (var_goto_11807.readProperty_mTargetLabel ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              const GGS_baseline_5F_intermediate_5F_GOTO temp_8 = this ;
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_GOTO::init_21__21_ (temp_8.readProperty_mInstructionLocation (), var_goto_11807.readProperty_mTargetLabel (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 289)) ;
              }
              ioArgument_ioOptimizationsDone = GGS_bool (true) ;
              const GGS_baseline_5F_intermediate_5F_GOTO temp_9 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GGS_string (": GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (temp_9.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GGS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (var_goto_11807.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GGS_string (" replaced by GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (var_goto_11807.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 296)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeGOTO (cPtr_baseline_5F_intermediate_5F_GOTO * inObject,
                                       const GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GGS_uint constin_inLineIndex,
                                       GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GGS_string & io_ioListFileContents,
                                       GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    inObject->method_optimizeGOTO (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_JUMP optimizeJUMP'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_optimizeJUMP (const GGS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GGS_uint constinArgument_inLineIndex,
                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_line_12895 ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_12895, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 312)) ;
  GGS_baseline_5F_intermediate_5F_instruction var_firstInstruction_13074 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_12895.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 315)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13074, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 314)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13151 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13074.ptr ())) ;
    if (nullptr == var_literalOp_13151.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_literalOp_13151.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 323)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13151, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 324)) ;
          }
          ioArgument_ioOptimizationsDone = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 329)).add_operation (GGS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 329)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_baseline_5F_intermediate_5F_GOTO var_goto_13693 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (var_firstInstruction_13074.ptr ())) ;
      if (nullptr == var_goto_13693.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
          test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mTargetLabel ().objectCompare (var_goto_13693.readProperty_mTargetLabel ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            const GGS_baseline_5F_intermediate_5F_JUMP temp_6 = this ;
            const GGS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
            const GGS_baseline_5F_intermediate_5F_JUMP temp_8 = this ;
            ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_goto_13693.readProperty_mTargetLabel (), temp_7.readProperty_mCurrentPage (), temp_8.readProperty_mTargetPage (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 334)) ;
            }
            ioArgument_ioOptimizationsDone = GGS_bool (true) ;
            const GGS_baseline_5F_intermediate_5F_JUMP temp_9 = this ;
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (GGS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (temp_9.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (GGS_string (" branching to GOTO "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)).add_operation (var_goto_13693.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 344)).add_operation (GGS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 344)).add_operation (var_goto_13693.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 345)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 343)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_baseline_5F_intermediate_5F_JUMP var_jump_14348 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (var_firstInstruction_13074.ptr ())) ;
        if (nullptr == var_jump_14348.ptr ()) {
          test_10 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_10) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mTargetLabel ().objectCompare (var_jump_14348.readProperty_mTargetLabel ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              {
              const GGS_baseline_5F_intermediate_5F_JUMP temp_13 = this ;
              const GGS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_13.readProperty_mInstructionLocation (), var_jump_14348.readProperty_mTargetLabel (), temp_14.readProperty_mCurrentPage (), var_jump_14348.readProperty_mTargetPage (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 350)) ;
              }
              ioArgument_ioOptimizationsDone = GGS_bool (true) ;
              const GGS_baseline_5F_intermediate_5F_JUMP temp_15 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (GGS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (temp_15.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (GGS_string (" branching to JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)).add_operation (var_jump_14348.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 360)).add_operation (GGS_string (" replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 360)).add_operation (var_jump_14348.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 359)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJUMP (cPtr_baseline_5F_intermediate_5F_JUMP * inObject,
                                       const GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GGS_uint constin_inLineIndex,
                                       GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GGS_string & io_ioListFileContents,
                                       GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    inObject->method_optimizeJUMP (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_CALL optimizeCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_optimizeCALL (const GGS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GGS_uint constinArgument_inLineIndex,
                                                                 GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_line_15471 ;
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_15471, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 376)) ;
  GGS_baseline_5F_intermediate_5F_instruction var_firstInstruction_15650 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_15471.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 379)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_15650, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 378)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_15727 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_15650.ptr ())) ;
    if (nullptr == var_literalOp_15727.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_literalOp_15727.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 387)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          const GGS_baseline_5F_intermediate_5F_CALL temp_3 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 391)), var_literalOp_15727.readProperty_mLiteralValue (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 388)) ;
          }
          ioArgument_ioOptimizationsDone = GGS_bool (true) ;
          const GGS_baseline_5F_intermediate_5F_CALL temp_4 = this ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (GGS_string (": CALL "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (GGS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)).add_operation (var_literalOp_15727.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 397)).add_operation (GGS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 397)).add_operation (var_literalOp_15727.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 398)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 396)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeCALL (cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                       const GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                       const GGS_uint constin_inLineIndex,
                                       GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GGS_string & io_ioListFileContents,
                                       GGS_bool & io_ioOptimizationsDone,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_CALL) ;
    inObject->method_optimizeCALL (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_JSR optimizeJSR'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_optimizeJSR (const GGS_baselineSymbolTableForOptimizations constinArgument_inSymbolTable,
                                                               const GGS_uint constinArgument_inLineIndex,
                                                               GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                               GGS_string & ioArgument_ioListFileContents,
                                                               GGS_bool & ioArgument_ioOptimizationsDone,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_line_16974 ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_line_16974, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 413)) ;
  GGS_baseline_5F_intermediate_5F_instruction var_firstInstruction_17153 ;
  {
  routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (var_line_16974.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 416)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_17153, inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 415)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_17230 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_17153.ptr ())) ;
    if (nullptr == var_literalOp_17230.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_literalOp_17230.readProperty_mInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 424)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          const GGS_baseline_5F_intermediate_5F_JSR temp_3 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_optimizations.galgas", 428)), var_literalOp_17230.readProperty_mLiteralValue (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 425)) ;
          }
          ioArgument_ioOptimizationsDone = GGS_bool (true) ;
          const GGS_baseline_5F_intermediate_5F_JSR temp_4 = this ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (GGS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (GGS_string (" to RETLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)).add_operation (var_literalOp_17230.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 434)).add_operation (GGS_string (" replaced by MOVLW "), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 434)).add_operation (var_literalOp_17230.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 435)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 433)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeJSR (cPtr_baseline_5F_intermediate_5F_JSR * inObject,
                                      const GGS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GGS_uint constin_inLineIndex,
                                      GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GGS_string & io_ioListFileContents,
                                      GGS_bool & io_ioOptimizationsDone,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_JSR) ;
    inObject->method_optimizeJSR (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE optimizeBEGIN_ROUTINE'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_optimizeBEGIN_5F_ROUTINE (const GGS_uint constinArgument_inLineIndex,
                                                                                                   GGS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   GGS_bool & ioArgument_ioOptimizationsDone,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction var_nextInstruction_18539 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 451)) ;
  GGS_bool var_reachable_18670 = GGS_bool (false) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var__18697 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_nextInstruction_18539.ptr ())) ;
    if (nullptr == var__18697.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_reachable_18670 = GGS_bool (true) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_reachable_18670.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 461)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 462)) ;
      }
      ioArgument_ioOptimizationsDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 467)).add_operation (GGS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 467)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBEGIN_5F_ROUTINE (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inObject,
                                                   const GGS_uint constin_inLineIndex,
                                                   GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                   GGS_string & io_ioListFileContents,
                                                   GGS_bool & io_ioOptimizationsDone,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    inObject->method_optimizeBEGIN_5F_ROUTINE (constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::
baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                               const GGS_bool & in_mIsRegular,
                                                               Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                           const GGS_bool & in_mIsRegular,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (in_mRoutineName, in_mIsRegular,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_BEGINOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                              const GGS_bool & in_mIsRegular,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_BEGINOFROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (mProperty_mRoutineName, mProperty_mIsRegular, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_BEGINOFROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ("baseline_assembly_pseudo_BEGINOFROUTINE",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_uint & in_mPage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (in_mRoutineName, in_mPage, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::
baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                             const GGS_uint & in_mPage,
                                                             Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                       const GGS_uint & in_mPage,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (in_mRoutineName, in_mPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ENDOFROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                          const GGS_uint & in_mPage,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_ENDOFROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (mProperty_mRoutineName, mProperty_mPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_ENDOFROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ("baseline_assembly_pseudo_ENDOFROUTINE",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ENDOFROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::objectCompare (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inOperand) const {
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

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (void) :
GGS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::
init_21_ (const GGS_lstring & in_mLabel,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (in_mLabel, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::
baseline_5F_assembly_5F_pseudo_5F_LABEL_init_21_ (const GGS_lstring & in_mLabel,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * inSourcePtr) :
GGS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::class_func_new (const GGS_lstring & in_mLabel,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (in_mLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLabel () {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL (mProperty_mLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_pseudo_LABEL generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ("baseline_assembly_pseudo_LABEL",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL * p = (const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_GOTO::objectCompare (const GGS_baseline_5F_assembly_5F_GOTO & inOperand) const {
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

GGS_baseline_5F_assembly_5F_GOTO::GGS_baseline_5F_assembly_5F_GOTO (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::
baseline_5F_assembly_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mTargetLabel,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO::GGS_baseline_5F_assembly_5F_GOTO (const cPtr_baseline_5F_assembly_5F_GOTO * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_lstring & in_mTargetLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_GOTO * p = (cPtr_baseline_5F_assembly_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_GOTO::cPtr_baseline_5F_assembly_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mTargetLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

void cPtr_baseline_5F_assembly_5F_GOTO::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ("baseline_assembly_GOTO",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_GOTO GGS_baseline_5F_assembly_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_GOTO result ;
  const GGS_baseline_5F_assembly_5F_GOTO * p = (const GGS_baseline_5F_assembly_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_CALL::objectCompare (const GGS_baseline_5F_assembly_5F_CALL & inOperand) const {
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

GGS_baseline_5F_assembly_5F_CALL::GGS_baseline_5F_assembly_5F_CALL (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::
baseline_5F_assembly_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mTargetLabel,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL::GGS_baseline_5F_assembly_5F_CALL (const cPtr_baseline_5F_assembly_5F_CALL * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_lstring & in_mTargetLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_CALL * p = (cPtr_baseline_5F_assembly_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_CALL::cPtr_baseline_5F_assembly_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mTargetLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

void cPtr_baseline_5F_assembly_5F_CALL::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ("baseline_assembly_CALL",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_CALL GGS_baseline_5F_assembly_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_CALL result ;
  const GGS_baseline_5F_assembly_5F_CALL * p = (const GGS_baseline_5F_assembly_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_assembly_5F_TRIS::objectCompare (const GGS_baseline_5F_assembly_5F_TRIS & inOperand) const {
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

GGS_baseline_5F_assembly_5F_TRIS::GGS_baseline_5F_assembly_5F_TRIS (void) :
GGS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mOperand,
                  const GGS_uint & in_mOpcode,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_TRIS_init_21__21__21_ (in_mInstructionLocation, in_mOperand, in_mOpcode, inCompiler) ;
  const GGS_baseline_5F_assembly_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::
baseline_5F_assembly_5F_TRIS_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mOperand,
                                               const GGS_uint & in_mOpcode,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS::GGS_baseline_5F_assembly_5F_TRIS (const cPtr_baseline_5F_assembly_5F_TRIS * inSourcePtr) :
GGS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_lstring & in_mOperand,
                                                                                   const GGS_uint & in_mOpcode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_TRIS (in_mInstructionLocation, in_mOperand, in_mOpcode,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_assembly_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_assembly_5F_TRIS::readProperty_mOpcode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_TRIS * p = (cPtr_baseline_5F_assembly_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_TRIS::cPtr_baseline_5F_assembly_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mOperand,
                                                                      const GGS_uint & in_mOpcode,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

void cPtr_baseline_5F_assembly_5F_TRIS::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_TRIS::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mOpcode.printNonNullClassInstanceProperties ("mOpcode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_TRIS generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ("baseline_assembly_TRIS",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_baseline_5F_assembly_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_TRIS GGS_baseline_5F_assembly_5F_TRIS::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_TRIS result ;
  const GGS_baseline_5F_assembly_5F_TRIS * p = (const GGS_baseline_5F_assembly_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                       const GGS_registerExpression & in_mRegister,
                                                                                                                       const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (in_mInstructionLocation, in_mRegister, in_mWarningOnUselessBanksel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_banksel_5F_register::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ("midrange_instruction_banksel_register",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_registerExpression & in_mRegister,
                                                                                                 const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                 const GGS_location & in_mEndOfSaveBankInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_savebank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_savebank (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_savebank::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_savebank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ("midrange_instruction_savebank",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_savebank::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_lstring & in_mConstantName,
                                                                                                                 const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                 const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                 const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                 const GGS_location & in_mEndOfInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ("midrange_instruction_STATIC_REPEAT",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FD::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ("midrange_instruction_FD",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                   const GGS_registerExpression & in_mRegisterExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_F (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_F::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ("midrange_instruction_F",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_F::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bitNumberExpression & in_mBitNumber,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FB (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FB::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ("midrange_instruction_FB",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CALL::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ("midrange_instruction_CALL",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_lstring & in_mTargetLabel,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JSR (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_JSR::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ("midrange_instruction_JSR",
                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JUMP (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_JUMP::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ("midrange_instruction_JUMP",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_GOTO::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ("midrange_instruction_GOTO",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                           const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                           const GGS_bool & in_mSkipIfSet,
                                                                                                           const GGS_registerExpression & in_mRegisterExpression,
                                                                                                           const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                         const GGS_bool & in_mIncrement,
                                                                                                         const GGS_registerExpression & in_mRegisterExpression,
                                                                                                         const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition::class_func_new (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                     const GGS_bool & in_mIncrement,
                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                     const GGS_bool & in_mBranchIfZero,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_incDecRegisterInCondition (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_incDecRegisterInCondition::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                                               const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_model GGS_midrange_5F_model::class_func_new (const GGS_lstring & in_mProgramName,
                                                             const GGS_lstring & in_mDeviceName,
                                                             const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                             const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                             const GGS_lstringlist & in_mUnusedRegisterList,
                                                             const GGS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                                             const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                             const GGS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                             const GGS_lstringlist & in_mUnusedRoutineList,
                                                             const GGS_bool & in_mNeedsComputedGoto2,
                                                             const GGS_bool & in_mNeedsComputedGoto4,
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
  result.mProperty_mNeedsComputedGoto_32_ = in_mNeedsComputedGoto2 ;
  result.mProperty_mNeedsComputedGoto_34_ = in_mNeedsComputedGoto4 ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_model ("midrange_model",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_model::staticTypeDescriptor (void) const {
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
  GGS_sint_36__34_ var_offset_648 ;
  const GGS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_648, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 21)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 22)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_763 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_648.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_763.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)).getter_hexString (SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 26)) ;
    }
  }
  GGS_uintlist var_registerAddressList_967 ;
  GGS_uint var_size_1002 ;
  GGS_registerProtection var_protection_1045 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_string joker_1033 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_967, var_size_1002, outArgument_outBitSliceTable, joker_1033, var_protection_1045, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 29)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), GGS_bool (true), var_protection_1045, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 37)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 39)).objectCompare (var_size_1002)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_1002.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)), fixItArray8  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 40)) ;
    }
  }
  GGS_uintlist var_acceptableBanks_1305 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_uintlist enumerator_1342 (var_registerAddressList_967) ;
  while (enumerator_1342.hasCurrentObject ()) {
    var_acceptableBanks_1305.addAssignOperation (enumerator_1342.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45))  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 45)) ;
    enumerator_1342.gotoNextObject () ;
  }
  GGS_uint var_registerAddress_1436 = GGS_uint (uint32_t (0U)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_intermediate_classes.galgas", 49)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GGS_uint var_bank_1574 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_ok_1597 = GGS_bool (true) ;
      if (constinArgument_inTotalBankCount.isValid ()) {
        uint32_t variant_1611 = constinArgument_inTotalBankCount.uintValue () ;
        bool loop_1611 = true ;
        while (loop_1611) {
          loop_1611 = GGS_bool (ComparisonKind::lowerThan, var_bank_1574.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1597 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).isValid () ;
          if (loop_1611) {
            loop_1611 = GGS_bool (ComparisonKind::lowerThan, var_bank_1574.objectCompare (constinArgument_inTotalBankCount)).operator_and (var_ok_1597 COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)).boolValue () ;
          }
          if (loop_1611 && (0 == variant_1611)) {
            loop_1611 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_intermediate_classes.galgas", 53)) ;
          }
          if (loop_1611) {
            variant_1611 -- ;
            var_ok_1597 = GGS_bool (false) ;
            UpEnumerator_uintlist enumerator_1703 (var_registerAddressList_967) ;
            bool bool_10 = var_ok_1597.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
            if (enumerator_1703.hasCurrentObject () && bool_10) {
              while (enumerator_1703.hasCurrentObject () && bool_10) {
                var_ok_1597 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_1703.current_mValue (HERE).objectCompare (var_bank_1574.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))).operator_and (GGS_bool (ComparisonKind::lowerThan, enumerator_1703.current_mValue (HERE).objectCompare (var_bank_1574.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)).add_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 56)) ;
                var_registerAddress_1436 = enumerator_1703.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 57)) ;
                enumerator_1703.gotoNextObject () ;
                if (enumerator_1703.hasCurrentObject ()) {
                  bool_10 = var_ok_1597.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 55)).isValidAndTrue () ;
                }
              }
            }
            var_bank_1574.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 59)) ;
          }
        }
      }
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = var_ok_1597.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 61)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_string var_acceptableBankMessage_1932 = GGS_string::makeEmptyString () ;
          UpEnumerator_uintlist enumerator_1970 (var_registerAddressList_967) ;
          while (enumerator_1970.hasCurrentObject ()) {
            var_acceptableBankMessage_1932.plusAssignOperation(enumerator_1970.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 64)) ;
            enumerator_1970.gotoNextObject () ;
            if (enumerator_1970.hasCurrentObject ()) {
              var_acceptableBankMessage_1932.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 65)) ;
            }
          }
          const GGS_registerExpression temp_12 = this ;
          const GGS_registerExpression temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterName ().readProperty_location (), GGS_string ("as no bank is currently known, the '").add_operation (temp_13.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GGS_string ("' register accessible from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (var_acceptableBankMessage_1932, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)).add_operation (GGS_string (", but should be able to be accessed from any bank setting"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)), fixItArray14  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 67)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_bool var_found_2354 = GGS_bool (false) ;
    UpEnumerator_uintlist enumerator_2377 (var_registerAddressList_967) ;
    bool bool_15 = var_found_2354.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
    if (enumerator_2377.hasCurrentObject () && bool_15) {
      while (enumerator_2377.hasCurrentObject () && bool_15) {
        var_found_2354 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_2377.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))).operator_and (GGS_bool (ComparisonKind::lowerThan, enumerator_2377.current_mValue (HERE).objectCompare (constinArgument_inCurrentBank.multiply_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)).add_operation (GGS_uint (uint32_t (128U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)))) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 72)) ;
        var_registerAddress_1436 = enumerator_2377.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 73)) ;
        enumerator_2377.gotoNextObject () ;
        if (enumerator_2377.hasCurrentObject ()) {
          bool_15 = var_found_2354.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 71)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_found_2354.operator_not (SOURCE_FILE ("midrange_intermediate_classes.galgas", 75)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_string var_acceptableBankMessage_2603 = GGS_string::makeEmptyString () ;
        UpEnumerator_uintlist enumerator_2641 (var_registerAddressList_967) ;
        while (enumerator_2641.hasCurrentObject ()) {
          var_acceptableBankMessage_2603.plusAssignOperation(enumerator_2641.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)).getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 78)) ;
          enumerator_2641.gotoNextObject () ;
          if (enumerator_2641.hasCurrentObject ()) {
            var_acceptableBankMessage_2603.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 79)) ;
          }
        }
        const GGS_registerExpression temp_17 = this ;
        const GGS_registerExpression temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_18.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GGS_string ("' register cannot be accessed from bank "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GGS_string (" (valid bank setting: "), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (var_acceptableBankMessage_2603, inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)), fixItArray19  COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 81)) ;
      }
    }
  }
  outArgument_outIPICregisterDescription = GGS_midrange_5F_intermediate_5F_registerExpression::init_21__21_ (var_assemblyString_763, var_registerAddress_1436.add_operation (var_offset_648.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_classes.galgas", 87)), inCompiler COMMA_HERE) ;
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

GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GGS_lstring & in_mLabel,
                                                                                                                 const GGS_bool & in_mIsDeletable,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (in_mLabel, in_mIsDeletable,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ("midrange_intermediate_pseudo_LABEL",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_intermediate_5F_JUMP GGS_midrange_5F_intermediate_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                                           const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JUMP (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JUMP::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ("midrange_intermediate_JUMP",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_intermediate_5F_GOTO GGS_midrange_5F_intermediate_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_GOTO::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ("midrange_intermediate_GOTO",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_intermediate_5F_CALL GGS_midrange_5F_intermediate_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_CALL::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ("midrange_intermediate_CALL",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
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

GGS_midrange_5F_intermediate_5F_JSR GGS_midrange_5F_intermediate_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                                                         const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_intermediate_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mBit_31__31_, in_mBit_31__32_,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_midrange_5F_intermediate_5F_JSR::classDescriptor (void) const {
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

acPtr_class * cPtr_midrange_5F_intermediate_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ("midrange_intermediate_JSR",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_midrange_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
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
//Extension method '@midrange_intermediate_JUMP optimizeJUMP'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_optimizeJUMP (const GGS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                 const GGS_uint constinArgument_inLineIndex,
                                                                 GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_bool & ioArgument_ioOptimizationsDone,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_reachedLabelSet_9835 ;
  {
  GGS_midrange_5F_intermediate_5F_instruction joker_9827 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)), ioArgument_ioGeneratedInstructionList, joker_9827, var_reachedLabelSet_9835, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 233)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = var_reachedLabelSet_9835.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 235)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 236)) ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)).add_operation (GGS_string (": JUMP branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 237)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_line_10288 ;
    const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
    GGS_bool joker_10293 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_10288, joker_10293, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 240)) ;
    GGS_midrange_5F_intermediate_5F_instruction var_firstInstruction_10427 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_10288.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_10427, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 242)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__10506 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_10427.ptr ())) ;
      if (nullptr == var__10506.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_midrange_5F_intermediate_5F_JUMP temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 247)) ;
        }
        ioArgument_ioOptimizationsDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)).add_operation (GGS_string (": JUMP branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 252)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_10990 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_10427.ptr ())) ;
        if (nullptr == var_literalOp_10990.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_literalOp_10990.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 255)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_10990, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 256)) ;
              }
              ioArgument_ioOptimizationsDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)).add_operation (GGS_string (": JUMP branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 261)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_midrange_5F_intermediate_5F_JUMP var_jump_11534 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_10427.ptr ())) ;
          if (nullptr == var_jump_11534.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
              test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_11534.readProperty_mTargetLabel ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                const GGS_midrange_5F_intermediate_5F_JUMP temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_jump_11534.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 267)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 267)), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 266)) ;
                }
                ioArgument_ioOptimizationsDone = GGS_bool (true) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 271)).add_operation (GGS_string (": JUMP branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 271)) ;
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
  GGS_stringset var_reachedLabelSet_12695 ;
  {
  GGS_midrange_5F_intermediate_5F_instruction joker_12687 ; // Joker input parameter
  routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 288)), ioArgument_ioGeneratedInstructionList, joker_12687, var_reachedLabelSet_12695, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 288)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
    test_0 = var_reachedLabelSet_12695.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 290)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 291)) ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)).add_operation (GGS_string (": GOTO branching to next instruction deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 292)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_line_13147 ;
    const GGS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
    GGS_bool joker_13152 ; // Joker input parameter
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mTargetLabel (), var_line_13147, joker_13152, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 295)) ;
    GGS_midrange_5F_intermediate_5F_instruction var_firstInstruction_13286 ;
    {
    routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_13147.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 297)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_13286, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 297)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__13393 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_13286.ptr ())) ;
      if (nullptr == var__13393.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_midrange_5F_intermediate_5F_GOTO temp_4 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 303)) ;
        }
        ioArgument_ioOptimizationsDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)).add_operation (GGS_string (": GOTO branching to RETURN replaced by RETURN\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 308)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_literalOp_13877 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_firstInstruction_13286.ptr ())) ;
        if (nullptr == var_literalOp_13877.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_literalOp_13877.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 311)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_literalOp_13877, constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 312)) ;
              }
              ioArgument_ioOptimizationsDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 317)).add_operation (GGS_string (": GOTO branching to RETLW replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 317)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_midrange_5F_intermediate_5F_JUMP var_jump_14421 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_13286.ptr ())) ;
          if (nullptr == var_jump_14421.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_midrange_5F_intermediate_5F_GOTO temp_9 = this ;
              test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mTargetLabel ().objectCompare (var_jump_14421.readProperty_mTargetLabel ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                const GGS_midrange_5F_intermediate_5F_GOTO temp_10 = this ;
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_jump_14421.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 323)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_optimizations.galgas", 323)), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 322)) ;
                }
                ioArgument_ioOptimizationsDone = GGS_bool (true) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 327)).add_operation (GGS_string (": GOTO branching to JUMP replaced by JUMP\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 327)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_midrange_5F_intermediate_5F_GOTO var_goto_15004 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_firstInstruction_13286.ptr ())) ;
            if (nullptr == var_goto_15004.ptr ()) {
              test_11 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                const GGS_midrange_5F_intermediate_5F_GOTO temp_13 = this ;
                test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mTargetLabel ().objectCompare (var_goto_15004.readProperty_mTargetLabel ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  {
                  const GGS_midrange_5F_intermediate_5F_GOTO temp_14 = this ;
                  ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_14.readProperty_mInstructionLocation (), var_goto_15004.readProperty_mTargetLabel (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 332)) ;
                  }
                  ioArgument_ioOptimizationsDone = GGS_bool (true) ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 337)).add_operation (GGS_string (": GOTO branching to GOTO replaced by GOTO\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 337)) ;
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

GGS_pic_31__38_Instruction_5F_banksel_5F_register GGS_pic_31__38_Instruction_5F_banksel_5F_register::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                     const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register (in_mInstructionLocation, in_mRegisterExpression, in_mWarningOnUselessBanksel,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_banksel_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ("pic18Instruction_banksel_register",
                                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_savebank GGS_pic_31__38_Instruction_5F_savebank::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_registerExpression & in_mRegister,
                                                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                               const GGS_location & in_mEndOfSaveBankInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_savebank result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_savebank (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_savebank::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_savebank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ("pic18Instruction_savebank",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_savebank::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_repetitionStatique GGS_pic_31__38_Instruction_5F_repetitionStatique::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                   const GGS_lstring & in_mConstantName,
                                                                                                                   const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                   const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                   const GGS_location & in_mEndOfInstruction,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_repetitionStatique result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_repetitionStatique::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_repetitionStatique::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ("pic18Instruction_repetitionStatique",
                                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_repetitionStatique::staticTypeDescriptor (void) const {
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

GGS_gotoTerminationForBlockInstruction GGS_gotoTerminationForBlockInstruction::class_func_new (const GGS_lstring & in_mNextBlock,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_gotoTerminationForBlockInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_gotoTerminationForBlockInstruction (in_mNextBlock,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_gotoTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;
}

void cPtr_gotoTerminationForBlockInstruction::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@gotoTerminationForBlockInstruction:") ;
  mProperty_mNextBlock.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gotoTerminationForBlockInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ("gotoTerminationForBlockInstruction",
                                                                                          & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_gotoTerminationForBlockInstruction::staticTypeDescriptor (void) const {
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
// @testTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testTerminationForBlockInstruction::objectCompare (const GGS_testTerminationForBlockInstruction & inOperand) const {
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

GGS_testTerminationForBlockInstruction::GGS_testTerminationForBlockInstruction (void) :
GGS_abstractBlockTerminationForBlockInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::
init_21__21__21__21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                      const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                      const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                      const GGS_location & in_mLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_testTerminationForBlockInstruction * object = nullptr ;
  macroMyNew (object, cPtr_testTerminationForBlockInstruction (inCompiler COMMA_THERE)) ;
  object->testTerminationForBlockInstruction_init_21__21__21__21_ (in_mCondition, in_mTrueTermination, in_mFalseTermination, in_mLocation, inCompiler) ;
  const GGS_testTerminationForBlockInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::
testTerminationForBlockInstruction_init_21__21__21__21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                         const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                         const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                         const GGS_location & in_mLocation,
                                                         Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
  mProperty_mTrueTermination = in_mTrueTermination ;
  mProperty_mFalseTermination = in_mFalseTermination ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction::GGS_testTerminationForBlockInstruction (const cPtr_testTerminationForBlockInstruction * inSourcePtr) :
GGS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::class_func_new (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                                                               const GGS_location & in_mLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_testTerminationForBlockInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_testTerminationForBlockInstruction (in_mCondition, in_mTrueTermination, in_mFalseTermination, in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_testTerminationForBlockInstruction::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::readProperty_mTrueTermination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mTrueTermination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::readProperty_mFalseTermination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mFalseTermination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testTerminationForBlockInstruction::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mCondition (),
mProperty_mTrueTermination (),
mProperty_mFalseTermination (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                  const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                                                  const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                                                  const GGS_location & in_mLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mCondition (),
mProperty_mTrueTermination (),
mProperty_mFalseTermination (),
mProperty_mLocation () {
  mProperty_mCondition = in_mCondition ;
  mProperty_mTrueTermination = in_mTrueTermination ;
  mProperty_mFalseTermination = in_mFalseTermination ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_testTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

void cPtr_testTerminationForBlockInstruction::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@testTerminationForBlockInstruction:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTrueTermination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFalseTermination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_testTerminationForBlockInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testTerminationForBlockInstruction (mProperty_mCondition, mProperty_mTrueTermination, mProperty_mFalseTermination, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
    mProperty_mTrueTermination.printNonNullClassInstanceProperties ("mTrueTermination") ;
    mProperty_mFalseTermination.printNonNullClassInstanceProperties ("mFalseTermination") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testTerminationForBlockInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ("testTerminationForBlockInstruction",
                                                                                          & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_testTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_testTerminationForBlockInstruction result ;
  const GGS_testTerminationForBlockInstruction * p = (const GGS_testTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_pic_31__38_Instruction_5F_block GGS_pic_31__38_Instruction_5F_block::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mStartBlockName,
                                                                                         const GGS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                                                         const GGS_location & in_mEndOfBlockInstruction,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_block result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_block (in_mInstructionLocation, in_mStartBlockName, in_mBlockList, in_mEndOfBlockInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_block::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_block::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ("pic18Instruction_block",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_block::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_FDA GGS_pic_31__38_Instruction_5F_FDA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FDA (in_mInstructionLocation, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FDA::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_FDA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ("pic18Instruction_FDA",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_FDA::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_FA GGS_pic_31__38_Instruction_5F_FA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                   const GGS_registerExpression & in_mRegisterExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FA result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FA (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FA::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_FA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ("pic18Instruction_FA",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_FA::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_MOVFF GGS_pic_31__38_Instruction_5F_MOVFF::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_registerExpression & in_mSourceRegisterName,
                                                                                         const GGS_registerExpression & in_mDestinationRegisterName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MOVFF result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_MOVFF (in_mInstructionLocation, in_mSourceRegisterName, in_mDestinationRegisterName,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_MOVFF::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_MOVFF::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ("pic18Instruction_MOVFF",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_MOVFF::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_FBA GGS_pic_31__38_Instruction_5F_FBA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bitNumberExpression & in_mBitNumber,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FBA result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_FBA (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_FBA::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_FBA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ("pic18Instruction_FBA",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_FBA::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_JSR GGS_pic_31__38_Instruction_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_lstring & in_mTargetLabel,
                                                                                     const GGS_jumpInstructionKind & in_mKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JSR::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ("pic18Instruction_JSR",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_JSR::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_macro GGS_pic_31__38_Instruction_5F_macro::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mMacroName,
                                                                                         const GGS_immediatExpressionList & in_mExpressionList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_macro result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_macro (in_mInstructionLocation, in_mMacroName, in_mExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_macro::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_macro::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ("pic18Instruction_macro",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_macro::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_JUMP GGS_pic_31__38_Instruction_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_lstring & in_mTargetLabel,
                                                                                       const GGS_jumpInstructionKind & in_mKind,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMP (in_mInstructionLocation, in_mTargetLabel, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMP::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ("pic18Instruction_JUMP",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_JUMP::staticTypeDescriptor (void) const {
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

GGS_pic_31__38_Instruction_5F_JUMPCC GGS_pic_31__38_Instruction_5F_JUMPCC::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                                                           const GGS_bool & in_mIsBcc,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMPCC result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC (in_mInstructionLocation, in_mTargetLabel, in_mConditionalBranch, in_mIsBcc,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_JUMPCC::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_Instruction_5F_JUMPCC::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ("pic18Instruction_JUMPCC",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_pic_31__38_Instruction_5F_JUMPCC::staticTypeDescriptor (void) const {
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

